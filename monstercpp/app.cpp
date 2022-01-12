#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
class Monster
{
private:
    int _Health;

public:
    
    

    Monster(){
        _Health = 100;
                
           cout << "Monstrum se spawnulo" << endl;
    }

    void Print(){
        cout << "Mostrum má "<< _Health << " životů" <<endl;
    }
    ~Monster(){
     cout<<"Monstrum zabito!"<<endl;   
    }

};

void Function(int pocetMonster){
    for(int x=1;x<=pocetMonster;x++){
    
    Monster summon[x];
    summon[x].Print();
    }
}

int main(){
    int monsters = (rand() % 6) + 1;
    cout<<monsters<<endl;
    Function(monsters);


    return 0;
}