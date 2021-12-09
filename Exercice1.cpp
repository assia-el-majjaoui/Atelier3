#include<iostream>

using namespace std;

class MyClass{
    string nom;
    public :
      MyClass(){
      	//Declaration de constructeur
       cout<< "votre Prenom : " <<endl;   
       cin>> nom;
       cout<< "   constructeur : bonjeur " << nom <<endl;
     }
    //Declaration de Destructeur
     ~ MyClass(){
       cout << "   Destructeur  : hello " << nom<<endl;
    }

     };
int main(){

    MyClass C1;//creation d'objet
    return 0;
} 
