#include <iostream>
#include <string>
using namespace std;

class Sirky{
  public:
    Sirky(){_pocetSirek++;}
    Sirky(int pocet){
      _pocetSirek=pocet;
    }
    
    
    ~Sirky(){
      _pocetSirek--;
      cout << "prisel jsem o sirku:" << _pocetSirek << endl;
    }
    
    

    void pocetSirek(int pocet){
        int zustatek;
        if(_pocetSirek>=pocet){
      _pocetSirek-pocet;
        }
      else{
          cout<<"nejsou sirky '/n'";
      }
    }
    
  
  private:
    static int _pocetSirek;
};

int Sirky::_pocetSirek=0;

Sirky unknown1;
Sirky unknown2;
Sirky pocet(1);
Sirky pocet2(2);

int main(){
  Sirky();

}
