#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"write your age  "<< endl;
    cin>>a;
    if(a<18){
        cout<<"sorry u r underage";
    }
    else if(a==18){
        cout<<"typically falling on the sidelines ";
    }
    else{
        cout<<"now u r eligible ";
    }
    return 0;

}
