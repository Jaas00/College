/* Write a program to calculate are and perimeter of a rectangle. */
#include<iostream>
using namespace std;
class Rect{
    private:
        float l;
        float b;
    public:
        Rect(){
            l = 0;
            b = 0;
        }
        void getData(){
            cout<<"Enter the length : "<<endl;
            cin>>l;
            cout<<"Enter the breadth : "<<endl;
            cin>>b;
        }
        double area(){
            return l*b;
        }
        double per(){
            return 2 * (l+b);
        }
        void display(){
            cout<<"The recangle details : "<<endl;
            cout<<"The Area is : "<<area()<<endl;
            cout<<"The Perimeter is : "<<per()<<endl;
        }
        ~Rect(){
            cout<<"The rectangle is now destroid."<<endl;
        }
};
int main(){
    Rect r;
    r.getData();
    r.display();
    return 0;
}