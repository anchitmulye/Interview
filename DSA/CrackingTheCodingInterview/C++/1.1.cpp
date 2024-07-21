#include <iostream>
#include <unordered_map>
#include <bitset>

// Using hash map as data structure to store the char.
// Space O(1) and time O(n)
bool IsUnique(std::string& input)
{
    std::unordered_map<char, int> hashMap;

    for (const auto& ch : input)
    {
        if (hashMap.find(ch) != hashMap.end()) return false;
        hashMap[ch] = 1;
    }
    return true;
}

// Using bit map as data structure to stroe the char.
// Space O(1) and time O(1)
bool IsUnique2(std::string& input)
{
    // assuming 128 char ASCII (for extended use 256)
    std::bitset<128> bitMap;

    for (const auto& ch : input)
    {
        if (bitMap.test(int(ch))) return false;
        bitMap.set(int(ch));
    }
    return true;
}

// Solution without using any data structure is using 2 loops.
// Space O(1) and time O(n2)

// If string modification allowed, then sorting can be done.
// Space O(1) and time O(nlogn)

int main()
{
    std::string input1 = "";
    std::string input2 = "abcdef";
    std::string input3 = "hello";
    std::string input4 = "aaaaa";
    std::cout << IsUnique2(input1) << "\n";
}

