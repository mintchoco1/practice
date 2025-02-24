#include <iostream>
using namespace std;

class DataBase {
private:
    static DataBase* instance; 
    int _index;               
    
    DataBase() : _index(0) {}
    
    DataBase(const DataBase& other) = delete;
    DataBase& operator=(const DataBase& other) = delete;

public:
    static DataBase* getInstance() {
        if (instance == nullptr) {
            instance = new DataBase();
        }
        return instance;
    }

    void setIndex(int index) {
        _index = index;
    }

    int checkIndex() const {
        return _index;
    }
};

DataBase* DataBase::instance = nullptr;

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
