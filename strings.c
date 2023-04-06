#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "strings.h"

 char charAt(char str[], int pos){

        if(pos < 0 || pos >= strlen(str)){
            return 0; //Ascii 0 is NULL
        }

    return str[pos];

 }

int length(char str[]){
    
    int strLength = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        strLength ++;
    }

    return strLength;
    
 }

 int countOccurences(char str[], char c){

    int charOcurrences = 0;
    int strLength = length(str);

    for (int i = 0; i < strLength; i++)
    {
        if(str[i] == c){
            charOcurrences++;
        }
    }
    
    return charOcurrences;
 }

  bool onlyLetters(char str[]){

    int strLength = length(str);

    for (int i = 0; i < strLength; i++)
    {   
        //Versão A
        /*if(!isalpha(str[i]) && !isblank(str[i])){
            return 1;
        }*/

        //Versão B
        if((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122) && str[i] != 32){
            return 1;
        }
    }
    
    return 0;

  }

  void toUppercase(char str[]){

     for (int i = 0; str[i] != '\0'; i++)
     {
        str[i] = toupper(str[i]);
     }
     
  }

   bool equal(char str1[], char str2[]){
    if(strcmp(str1,str2) == 0){
        return 0;
    }

    return 1;
    
   }

    bool isPalindrome(char str[]){

        int strLength = length(str);
        toUppercase(str);

        for (int i = 0; i < strLength/2; i++)
        {
            if(str[i] != str[strLength-i-1]){
            return 1;
            }
        }

        return 0;
        
    }

    bool hasDuplicates(char str[]){

        int strLength = length(str);

        for (int i = 0; i < strLength; i++){
            for (int j = i+1; j < strLength; j++)
            {
                if(str[i] == str[j] && str[j] != 32){
                    return 0; //true
                }
            }
        }

        return 1;
    }

     void printPairs(char str[]){
        int strLength = length(str);

        for (int i = 0; i < strLength; i++){
            for (int j = i+1; j < strLength; j++)
            {
                printf("%c%c ", str[i], str[j]);
            }
        }
        
 }