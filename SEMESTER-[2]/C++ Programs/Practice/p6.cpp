/* Write a program in C++ to implement linear search using privet instance variable and
public member methods. */
#include<iostream>
using namespace std;
class LinearSearch{
    private:
        int *arr;
        int n;
        int key;
    public:
        LinearSearch(){ //Constructure
            cout<<"Enter the number of elements : ";
            cin>>n;
            arr = new int[n]; //Dynamic array allocation
        }
        void getData(){
            cout<<"Enter "<<n<<" elements : ";
            for(int i=0;i<n;i++)
                cin>>arr[i];
        }
        void Lsearch(){
            int found = 0;
            cout<<"Enter the element to search : "<<endl;
            cin>>key;
            for(int i=0;i<n;i++){
                if(arr[i]==key){
                    cout<<"Element found at position - "<<i+1<<endl;
                    found = 1;
                    break;
                }
            }
            if(found==0)
                cout<<"Element not found."<<endl;
        }
        ~LinearSearch(){
            delete[] arr;
        }
};
int main(){
    LinearSearch obj;
    obj.getData();
    obj.Lsearch();
    return 0;
}