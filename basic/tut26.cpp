#include <iostream>
#include <string>
using namespace std;
class hero{
    protected:
    string name;
    int hp;
    public:
    hero(string n,int h){
        name =n;
        hp=h;
    }
    virtual void attack(hero &enemy){
        cout<<name<<"attacks "<<enemy.name<<endl;
        enemy.takedamage(10);
    }
    int gethp(){
        return hp;
    }
    void takedamage(int damage){
        hp=hp-damage;
        if(hp<=0){
            cout<<name<<"RIP"<<endl;

        }
        else{
            cout<<name<<"has"<<hp<<"hp left"<<endl;
        }}
    void display(){
        cout<<"the name of the hero is"<<name<<endl;
        cout<<"the hp of the hero is"<<hp<<endl;    
    }    
};
class human:public hero{
    private:
    int uniqueskill;
    public:
    human(string n,int h,int u):hero(n,h){
        uniqueskill=u;
    }
    void attack(hero &enemy ) override{
        cout<<name<<"attacks "<<endl;
        enemy.takedamage(50);

    }
};
class dragon:public hero{
    private:
    int firepower;
    public:
    dragon(string n,int h,int f):hero(n,h){
        firepower=f;
    }
    void attack(hero &enemy) override{
        cout<<name<<"breathes fire on "<<endl;
        enemy.takedamage(100);
    }
};
int main(){
    human h1("Issei",400,50);
    dragon d1("Rias",2000,100);
    int c=1;
    while(h1.gethp()>0 && d1.gethp()>0){
        cout<<"round "<<c<<endl;
        h1.attack(d1);
        if(d1.gethp()>0){
            d1.attack(h1);
        }
        c++;
    }return 0;

}
