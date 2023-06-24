#include <iostream>
#include <vector>
using namespace std;
class Base {
public:
virtual void identify() { cout << "BASE" << endl; }
};
class Derived1 : public Base {
public:
virtual void identify() { cout << "DERIVED1" << endl; }
};
class Derived2 : public Base {
virtual void identify() { cout << "DERIVED2" << endl;
}
};
int main() {
    Derived1 DERIVED1;
    Derived2 DERIVED2;
    vector<Base> vect;
    vect.push_back(DERIVED1);
    vect.push_back(DERIVED2);
    vect[0].identify();
    vect[1].identify();
    return 0;
    }