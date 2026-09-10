//ejercicio 1 
#include <iostream>
using namespace std; 

int potencia(int n){
	if (n <= 1) 
		return 1;
	return n * potencia(n-1);
}
int main (){
	 
	int n;
	cout<<"ingrese el numero: ";
	cin>>n;
	cout<<"el factorial del numero es: "<<potencia(n)<<endl;
		
	return 0; 
}
