#include <iostream>
#include <string>
using namespace std;
class hero{
    private:
    string name;
    int hp;
    public:
    hero(string n,int h){
        name =n;
        hp=h;
    }
    void takedamage(int damage){
        hp=hp-damage;
        if(hp<=0){
            cout<<name<<"has died a heroic death"<<endl;

        }
        else{
            cout<<name<<"has"<<hp<<"hp left"<<endl;
        }}
    void display(){
        cout<<"the name of the hero is"<<name<<endl;
        cout<<"the hp of the hero is"<<hp<<endl;    
    }
};
class wizard:public hero{
    private:
    int mana;
    public:
    wizard(string n,int h,int m):hero(n,h){
        mana=m;

    }
    void castspell(int spellcost){
        if(spellcost<=mana){
            mana=mana-spellcost;
            cout<<"the spell has been casted"<<endl;
            cout<<"the remaining mana is"<<mana<<endl;
        }
        else{
            cout<<"not enough mana to cast the spell"<<endl;
        }
    }
    void display(){
        hero::display();
        cout<<"the mana of the wizard is"<<mana<<endl;
    }
};
int main(){
    wizard w1("Issei",100,50);
    w1.display();
    w1.castspell(30);
    w1.takedamage(20);
    w1.castspell(30);
    w1.takedamage(90);
    return 0;
}
