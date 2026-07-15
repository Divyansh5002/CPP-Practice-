#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int half=n/2;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"enter the value of arr"<<i<<endl;
        cin>>arr[i];
    }
    for (int i=0;i<(half/2);i++){
        swap(arr[i],arr[half-1-i]);
    }
    for (int i=0;i<n;i++){
        cout<<"the value of arr"<<i<<"is"<<arr[i]<<endl;
    }
    return 0;

}
