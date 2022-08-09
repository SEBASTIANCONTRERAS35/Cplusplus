#include <iostream>
#include "Intercambio1.h"
using namespace std;

template <typename T>

void ordernarascendente(T *arreglo,int n){
	for (int i=0;i<n;i++){
		for (int j=0;i<n-1;j++){
			if (arreglo[j]>arreglo[j+1])
			{
			intercambio(arreglo[j],arreglo[j+1]);
		}
	}
}}
template <typename T>
void ordernardescendente(T *arreglo,int n){
	for (int i=0;i<n;i++){
		for (int j=0;i<n-1;j++){
			if (arreglo[j]>arreglo[j+1])
			{
			intercambio(arreglo[j],arreglo[j+1]);
		}
	}
}

