#include <iostream>
using namespace std;
class complexe{
	float a, b, c ,d;
	 
	public :
		 // declaration de constructeur complexe qui permet de saisier les deux nombres complexes
		complexe(){
		cout<<"entrez la partie reelle de premier nombre : " ;
		cin>>a;
		cout<<"entrez la partie imaginaire de premier nombre : " ;
		cin>>b;
		cout<<"entrez la partie reelle de deuxieme nombre : ";
		cin>>c;
		cout<<"entrez la partie imaginaire de deuxieme nombre : " ;
		cin>>d;
		cout<<endl;
		}
    float addition(){
		
		cout<<"l'addition de ces nombres complexes est  : "<<a+c<<" +i "<<b+d<<endl ;
		
	}
	float soustraction(){
		
		cout<<"la soustraction de ces nombres complexes est  : "<<a-c<<" +i "<<b-d<<endl ;
		
	}
	float multiplication(){
		
		cout<<"la multiplication de ces nombres complexes est  : "<<a*c<<" +i "<<b*d<<endl ;
		
	}
	float division(){
		
		cout<<"la division de ces nombres complexes est  : "<<a/c<<" +i "<<b/d<<endl ;
		
	}
	void egalite(){
		if(a==c && b==d){
			cout<<" ces nombres complexes  sont egaux"<<endl;
		}else { cout<< " ces nombres complexes ne sont pas egaux";	}
	}
};
int main (){
	 
	 int opr ;// numero d'operation 
	 complexe C;//creation d'objat
	 // Menu de les operations
	 cout<<" choisir le numero d'operation arithmetique"<<endl;
	 cout<<"1=addition"<<endl;cout<<"2=soustraction"<<endl;
	 cout<<"3=multiplication"<<endl;cout<<"4=division" <<endl;
	 cout<<"5=egalite" <<endl;
	 cin>> opr;
	 cout<<endl;
	  //  l'executation de l'operation qui demande par l'utilisateur  
	 if(opr==1){
	 C.addition(); }
	  
	 else if(opr==2){
	 C.soustraction();}
	 
	 else if(opr==3){
	 C.multiplication();}
	 
	 else if(opr==4){
	 C.division();}
	 
	else if(opr==5){
	 C.egalite();}
	 
	return 0;
}
