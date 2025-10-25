//1.1 - Is Unique

#include <iostream>
#include <unordered_map>
#include <string>

bool hasDuplicateChars(const std::string& inputString){
    std::unordered_map<char, bool> myHashTable;

    for (char i : inputString) {    //For each char i in input string
        if (myHashTable[i]) {
            return true; // duplicated chars
        }
        myHashTable[i] = true;
    }

    return false;   //No duplicated chars
}

int main() {

    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    if (hasDuplicateChars(input))
        std::cout << "Not Unique\n";
    else
        std::cout << "Unique\n";

    return 0;
}