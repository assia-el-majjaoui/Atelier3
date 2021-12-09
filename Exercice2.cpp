#include<iostream>

using namespace std;
	
class Shape{
protected :
float l,h;	
	
	public:
	Shape(float L,float H){
		l=L;
		h=H;
	}	
};
class triangle : public Shape{
		public :
			
 	    triangle(float L, float H) : Shape(L, H) {} 
 	   
	   float area(){
	     	return( l*h/2); 
	   }	   
};
class rectangle : public Shape{
		public :
			
 	    rectangle(float L, float H) : Shape(L, H) {} 
 	    
	    float area( ){
	   	    return(l*h);
	   }	   
};

int main (){
	float L, H;
	cout<< " entrez la valeur de largeur :  " ;   
    cin>> L;
    cout<< " entrez la valeur d'hauteur :  " ;   
    cin>> H;
 	
   rectangle rectangle(L,H);
   triangle triangle(L,H);
  
   cout<<endl<<"l'aire de triangle est : ";
   cout << triangle.area() << endl; 
   cout<<"l'aire de rectangle est : " ;
   cout << rectangle.area() << endl;   
 
return 0;	
}
