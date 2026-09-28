#include <iostream>
using namespace std; 


int enesimo(int n);

int main (){

    int n;
    cout<<"ingrese el termino enesimo: ";
    cin>>n;

    cout<<"la elemento enesimo es: "<<enesimo(n);

    return 0; 

}

int enesimo(int n){

    
    if (n==1){
        return 4;

    }

    if (n == 2){
        return (4) + 2;
    }

    else if(n>2){
        return enesimo(n-1) + enesimo(n-2);
    }
    

}

