#include <iostream>
using namespace std;

int main()
{
    string vowelsTest = "aEoIssdu";
    cout << "vowels count test: input - " << vowelsTest << "\tresult: " << vowelsCount(vowelsTest) << "\n";
    string caseTest = "asdfzASDFZ";
    cout << "case test: input - " << caseTest << "\tupper - " << toUpperCase(caseTest) << "\tlower - " << toLowerCase(caseTest) << "\n";
    string palindromeTest = "asdffdsa";
    cout << "palindrome test: input - " << palindromeTest << "\tresult - " << boolalpha << isPalindrome(palindromeTest);
    return 0;
}