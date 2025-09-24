#include <iostream>
#include "functions.h"
using namespace std;

// Main function with guided exercises
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

