#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Function declarations for memory management exercises

// Dynamic Integer Array Functions
int* createDynamicArray(int size);
void populateArray(int* arr, int size);
int findMaximum(int* arr, int size);
double calculateAverage(int* arr, int size);
void printArray(int* arr, int size);
void destroyArray(int* arr);

// Dynamic String Functions
char* createDynamicString(int maxLength);
void copyString(char* dest, const char* src);
int getStringLength(const char* str);
void destroyString(char* str);

#endif