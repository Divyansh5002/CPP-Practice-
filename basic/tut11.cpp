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
    for (int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            cout<<"the array is not sorted"<<endl;
            break;
        }
        else{
            cout<<"the array is sorted"<<endl;
            
        }
    }return 0;
        
}
