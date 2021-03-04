//2AV4 Bugarin Arredondo Axel
//
#include<stdio.h>
#include<iostream>
using namespace std;

int mayor(int a,int b);

int main()
{
    int a, b, c;
    cout<<"Este programa Imprime el mayor de 3 valores" << endl;
    cout<<"   Introduce el primer valor a comparar:  ";
    cin>>a;
    cout<<"   Introduce el segundo valor a comparar:  ";
    cin>>b;
    cout<<"   Introduce el Tercer valor a comparar:  ";
    cin>>c;
    int max1 = mayor(mayor(a,b),c);
    //int max2 = mayor (max1,c);
    cout<< max1;


    return 0;
}

int mayor(int a,int b){
    int NumMax;
    if(a>b){
        NumMax = a;
    }else{
        NumMax = b;
    }
    return NumMax;
    }
