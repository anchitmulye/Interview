#include <iostream>

std::string URLify(std::string& input)
{
    std::string output;
    for (const auto& ch : input)
    {
        if (ch == ' ') output += "%20";
        else output += ch;
    }
    return output;
}

int main()
{
    std::string input1 = "Mr John Smith";
    std::string input2 = "Hello World";
    std::string input3 = "Hi";
    std::string input4 = "Hello World! How are you?";
    std::cout << URLify(input4) << "\n";
}
