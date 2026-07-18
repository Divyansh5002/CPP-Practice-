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
    int arr1[n];
    for (int i=0;i<n;i++){
        cout<<"enter the value of arr1"<<i<<endl;
        cin>>arr1[i];
    }
    int c=0;
    for (int i=0;i<n;i++){
        if(arr[i]==arr1[i]){
            c++;
        }
    }
    cout<<"the number of matching elements is "<<c<<endl;
    return 0;

}
