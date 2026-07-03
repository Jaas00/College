/* WAP to calculate the and product of array elements using the following specification.
class name         :    ArrayOperations
function name      :    int add()
                   :    long product()
instance variables :    arr, n. */
#include<iostream>
using namespace std;
class ArrayOperations{
private:
    int *arr;
    int n;
public:
    ArrayOperations(){
        cout<<"Enter the size : ";
        cin>>n;
        arr = new int[n];
    }
    void getData(){
        cout<<"Enter "<<n<<" elements : ";
        for(int i=0;i<n;i++)
            cin>>arr[i];
    }
    int add(){
        int s=0;
        for(int i=0;i<n;i++)
            s+=arr[i];
        return s;
    }
    long product(){
        int p=1;
        for(int i=0;i<n;i++)
            p*=arr[i];
        return p;
    }
    ~ArrayOperations(){
        delete[] arr;
    }
};
int main(){
    ArrayOperations obj;
    obj.getData();
    cout<<"The sum of array elements is : "<<obj.add()<<endl;
    cout<<"The product of array elements is : "<<obj.product()<<endl;
    return 0;
}