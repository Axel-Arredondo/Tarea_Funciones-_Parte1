//2AV4 Bugarin Arredondo Axel
//
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int factorial(int a);


int main()
{
    int a, fact;
    cout<<"Introduce el valor:   "<< endl;
    cout<<endl;
    cin>>a;
    cout<<endl;
    fact = factorial(a);
    cout<<"El ";
    cout<< a;
    cout<<"!  es:  " ;
    cout<< fact << endl;


    return 0;
}

int factorial(int a){
    int b, resultado=1;
    for(b=1; b <=a; b++){resultado *=b;}
    return resultado;
}
