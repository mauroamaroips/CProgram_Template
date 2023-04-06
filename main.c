#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>
#include "input.h"
#include "arrays.h"
#include "strings.h"


int main() {

// Arrays Level

    int values[] = {0, 1, 2, 7, 10, 14, 17};
    int arrSize = 7;

    // Arrays - 1
    int evenCount = countEven(values, arrSize);
    printf("Even numbers count: %d\n", evenCount);

    // Arrays - 2

    int sumArr = sumArray(values, arrSize);
    printf("Sum numbers of array: %d\n", sumArr);

    // Arrays - 3

    int containsVal = contains(30, values, arrSize); //val = 30 (false: 1), val = 2 (true: 0)
    printf("Check if number is on array: %d\n", containsVal);


//Strings Level

    char str[100] = "eu adoro a linguagem c";

    // Strings - 1

    char charAtPos = charAt(str, 4);
    printf("Char at position: %c\n", charAtPos);

    // Strings - 2

    int strLength = length(str);
    printf("Length of string: %d\n", strLength);

    // Strings - 3

    int charCount = countOccurences(str, 'a');
    printf("Count occurences of letter on string: %d\n", charCount);

    // Strings - 4

    int justLetters = onlyLetters(str);
    printf("Check if string just have alphabetic (no digits): %d\n", justLetters);

    // Strings - 5

    toUppercase(str);
    printf("String to upperCase: %s\n", str);

    // Strings - 6

    char strEquals1[] = "Teste";
    char strEquals2[] = "Teste";
    int strSame = equal(strEquals1,strEquals2);
    printf("Check if strings are equals: %d\n", strSame);

    // Strings - 7

    char palindromeWord1[] = "aNA";
    int checkPalindrome = isPalindrome(palindromeWord1);
    printf("Check if string is a palindrome: %d\n", checkPalindrome);

    // Strings - 8

    int checkDuplicates = hasDuplicates(str);
    printf("Check if has duplicates: %d\n", checkDuplicates);

    // Strings - 9

    char lettersArr[] = "abcde";
    printPairs(lettersArr);

    return EXIT_SUCCESS;
}
