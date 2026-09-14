//Ejercicio 04
#include <iostream>
using namespace std;

int max(int arr[], int m);

int main (){
    
    int m;
    int arr[50];
    cout<<"Ingrese la cantidad de elementos: ";
    cin>>m;

    cout<<"---------ingrese numeros en el arreglo---------\n";
    for (int i=0; i<m; i++){
        cout<<"arreglo "<<i+1<<": ";
        cin>>arr[i];

    }
    cout<<"el elemento maximo es: "<<max(arr, m)<<endl;



    return 0; 

}

int max(int arr[], int m){
    if (m==1){
        return arr[0];
    }

    int maximo = max(arr, m-1);
    if (arr[m-1] > maximo){
        return arr[m-1];
    } else{
        return maximo;
    }
    }




