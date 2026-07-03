/* Function Overloading */
#include<iostream>
using namespace std;
class Addition{
public:
    int add(int a, int b){
        return a+b;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
    float add(float a, float b){
        return a+b;
    }
};
int main(){
    Addition obj;
    cout<<"Sum of 10 and 20 = "<<obj.add(10,20)<<endl;
    cout<<"Sum of 10, 20 and 30 = "<<obj.add(10,20,30)<<endl;
    cout<<"Sum of 12.5 and 7.8 = "<<obj.add(12.5f,7.8f)<<endl;
    return 0;
}