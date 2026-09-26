#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imag;

    public:
    void setDetails(int r, int i){
        real=r;
        imag=i;
    }
    Complex addComplex(Complex c1, Complex c2){
        Complex temp;
        temp.real=c1.real+c2.real;
        temp.imag=c1.imag+c2.imag;
        return temp;
    }

    Complex multiplyComplex(Complex c1, Complex c2){
        Complex temp;
        temp.real=(c1.real*c2.real)-(c1.imag*c2.imag);
        temp.imag=(c1.real*c2.imag)+(c1.imag*c2.real);
        return temp;
    }
    void displayDetails(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
//non member function to subtract two complex numbers
Complex subtractComplex(Complex c1, Complex c2){
    Complex temp;
    temp.real=c1.real-c2.real;
    temp.imag=c1.imag-c2.imag;
    return temp;
}
int main(){
    Complex c1,c2,c3,c4,c5;
    c1.setDetails(2,3);
    c2.setDetails(4,5);
    c3=c3.addComplex(c1,c2);
    cout<<"Addition of two complex numbers:"<<endl;
    c3.displayDetails();
    c4=c4.multiplyComplex(c1,c2);
    cout<<"Multiplication of two complex numbers:"<<endl;
    c4.displayDetails();
    c5=subtractComplex(c1,c2);
    cout<<"Subtraction of two complex numbers:"<<endl;
    c5.displayDetails();
}