//LIFO STACK C++
#include <iostream>
#include <string>
using namespace std;

  //template <class T>
  class Zasobnik{
      public:
      Zasobnik(){
          _vrchol = NULL;
          }
      void push(int data);
      int pop();
      private: 
      struct _uzel{
          int data;
          _uzel *dalsi;
          };
          _uzel *_vrchol;
      };
      
      void Zasobnik::push(int vstup){
          if(_vrchol==NULL){
          _vrchol=new _uzel;
          _vrchol->data=vstup;
          _vrchol->dalsi=NULL;
          
          }
          else{
              _uzel *tmp=new _uzel;
              tmp->data=vstup;
              tmp->dalsi=_vrchol;
              _vrchol=tmp;}
              
              
}
int Zasobnik::pop(){
    _uzel *tmp=_vrchol->dalsi;
    int vystup=_vrchol->data;
    delete(_vrchol);
    _vrchol=tmp;
    return vystup;
    }
    Zasobnik zz;
int main()
{
    for(int i=0;i<=100;i++){
        zz.push(i);
    }
    cout<<'/n';
    for(int x=0; x<=50; x++){
        cout<<zz.pop()<<endl;
        }
        
        return 0;}
