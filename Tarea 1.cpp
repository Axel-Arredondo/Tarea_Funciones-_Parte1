//2AV4 Bugarin Arredondo Axel
//
#include<stdio.h>
#include<iostream>
using namespace std;

int suma (int a,int b);

int main()
{
    int a=0, b=0;
    cout<<"Este programa realiza la suma de 2 numeros enteros" << endl;

    cout<<"   Introduce el primer valor a sumar:"<<endl;
    cin>>a;

    cout<<"   Introduce el segundo valor a sumar:"<<endl;
    cin>>b;
    cout<< "El Valor de la suma es:   "<<suma(a, b)<< endl;

}

int suma (int a,int b){
    int c= a+b;
    return c;
}
