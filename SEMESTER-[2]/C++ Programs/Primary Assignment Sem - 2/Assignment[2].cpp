#include<iostream>
using namespace std;
class Sort{
    private:
        int *arr;
        int n;
    public:
        Sort(){
            arr=NULL;
            n=0;
        }
        void GetData(){
            cout<<"Enter the size : ";
            cin>>n;
            arr=new int[n];
            cout<<"Enter "<<n<<" elements : "<<endl;
            for(int i=0;i<n;i++)
                cin>>arr[i];
        }
        void Display(){
            for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
        }
        void BubbleSort(){
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n-1-i;j++){
                    if(arr[j]>arr[j+1]){
                        arr[j]^=arr[j+1];
                        arr[j+1]^=arr[j];
                        arr[j]^=arr[j+1];
                    }
                }
            }
        }
        ~Sort(){
            delete[] arr;
        }
};
int main(){
    Sort s;
    s.GetData();
    s.BubbleSort();
    s.Display();
    return 0;
}