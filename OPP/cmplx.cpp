//Write the class definition of cmplx for above code
#include <iostream>
using namespace std;
class cmplx {
public:
cmplx(double r = 0, double i = 0) : re(r), im(i) {}
cmplx operator+(const cmplx& c) const {
return cmplx(re + c.re, im + c.im);
}
cmplx operator*(const cmplx& c) const {
return cmplx(re * c.re - im * c.im, re * c.im + im * c.re);
}
void print() const {
cout << re << " + " << im << "i" << endl;
}
private:
double re, im;
};

int main() {
cmplx a = {2}; // 2 + 0i
cmplx b = {1,4}; // 1 + 4i
cmplx c = a + b; // 3 + 4i
cmplx d = b * c; // -13 + 16i
a.print();
b.print();
c.print();
d.print();
return 0;
}