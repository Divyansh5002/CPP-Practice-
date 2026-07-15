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
        if (arr[i] != i) {
            cout<<"the missing no is"<<i<<endl; 
        }
    }return 0;

}
