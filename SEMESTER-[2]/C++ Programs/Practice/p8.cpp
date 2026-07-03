/* Stack Memory */
#include<iostream>
using namespace std;
int max(int arr[], int n){
    int m = INT_MIN;
    for(int i = 0;i < n;i++){
        if(m<arr[i])
            m = arr[i];
    }
    return m;
}
int min(int a, int b){
    return a<b?a:b;
}
int main(){
    int a[5] = {10,20,30,40,50};
    int b[3] = {2,5};
    int m1 = max(a,5);
    int m2 = max(b,3);
    int m3 = min(25,45);
    int m4 = min(2,3);
    cout<<" "<<m1<<" "<<m2<<" "<<m3<<" "<<m4;
    return 0;
}