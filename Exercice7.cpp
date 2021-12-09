#include<iostream>
#include<cmath>
using namespace std;
class vecteur3d {
	float x;
	float y;
	float z;
	
	public:
	vecteur3d(float a=0,float b=0,float c=0) : x(a), y(b), z(c) {
	}
	
	void afficher(){
      cout<<"  ( "<<x<<" , "<<y<<" , "<<z<<" ) "<<endl;
	}
	vecteur3d somme( const vecteur3d & v){
    vecteur3d S;
		S.x = x + v.x;
		S.y = y + v.y;
		S.z = z + v.z;
		return S;
	}
	float produit_scalaire(const vecteur3d & v) {
		return x*v.x + y*v.y + z*v.z;
	}
	void coincide(const vecteur3d & v) {
		if(x == v.x && y == v.y && z == v.z){
		cout<< "les vecteurs ont memes composantes"<<endl ;
			}else {
	 	cout<< "les vecteurs ont composantes differants"<<endl ;
	}}
	float norme() {
		return sqrt(x*x + y*y + z*z);
	}
	vecteur3d normax(vecteur3d v) {
		if( this->norme() > v.norme())
		    return *this;
		    
		return v;
	}
	
	vecteur3d * normax(vecteur3d * v) {
		if( this->norme() > v->norme())
		    return this;
		    
		return v;
	}
	
	vecteur3d & normaxR(vecteur3d &v) {
		if( this->norme() > v.norme())
		    return *this;
		    
		return v;
	}
		
	};	
  int main(){
  	
  float a1,b1,c1, a2,b2,c2;	
  		cout<<" VECTEUR 1 : "<<endl; 
    	cout<<" entrer la valeur de a  : ";cin>>a1;  
		cout<<" entrer la valeur de b  : ";cin>>b1;  
		cout<<" entrer la valeur de c  : ";cin>>c1; 
		cout <<endl;
		cout<<" VECTEUR 2 : "<<endl; 
		cout<<" entrer la valeur de a  : ";cin>>a2;  
		cout<<" entrer la valeur de b  : ";cin>>b2;  
		cout<<" entrer la valeur de c  : ";cin>>c2; 
		
  cout<<endl;	
  vecteur3d V1(a1,b1,c1);
  cout << "La vecteur V1  : ";
  V1.afficher(); 
  cout <<endl;
  	
  vecteur3d V2(a2,b2,c2);
  cout << "La vecteur V2  : ";
  V2.afficher();
  cout<<endl;
  
 cout << "La somme de deux  vecteurs v1 et v2 est : ";
 (V1.somme(V2)).afficher(); 

 cout << "Le produit scalaire de deux  vecteurs v1 et v2 est : " << V1.produit_scalaire(V2) << endl;
 cout<<endl; 
 
 V1.coincide(V2); cout<<endl;
 
	cout<< "la norme de vecteur V1 : "<<V1.norme()<<endl;
	cout<< "la norme de vecteur V2 : "<<V2.norme()<<endl;
	cout<<endl;
	   
	cout << "Le vecteur qui a la plus grande norme est (le résultat est renvoyer par valeur): ";
	(V1.normax(V2)).afficher();
	cout << "Le vecteur qui a la plus grande norme est (le résultat est renvoyer par adresse): ";
	(V1.normax(&V2))->afficher();
	cout << "Le vecteur qui a la plus grande norme est (le résultat est renvoyer par reference) :";
	(V1.normaxR(V2)).afficher(); 
	cout<<endl;
 }
