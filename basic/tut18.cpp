#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    string str1="";
    cout<<"enter the string"<<endl;
    cin>>str;
    int leng;
    leng=str.length();
    for (int i=0;i<leng;i++){
        str1=str[i]+str1;

    }
    if(str1==str){
        cout<<"the string is palindrome"<<endl;
    }
    else{
        cout<<"the string is not palindrome"<<endl;
    }return 0;

}
