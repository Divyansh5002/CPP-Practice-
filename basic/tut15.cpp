#include <iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"enter the value of arr"<<i<<endl;
        cin>>arr[i];
    
    }
    temp=arr[0];
    for (int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }arr[n-1]=temp;
    for (int i=0;i<n;i++){
        cout<<"the value of arr"<<i<<"is"<<arr[i]<<endl;
    }return 0;    
}
