#include <iostream>
using namespace std;
class Audio;
class Media//declaration de la classe media 
{
public:
string titre ;
string nom;
void imprimer(string c) // declaration de fonction imprimer 
{
nom=c;
}
char *id()
{
titre="media";
cout << " le "<<nom<<" qui herite le "<< titre << endl;
}
};
class Audio : public Media // declacation de classe audio (fille de classe madia)
{
public:
string name;
void display(string c){ //redeclaration fonction display de class audio
name=c;
}
char *afficher(){
cout<<" le "<<name<<" herite ";
}
};
class CD: public Audio //declaration de classe CD (fille de classe audio)
{
public:
};
class Cassette: public Audio//declaration de classe Cassette (fille de classe audio)
{
public:
};
class Disque: public Audio{ //declaration de classe disque (fille de classe audio)
public:
};
class Livre : public Media  //declaration de classe LIVRE (fille de classe MEDIA)
{
};
class Presse : public Media //declaration de classe Presse (fille de classe Media)
{
public:
string nam;
void dis(string n){
nam=n;
}
char *affi(){
cout<<" le "<<nam<<" herite "; //declaration de fonction affi qui afficher le nom de classe
}
};
class Magazine: public Presse //declaration de classe Magazine (fille de calsse presse)
{
public:
};
class Journal: public Presse{ //declaration de classe Journal (fille de calsse presse)
public:
};
class Revue: public Presse{ //declaration de classe Revue (fille de calsse presse)
public:
};
int main()
{
Audio A;
Livre L;
Presse P;
CD C;
Cassette CA;
Disque D;
Magazine M;
Journal J;
Revue R;
A.imprimer("audio");
A.id();
L.imprimer("livre");
L.id();
P.imprimer("presse");
P.id();
C.display("CD");
C.imprimer("audio");
C.afficher();
C.id();
CA.display("Cassette");
CA.imprimer("livre");
CA.afficher();
CA.id();
D.display("Disque");
D.imprimer("Presse");
D.afficher();
D.id();
M.dis("Magazine");

M.imprimer("Presse");
M.affi();
M.id();
J.dis("Journal");
J.imprimer("Ptesse");
J.affi();
J.id();
R.dis("Revue");
R.imprimer("Presse");
R.affi();
R.id();
}
