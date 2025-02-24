#include <iostream>
using namespace std;

/*
 *                  HW4 (Due: 12/8 23:59PM)
 * Implement the Singleton Pattern in the DataBase class to ensure only one instance of the class can exist.
 *
 * Expected Output:
 * Test 1: Pass
 * Test 2: Pass
 * Test 3: Pass
 * Test 4: Pass
 * Test 5: Pass
 *
 */

class DataBase {
private:
    int _index;
};

// DO NOT TOUCH THE MAIN FUNCTION.
int main() {
    DataBase* db1 = DataBase::getInstance();
    DataBase* db2 = DataBase::getInstance();

    db1->setIndex(1);
    if (1 == db1->checkIndex()) {
        cout << "Test 1: Pass" << endl;
    }
    if (1 == db2->checkIndex()) {
        cout << "Test 2: Pass" << endl;
    }

    db2->setIndex(42);
    if (42 == db1->checkIndex()) {
        cout << "Test 3: Pass" << endl;
    }
    if (42 == db2->checkIndex()) {
        cout << "Test 4: Pass" << endl;
    }

    if (db1 == db2) {
        cout << "Test 5: Pass" << endl;
    }

    return 0;
}