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
    int sum=0;
    int n1=arr[n-1];
    sum=n1*(n1+1)/2;
    for (int i=0;i<n;i++){
        sum=sum-arr[i];
    }
    cout<<"the missing number is "<<sum<<endl;
    return 0;
}

