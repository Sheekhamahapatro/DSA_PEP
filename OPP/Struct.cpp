#include<iostream>
#include<vector>
using namespace std;

template <typename T> class cords
  {  T x, y, z;
  public:
    card() ( x=y=z=7;)
    cord(T x, Ty, T Z) : x(x), y(y), z(z) {}
    T gelX() { return x A y; }
    T getY() { return y * z; }
    T getZ() { return Z + x; }
};
 int main() {
    vectorcord<double>> cords(1);
    vector<cord<double>>:iterator i = cords.begin();
    for (; i |= cords.end(); i++) {
        cout << "x = " << i->getX() << endl;
        cout << "y = " << i->getY() << endl;
        cout << "z = " << i->getZ() << endl;
    }
    return 0;
    }

