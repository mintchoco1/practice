#include <iostream>
using namespace std;
class sobase{
    private:
        int basenum;
    public:
        sobase():basenum(20){
            cout << "sobase()" << endl;
        }
        sobase(int n):basenum(n){
            cout << "sobase(int n)" << endl;
        }
        void showbasedata(){
            cout << basenum << endl;
        }
};
class soderived : public sobase{
 private:
     int derivednum;
 public:
    soderived() : derivednum(30){
        cout << "soderived()" << endl;
    }
    soderived(int n) : derivednum(n){
        cout << "soderived(int n)" << endl;
    }
    soderived(int n1,int n2) : sobase(n1), derivednum(n2){
        cout << "soderived(int n1,int n2)" << endl;
    }
    void showderivdata(){
        showbasedata();
        cout << derivednum << endl;
    }
};
int main(void){
    cout << "case1......" << endl;
    soderived d1;
    d1.showderivdata();
    cout << "....................." << endl;
    cout << "case2........" << endl;
    soderived d2(12);
    d2.showderivdata();
    cout << "....................." << endl;
    cout << "case3........" << endl;
    soderived d3(23, 24);
    d3.showderivdata();
    return 0;
}