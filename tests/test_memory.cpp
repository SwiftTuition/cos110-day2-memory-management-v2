#include <iostream>
#include "../src/functions.h"
using namespace std;

// Memory leak testing - basic stress test
int main() {
    cout << "🔍 Running Memory Management Tests..." << endl;
    cout << "=====================================" << endl;

    bool all_tests_passed = true;

    // Test 1: Multiple array allocations and deallocations
    cout << "Test 1: Array memory management stress test..." << endl;
    for (int i = 0; i < 100; i++) {
        int* arr = createDynamicArray(10);
        if (arr == NULL) {
            cout << "❌ Failed to create array in iteration " << i << endl;
            all_tests_passed = false;
            break;
        }
        populateArray(arr, 10);
        destroyArray(arr);
    }
    if (all_tests_passed) {
        cout << "✅ Array stress test passed" << endl;
    }

    // Test 2: Multiple string allocations and deallocations
    cout << "Test 2: String memory management stress test..." << endl;
    for (int i = 0; i < 100; i++) {
        char* str = createDynamicString(50);
        if (str == NULL) {
            cout << "❌ Failed to create string in iteration " << i << endl;
            all_tests_passed = false;
            break;
        }
        copyString(str, "Test string");
        destroyString(str);
    }
    if (all_tests_passed) {
        cout << "✅ String stress test passed" << endl;
    }

    // Test 3: Large allocation test
    cout << "Test 3: Large allocation test..." << endl;
    int* large_arr = createDynamicArray(10000);
    if (large_arr != NULL) {
        populateArray(large_arr, 10000);
        destroyArray(large_arr);
        cout << "✅ Large allocation test passed" << endl;
    } else {
        cout << "❌ Large allocation test failed" << endl;
        all_tests_passed = false;
    }

    // Test 4: Edge case handling
    cout << "Test 4: Edge case handling..." << endl;
    destroyArray(NULL);  // Should not crash
    destroyString(NULL); // Should not crash
    cout << "✅ NULL pointer handling test passed" << endl;

    cout << "\n📊 Memory Test Results:" << endl;
    if (all_tests_passed) {
        cout << "🎉 All memory tests passed!" << endl;
        cout << "💡 Run 'make memory-check' with Valgrind for detailed leak detection" << endl;
        return 0;
    } else {
        cout << "⚠️  Some memory tests failed" << endl;
        return 1;
    }
}