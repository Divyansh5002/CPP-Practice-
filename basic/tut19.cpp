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
    for (int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<i;j++){
            if (arr[i]==arr[j]){
                c++;
            }
        }
        if (c>0){
            cout<<"the no is"<<arr[i]<<endl;
        }
    }return 0;
}       
