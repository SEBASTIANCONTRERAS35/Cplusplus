#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numeros[]={1,2,3,4,5,6,7,8,9,10};
    int i, inf, sup, mitad, dato;
    char band='F';
    //Algoritmo de la busqueda binaria
    inf=0;
    sup=10;
    i=0;
    cout<<"Digite un Dato a buscar: ";cin>>dato;
    while ((inf<=sup)&& i<10){
        mitad=(inf+sup)/2;
        if (numeros[mitad]==dato){
            band='V';
            break;
        }
        if(numeros[mitad]>dato){
            sup=mitad;
            mitad=(inf+sup)/2;
        }
        if(numeros[mitad]<dato){
            inf=mitad;
            mitad=(inf+sup)/2;
        }
        i++;
    }
    if(band=='F'){
        cout<<"\nEl numero No existe en el arreglo";
    }
    else if(band=='V'){
        cout<<"\nEl dato a buscar se encuentra en el Numero["<<mitad<<"]="<<dato;
    }
    getch();
    return 0;
}
