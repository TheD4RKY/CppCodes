#include <iostream>
#include <string>
using namespace std;
struct weapon {
        string weaponName;
        int weaponDefence;
        int weaponDamage;
        int weaponWeight;
        weapon *next;
        };
        weapon *vrchol;
class Bytost {
    public:
        void attack();
        
        void search();
        int Troll();
        int Hero();
        void carry();
    protected:
        int _health;
        int _attack;
        int _defence;
        int _inteligence;
    };

class Troll:public Bytost {
    public: 
    void roar() {
        cout<<"hauuuu'/n'";
    }
    
    
    };
    
class Hero:public Bytost {
    public:
    void search() {
        cout << "searching...'/n'" ;
        }
        
    void learn(){
        _inteligence = _inteligence + 1;
        
        }
    string batoh[10];
    
    //private:
    };
class item {
    public:
    void method() {
        cin >> zbran;
        cin >> obrana;
        cin >>  utok;
        cin >> vaha;
        };
    private: 
        string zbran = vrchol -> weaponName;
        int obrana = vrchol -> weaponDefence;
        int utok = vrchol -> weaponDamage;
        int vaha = vrchol -> weaponWeight;
    };
    
    Hero Zelina;
    Troll Beranek;
int main()
{

}
