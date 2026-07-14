#include <iostream>
using namespace std;
void swap (int* a,int* b){
int temp=*a;
*a=*b;
*b=temp;
}
int main(){
    int x=6,y=9;
    cout<<"the no before swapping"<<x<<y<<endl;
    swap(&x,&y);
    cout<<"the value of x and y is after swapping "<<x<<y<<endl;


return 0;
}
