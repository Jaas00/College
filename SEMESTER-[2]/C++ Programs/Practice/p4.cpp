/* Write a program to calculate are and circumference of a circle. */
#include<iostream>
#include<cmath>
using namespace std;
class Circle{
    private:
        double radius;
    public:
        Circle(double r){
            setRadius(r);
        }
        ~Circle(){}
        void setRadius(double r){
            if(r>=0) radius = r;
            else radius = 0;
        }
        double getRadius(){
            return radius;
        }
        double area(){
            return M_PI * pow(radius,2);
        }
        double cir(){
            return 2 * M_PI * radius;
        }
};
int main(){
    Circle c(5);
    cout<<"Radius : "<<c.getRadius()<<endl;
    cout<<"Area : "<<c.area()<<endl;
    cout<<"Circumference : "<<c.cir()<<endl;
    return 0;
}