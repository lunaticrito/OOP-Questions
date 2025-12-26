#include<bits/stdc++.h>
using namespace std;

class Complex{
    float real, imaginary;
public:
    Complex(float r,float i):real(r),imaginary(i){}
    Complex operator+(int x){
        return Complex(x+real,imaginary);
    }
    friend Complex operator+(int x, Complex &c){
        return Complex(c.real,c.imaginary+x);
    }
    friend ostream& operator<<(ostream &out, Complex &c){
        out<<c.real<<"+"<<c.imaginary<<"i";
        return out;
    }
};
int main(){
    Complex c(0,0);
    c=4+c+5;
    cout<<c<<endl;
    return 0;
}