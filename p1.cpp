/*WAP to add two complex numbers using class and objects without using operator overloading.*/
#include<iostream>
using namespace std;

class Complex{
    private:
        int real, img;
    public:
        void inputNum(){
            cout<<"Enter real part of number: ";
            cin>>real;
            cout<<"Enter imaginary part of number: ";
            cin>>img;
        }

        void addNum(Complex c){
            real += c.real;
            img += c.img;
        }

        void displayNum(){
            cout<<"The sum is "<<real<<" + "<<img<<"i"<<endl;
        }

};


int main()
{
    Complex c1, c2;
    c1.inputNum();
    c2.inputNum();
    c1.addNum(c2);
    c1.displayNum();
    return 0;
}