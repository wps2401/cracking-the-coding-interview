//1.2 - Check Permutation

#include <iostream>
#include <unordered_map>
#include <string>

bool isPermutation(const std::string& inputString1, const std::string& inputString2){

    //Lengths of input strings must be the same
    if (inputString1.length() != inputString2.length()){
        return false;
    }

    //Count occurences of chars in inputString1
    std::unordered_map<char, int> charCountHashTable;
    for (char c : inputString1) {
        charCountHashTable[c]++;
    }

    //Count occurences of chars in inputString2 and check against inputString1
    for (char c : inputString2) {
        if (charCountHashTable.find(c) == charCountHashTable.end() || charCountHashTable[c] == 0) {
            return false; //either char not found or used too many times
        }
        charCountHashTable[c]--;
    }

    return true;
}

int main() {

    std::string input1;
    std::cout << "Enter first string: ";
    std::cin >> input1;

    std::string input2;
    std::cout << "Enter second string: ";
    std::cin >> input2;

    if (isPermutation(input1, input2))
        std::cout << input2 + " IS a permutation of " + input1 + "\n";
    else
        std::cout << input2 + " IS NOT a permutation of " + input1 + "\n";
    return 0;
}