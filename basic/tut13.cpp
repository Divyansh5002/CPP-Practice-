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
    int smallest=arr[0];
    for (int i=0;i<n;i++){
        if(smallest>arr[i]){
            smallest =arr[i];
        }
    }
    cout<<"the smallest no is "<<smallest<<endl;
    return 0;
}
