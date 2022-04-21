#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
using namespace std;
const int VEL10 = 10;
class Vec{
    public:
            Vec(string typVeci, int pocetMaterialu){
                _pocetVeci++;
                buffer[_pocetVeci] = typVeci;

            }
            void printParams(string typVeci, int pocetMaterialu){
             for(int cykl = 0; cykl <= _pocetVeci; cykl++){
                cout << buffer[cykl]<<endl;
                cout << "pocet veci je" << _pocetVeci <<'/n';
             }}
           virtual void workProcess() = 0;



    protected:
    int _pocetVeci;
    string buffer [VEL10];

};

class Kravina: public Vec{
public:
    Kravina(string Typvec, int pocetVeci):Vec(Typvec, pocetVeci){
        printParams(Typvec, pocetVeci);
        }
        virtual void workProcess(){
        cout << "vyrabim kravinu'/n'";
    }
};

class jinaKravina:public Vec{
    jinaKravina(string Typvec, int pocetVeci):Vec(Typvec, pocetVeci){
        printParams(Typvec, pocetVeci);

    }
    virtual void workProcess(){
        cout << "vyrabim jinou kravinu'/n'";
    }
};
#endif // HEADER_H_INCLUDED
