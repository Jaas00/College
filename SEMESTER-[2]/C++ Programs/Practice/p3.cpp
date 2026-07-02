#include<iostream>
using namespace std;
class Person{
    public:
        string name;
        int age;
        void setName(string n){
            name = n;
        }
        void setAge(int a){
            age = a;
        }
};
int main(){
    Person person1;
    person1.setName("Maheshwar");
    person1.setAge(20);
    cout<<"Name : "<<person1.name<<endl;
    cout<<"Age  : "<<person1.age<<endl;
    return 0;
}