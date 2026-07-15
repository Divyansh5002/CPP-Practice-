#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1;char d;int e=0;
    cout<<"enter the string"<<endl;
    cin>>str1;
    cout<<"enter the no to be inputed for frequency"<<endl;
    cin>>d;
    for (int i=0;i<str1.length();i++){
        if(str1[i]==d){
            e=e+1;
        }
        
    }cout<<"the frequency of the no is"<<e<<endl;
    
    
    
}
