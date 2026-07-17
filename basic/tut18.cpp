#include <iostream>
using namespace std;
int main(){
    int n,n1;
    cout<<"enter the no of elements u want in your 2 arrays" <<endl;
    cin>>n;
    cin>>n1;
    int arr[n],arr1[n1];
    for (int i=0;i<n;i++){
        cout<<"enter the value of arr"<<i<<endl;
        cin>>arr[i];
    }
    for (int i=0;i<n1;i++){
        cout<<"enter the value of arr1"<<i<<endl;
        cin>>arr1[i];
    }
    int leng;
    leng=n+n1;
    int arr2[leng];
    for(int i=0;i<leng;i++){
        if(i<n){
            arr2[i]=arr[i];
        }
        else{
            arr2[i]=arr1[i-n];
        }
    }
    cout<<"the merged array is"<<endl;
    for(int i=0;i<leng;i++){
        cout<<"the value of arr2"<<i<<"is"<<arr2[i]<<endl;
    }   
    return 0;
}
