#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1;
    string str2="";
    cout<<"enter the string"<<endl;
    cin>>str1;
    int leng=str1.length();
    for (int i=leng-1;i>=0;i--){
        str2=str2+str1[i];
    }
    cout<<"the reversed string is "<<str2<<endl;
    return 0;
}
