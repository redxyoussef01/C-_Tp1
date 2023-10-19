#include <iostream>
#include <math.h>
#define pi 3.14
using namespace std ; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void exercice1(int a , int b ){
	int c ;
	
	cout<<"Avant permutation a =" << a << "b = " << b <<endl;
	c = a ; 
	a = b ;
	b= c; 
	cout<<"apres permutation a =" << a << "b = " << b <<endl;
}

void exercice2(int x){
	cout << "le carre de x = " << x*x << " le racine de x  = "<< sqrt(x) <<endl;
	cout << "le perimetre de x =" << 2*pi*x << "l aire de cercle  =" << pi*x*x << endl;
	cout << "la longueur de la diagonale d'un carre de cote x =" << 2*x<<endl ; 
}



void exercice3(int a){
	
	if(a%2 == 0){
		cout<< "le nombre est pair"<<endl;
		
	}else{
		cout <<"le nombre est impair"<<endl;
	}	
	
	
		for(int i= 0 ; i<=a ;i++){
			if(i%2==1){
			cout << i << " ";
		}	
	}
	cout << endl;
	int n=0;
	int somme=0;
	int produit=1;
	float moyen=0;
	for(int i=0 ;i<a ; i++){
	 cin>>n;
	 
	 somme += n ;
	 produit *= n;
	 
	}
	moyen = (float) somme / a;
	
	cout<<"la somme est = "<< somme << " produit est = "<< produit << " Moyen" << moyen << endl;
	
}


void exercice4(){
	int t[10];
	
	for(int i = 0 ; i<10 ;i++){
		cin>>t[i];
	}
	
	for(int i=0 ;i<10;i++){
		if(t[i] >=10){
			cout << "nombre " << i + 1 << ": " << t[i] <<endl;
		}
	}
	
	int max= t[0]; 
	int indice;
	for(int i=1 ; i<10 ; i++){
		if(t[i]> max){
			max = t[i];
			indice = i;
		}
	}
	
	cout <<"l indice du nombre le plus grand est : "<< indice << endl;
	
	int somme =0;
	for(int i=0 ; i<10 ; i++){
	somme += t[i];
	}
	cout << "la somme est : "<< somme <<endl;
	
}


void exercice5(){
	int a , b , c ;
	
	cin>>a ; 
	cin >> b ;
	cin >> c ; 

	if(a>=c && a>=b){
		cout<<"le plus grand nombre est :" << a<<endl;
	}else if(b>=c && b>=a){
		cout<<"le plus grand nombre est :" << b <<endl;
	}else if(c>=a && c>=b){
		cout<<"le plus grand nombre est :" << c <<endl;
	}
	


}
	
void exercice6(){
	float note; 
	
	cin>>note;
	
	if(note>=10){
		cout<<"valide"<<endl;
		
	}else{
		cout << "non valide" <<endl;
		
	}
}	
	


void exercice7(){
	int m , n;
	
	cin>>m;
	cin>>n;
	
	if(n*m>0){
		cout<<"le prd est positive "<<endl;
		
	}else if(n*m<0){
		cout<<"le prd est negative "<<endl;
	}else{
		cout<<"le prd est null "<<endl;
	}
}



	void exercice8(){
		int x ;
		cin>>x;
		if (x<0){
			cout << "la valeur abso = " << -x <<endl;
			
		}else{
			cout << "la valeur abso = " << x <<endl;
			
		}
	}


int main(int argc, char** argv) {
/*	
	int a ; 
	int b ;
	cin>>a;
	cin>>b;
	
	exercice1(a ,b );
	
	int x;
	cin>>x;
	
	exercice2(x);
	
	
	int z;
	cin>>z;
	
	exercice3(z);
	
	exercice4();
	
	
	exercice5();
	
	
	exercice6();
	exercice7();
	
	exercice8();
	*/
	
	
	return 0;
}
