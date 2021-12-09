#include<iostream>
using namespace std;
class stc {
static int s; //declaration de variable static
public:
string nom;
string prenom;
void call(string n, string p)// fonction call
{
nom=n;
prenom=p;
s++;
}
int afficher(){
cout<<"le nom :  "<<nom<<endl;
cout<<"le prenom : "<<prenom<<endl;
}
static void affi();
};
int stc:: s=0;
void stc:: affi() // fonction static
{
cout<<"le nombre de fois la fonction call a repeter est :"<<s<<endl;
}
int main(){
stc S;
S.call("Assia", "ElMajjaoui");
S.afficher();
cout<<endl ;
S.call("Adam","Elhasnaoui");
S.afficher();
cout<<endl ;
S.call("Samira","fakir");
S.afficher();
cout<<endl ;
stc::affi();
}


