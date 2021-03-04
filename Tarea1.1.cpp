//2AV4 Bugarin Arredondo Axel
//
#include<stdio.h>
#include<iostream>
using namespace std;

int mayor(int a,int b);

int main()
{
    int a, b;
    cout<<"Este programa Imprime el mayor de dos valores" << endl;
    cout<<"   Introduce el primer valor a comparar:  ";
    cin>>a;
    cout<<"   Introduce el segundo valor a comparar:  ";
    cin>>b;

    cout<<"El valor mas alto es:  " ;
    cout<<mayor(a,b) ;

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
