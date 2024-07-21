#!/bin/bash

PROJECT_HOME=`git rev-parse --show-toplevel`
BUILD_DIR=Build
PROJECT_NAME="DSA/CrackingTheCodingInterview"
FILE_NAME=
BUILD_LANGUAGE=

show_help() {
    echo "Usage:-"
    echo "python/cpp File.ipynb/File.cpp"
    echo "Configured Project:-" 
    echo $PROJECT_NAME
}

build_run_python() {
    cd $PROJECT_HOME/$PROJECT_NAME/Python
    # python3 $FILE_NAME
    echo "Python Notebook, better run using local tools!"
    jupyter nbconvert --to notebook --execute $FILE_NAME --stdout
}

build_run_cpp() {
    mkdir -p $PROJECT_HOME/$BUILD_DIR
    cd $PROJECT_HOME/$PROJECT_NAME/C++
    g++ -std=c++17 $FILE_NAME -o $PROJECT_HOME/$BUILD_DIR/Main
    cd $PROJECT_HOME/$BUILD_DIR
    ./Main
}

if [ $# == 0 ]; then
    echo "Provide all the arguments!"
    show_help
elif [ $# == 1 ]; then
    if [[ "$1" == "-h" || "$1" == "--help" ]]; then
        show_help
    else
        echo "Invalid argument!"
        show_help
    fi
elif [ $# == 2 ]; then
    case "$1" in
        python)
            BUILD_LANGUAGE=Python
            FILE_NAME=$2
            build_run_python ;;
        cpp)
            BUILD_LANGUAGE=C++
            FILE_NAME=$2
            build_run_cpp ;;
    esac
else
    echo "Too many arguments!"
    show_help
fi
