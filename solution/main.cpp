#include <iostream>
#include <cstring>
using namespace std;

// Complete solution implementations
int* createDynamicArray(int size);
void populateArray(int* arr, int size);
int findMaximum(int* arr, int size);
double calculateAverage(int* arr, int size);
void printArray(int* arr, int size);
void destroyArray(int* arr);

char* createDynamicString(int maxLength);
void copyString(char* dest, const char* src);
int getStringLength(const char* str);
void destroyString(char* str);

int main() {
    cout << "🍭 Welcome to Gintoki's Memory Management Training!" << endl;
    cout << "=================================================" << endl;

    // Exercise 1: Dynamic Integer Arrays
    cout << "\n📊 Exercise 1: Dynamic Integer Arrays" << endl;
    cout << "Creating an array of 5 integers..." << endl;

    int* numbers = createDynamicArray(5);
    if (numbers == NULL) {
        cout << "❌ Failed to create array! Check your implementation." << endl;
        return 1;
    }

    cout << "Populating array with values..." << endl;
    populateArray(numbers, 5);

    cout << "Array contents: ";
    printArray(numbers, 5);

    cout << "Maximum value: " << findMaximum(numbers, 5) << endl;
    cout << "Average value: " << calculateAverage(numbers, 5) << endl;

    destroyArray(numbers);
    cout << "✅ Array memory cleaned up!" << endl;

    // Exercise 2: Dynamic String Management
    cout << "\n📝 Exercise 2: Dynamic String Management" << endl;
    cout << "Creating dynamic string buffer..." << endl;

    char* message = createDynamicString(50);
    if (message == NULL) {
        cout << "❌ Failed to create string! Check your implementation." << endl;
        return 1;
    }

    const char* greeting = "Hello from Yorozuya!";
    copyString(message, greeting);

    cout << "String: " << message << endl;
    cout << "Length: " << getStringLength(message) << endl;

    destroyString(message);
    cout << "✅ String memory cleaned up!" << endl;

    cout << "\n🎯 All exercises completed successfully!" << endl;
    cout << "Gintoki: 'Not bad! My computer isn't crashing anymore!'" << endl;

    return 0;
}

// Complete solution implementations
int* createDynamicArray(int size) {
    if (size <= 0) {
        return NULL;
    }

    int* arr = new int[size];
    return arr;
}

void populateArray(int* arr, int size) {
    if (arr == NULL || size <= 0) {
        return;
    }

    for (int i = 0; i < size; i++) {
        *(arr + i) = i + 1;  // Using pointer arithmetic
    }
}

int findMaximum(int* arr, int size) {
    if (arr == NULL || size <= 0) {
        return 0;
    }

    int max = *arr;  // First element
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

double calculateAverage(int* arr, int size) {
    if (arr == NULL || size <= 0) {
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return (double)sum / size;
}

void printArray(int* arr, int size) {
    if (arr == NULL || size <= 0) {
        return;
    }

    for (int i = 0; i < size; i++) {
        cout << *(arr + i);
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

void destroyArray(int* arr) {
    if (arr != NULL) {
        delete[] arr;
    }
}

char* createDynamicString(int maxLength) {
    if (maxLength <= 0) {
        return NULL;
    }

    char* str = new char[maxLength];
    *str = '\0';  // Initialize as empty string
    return str;
}

void copyString(char* dest, const char* src) {
    if (dest == NULL || src == NULL) {
        return;
    }

    char* d = dest;
    const char* s = src;

    while (*s != '\0') {
        *d = *s;
        d++;
        s++;
    }
    *d = '\0';  // Don't forget null terminator
}

int getStringLength(const char* str) {
    if (str == NULL) {
        return 0;
    }

    int length = 0;
    const char* ptr = str;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    return length;
}

void destroyString(char* str) {
    if (str != NULL) {
        delete[] str;
    }
}