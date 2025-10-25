//1.2 - Check Permutation

#include <iostream>
#include <unordered_map>
#include <string>

bool isPermutation(const std::string& inputString1, const std::string& inputString2){
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