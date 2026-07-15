#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the marks"<<endl;
    cin>>marks;
    if(marks >=90){
        cout<<"A Grade"<<endl;
    }
    else if(marks >=80 && marks <90){
        cout<<"B Grade"<<endl;
    }
    else if(marks >=70 && marks <80){
        cout<<"C Grade"<<endl;
    }
    else if(marks >=60 && marks <70){
        cout<<"D Grade"<<endl;
    }
    else{
        cout<<"F Grade"<<endl;
    }return 0;
}
