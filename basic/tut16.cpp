#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
    int leng;
    int vowels=0,conso=0;
    leng=str.length();
    for (int i=0;i<leng;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowels++;
        }
        else{
            conso++;
        }
    }
    cout<<"the number of vowels is "<<vowels<<endl;
    cout<<"the number of consonants is "<<conso<<endl;
    return 0;
}
