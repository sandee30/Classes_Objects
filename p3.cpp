/*Create a class Rectangle with attributes length and breadth. Write member functions to calculate and return:
Area
Perimeter
*/

#include<iostream>
using namespace std;

class Rectangle{
    private:
        float l,b;
    public:
        Rectangle(){
            cout<<"Enter length: ";
            cin>>l;
            cout<<"Enter breadth: ";
            cin>>b;
        }
        void area(){
            cout<<"The area is "<< l*b<<endl;
        }
        void perimeter(){
            cout<<"The perimeter is "<< 2*(l+b)<<endl;
        }
};

int main()
{
    Rectangle r;
    r.area();
    r.perimeter();
    return 0;
}