#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int n1;
    cout<<"enter the size of the second array"<<endl;
    cin>>n1;
    int arr1[n1];
    for (int i=0;i<n1;i++){
        cout<<"enter the value of arr1"<<i<<endl;
        cin>>arr1[i];
    }
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"enter the value of arr"<<i<<endl;
        cin>>arr[i];
    }
    if(n==n1){
        for (int i=0;i<n;i++){
            if(arr[i]==arr1[i]){
                cout<<"the arrays are equal"<<endl;
            }
            else{
                cout<<"the arrays are not equal"<<endl;
            }
        }
    }
    else{
        cout<<"the arrays are not equal"<<endl;
    }

}
