#include<iostream>
using namespace std;
template<typename T>
T maxfind(T a, T b){
    return (a>b)?a:b;
}
int main(){
    int x = maxfind(1,2);
    cout<<"Max (1,2) : "<<x;
    double y = maxfind(3.14,2.718);
    cout<<endl<<"max (3.14,2.718) : "<<y;
    return 0;
}