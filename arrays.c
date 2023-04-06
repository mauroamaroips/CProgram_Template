#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#include "arrays.h"

//Arrays Level

int countEven(int arr[], int arrLength){

    int evenCount = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if(arr[i] % 2 == 0){
            evenCount++;
        }
    }
    
    return evenCount;
}

 int sumArray(int arr[], int arrLength){
    int sum = 0;

    for (int i = 0; i < arrLength; i++)
    {
        sum += arr[i];
    }

    return sum;
    
 }

 bool contains(int val, int arr[], int arrLength) {
    
    for (int i = 0; i < arrLength; i++)
    {
        if(val == arr[i]){
            return 0;
        }
    }

    return 1;
    
 }