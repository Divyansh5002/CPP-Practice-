#include <iostream>
using namespace std;
int main(){
    int n;
    int c=0; int d=0;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"enter the value of arr"<<i<<endl;
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            c++;
        }
        else{
            d++;
        }
    }
    cout<<"the number of even elements is"<<c<<endl;
    cout<<"the number of odd elements is"<<d<<endl;
    return 0;
}   
