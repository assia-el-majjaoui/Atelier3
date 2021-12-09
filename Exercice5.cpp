#include <iostream>
using namespace std;

class Animal{    //declaration de class animal
	string nom;
	int age;
	
	public :
	 void  set_value(int a, string n){
     age=a;
     nom=n;
       cout<<"le nom :  "<<nom<<endl;
       cout<<"l'age :  "<<age<<endl;
     }
};
class Zebra : public Animal{  //declaration de class Zebra qui derivee la class Animal
	public:
		Zebra(){
	     	cout<< "le lieu d'origine : Afrique"<<endl;
			}
};
class Dolphin : public Animal{  //declaration de class Zebra qui derivee la class Animal
		public:
		Dolphin(){
			cout<< "le lieu d'origine : Amérique du Nord"<<endl;
			}
};
int main(){
    
   Zebra Z;  //creation de varible z de type Zebra
   Z.set_value(20,"Zebra"); //l'appelle du fonction set_value a partir de class Zebra
   cout<<endl;
   Dolphin D;//creation de varible z de type Dolphin
   D.set_value(15, "Dolphin");//l'appelle du fonction set_value a partir de class Dolphin
}
