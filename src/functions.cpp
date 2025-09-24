#include <iostream>
#include <cstring>
#include "functions.h"
using namespace std;

// Stub implementations - students need to complete these
int* createDynamicArray(int size) {
    // TODO: Allocate memory for an array of 'size' integers
    // Use 'new int[size]' and return the pointer
    // Return NULL if size <= 0
    return NULL;
}

void populateArray(int* arr, int size) {
    // TODO: Fill the array with values 1, 2, 3, ..., size
    // Use pointer arithmetic or array notation
}

int findMaximum(int* arr, int size) {
    // TODO: Find and return the maximum value in the array
    // Use pointer arithmetic to traverse the array
    return 0;
}

double calculateAverage(int* arr, int size) {
    // TODO: Calculate and return the average of all values
    // Remember to handle integer division correctly
    return 0.0;
}

void printArray(int* arr, int size) {
    // TODO: Print all array elements separated by spaces
    // Use pointer arithmetic: *(arr + i) or arr[i]
}

void destroyArray(int* arr) {
    // TODO: Free the memory allocated for the array
    // Use 'delete[] arr' for arrays
}

char* createDynamicString(int maxLength) {
    // TODO: Allocate memory for a character array of maxLength
    // Use 'new char[maxLength]' and initialize to empty string
    // Return NULL if maxLength <= 0
    return NULL;
}

void copyString(char* dest, const char* src) {
    // TODO: Copy characters from src to dest
    // Don't use strcpy - implement it manually with pointers
    // Remember to copy the null terminator '\0'
}

int getStringLength(const char* str) {
    // TODO: Calculate string length without using strlen()
    // Count characters until you reach '\0'
    return 0;
}

void destroyString(char* str) {
    // TODO: Free the memory allocated for the string
    // Use 'delete[] str' for character arrays
}