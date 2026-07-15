#include <iostream>
using namespace std;
int main(){
    int arr[5];
    for (int i=0;i<5;i++){
        cout<<"enter the value of arr"<<i<<endl;
        cin>>arr[i];
    }
    int larg,sec_large;
    larg=sec_large=arr[0];
    for (int i=0;i<5;i++){
        if(arr[i]>larg){
            sec_large=larg;
            larg=arr[i];
        }
    }
    cout<<"the largest value is"<<larg<<endl;
    cout<<"the second largest value is"<<sec_large<<endl;
    return 0;
}
