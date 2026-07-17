#include <iostream>
using namespace std;
int main(){ int n,p;
    cout<<"enter the no"<<endl;
    cin>>n;
    cin>>p;
    cout<<"for addition press 1"<<endl;
    cout<<"for subtraction press 2"<<endl;
    cout<<"for multiplication press 3"<<endl;
    cout<<"for division press 4"<<endl;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"the addition is"<<n+p<<endl;
            break;
        case 2:
            cout<<"the subtraction is"<<n-p<<endl;
            break;
        case 3:
            cout<<"the multiplication is"<<n*p<<endl;
            break;
        case4:
            cout<<"the division is"<<n/p<<endl;
            break;
        default:
            cout<<"invalid input"<<endl;
            break;        
    }return 0;

}
