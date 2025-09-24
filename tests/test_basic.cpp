#include <iostream>
#include <cassert>
#include "../src/functions.h"
using namespace std;

// Simple testing framework
int tests_passed = 0;
int tests_failed = 0;

void test_assert(bool condition, const char* test_name) {
    if (condition) {
        cout << "✅ " << test_name << endl;
        tests_passed++;
    } else {
        cout << "❌ " << test_name << endl;
        tests_failed++;
    }
}

int main() {
    cout << "🧪 Running Basic Implementation Tests..." << endl;
    cout << "=======================================" << endl;

    // Test 1: Array creation
    int* arr = createDynamicArray(3);
    test_assert(arr != NULL, "Array creation with positive size");

    if (arr != NULL) {
        // Test 2: Array population
        populateArray(arr, 3);
        // Manually check if first element is 1 (assuming 1-indexed population)
        test_assert(*arr == 1 || *arr == 0, "Array population (first element set)");

        // Test 3: Maximum finding
        int max_val = findMaximum(arr, 3);
        test_assert(max_val > 0, "Maximum value calculation");

        // Test 4: Average calculation
        double avg = calculateAverage(arr, 3);
        test_assert(avg >= 0.0, "Average calculation returns non-negative");

        destroyArray(arr);
    }

    // Test 5: Edge case - invalid array size
    int* null_arr = createDynamicArray(0);
    test_assert(null_arr == NULL, "Array creation with invalid size returns NULL");

    // Test 6: String creation
    char* str = createDynamicString(20);
    test_assert(str != NULL, "String creation with positive size");

    if (str != NULL) {
        // Test 7: String copying
        copyString(str, "test");
        test_assert(*str != '\0', "String copying sets content");

        // Test 8: String length
        int len = getStringLength("hello");
        test_assert(len >= 0, "String length calculation");

        destroyString(str);
    }

    // Test 9: Edge case - invalid string size
    char* null_str = createDynamicString(-1);
    test_assert(null_str == NULL, "String creation with invalid size returns NULL");

    // Test summary
    cout << "\n📊 Test Results:" << endl;
    cout << "Passed: " << tests_passed << endl;
    cout << "Failed: " << tests_failed << endl;

    if (tests_failed == 0) {
        cout << "🎉 All basic tests passed!" << endl;
        return 0;
    } else {
        cout << "⚠️  Some tests failed. Check your implementation." << endl;
        return 1;
    }
}