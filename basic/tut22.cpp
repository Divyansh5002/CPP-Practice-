#include <iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"enter the value of arr"<<i<<endl;
        cin>>arr[i];
    }
    int n1;
    cout<<"enter the times to which u want to shift the array"<<endl;
    cin>>n1;
    int arr1[n];
    for (int i=0;i<n;i++){
        arr1[i]=arr[i+n1];
    }
    for (int i=0;i<n1;i++){
        arr1[n-n1+i]=arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<"the value of arr1"<<i<<"is"<<arr1[i]<<endl;
    }return 0;
}
