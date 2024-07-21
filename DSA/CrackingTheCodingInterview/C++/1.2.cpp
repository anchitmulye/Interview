#include <iostream>
#include <cctype>
#include <algorithm>

// Sorting for permutation
// Space O(1) and time O(nlogn)
bool CheckPermutation(std::string& input1, std::string& input2)
{
    if (input1.size() != input2.size()) return false;

    std::transform(input1.begin(), input1.end(), input1.begin(), [](unsigned char c){ return std::tolower(c); });
    std::transform(input2.begin(), input2.end(), input2.begin(), [](unsigned char c){ return std::tolower(c); });

    std::sort(input1.begin(), input1.end());
    std::sort(input2.begin(), input2.end());

    return input1 == input2;
}

int main()
{
    std::string input1_1 = "bat";
    std::string input1_2 = "tab";
    std::string input2_1 = "God";
    std::string input2_2 = "dog";
    std::string input3_1 = "Listen";
    std::string input3_2 = "Silent";

    std::cout << CheckPermutation(input3_1, input3_2) << "\n";
}
