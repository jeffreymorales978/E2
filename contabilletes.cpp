#include<iostream>
using namespace std;

int main()
{
        int i=0,i1=0,i2=0,l;
        float x,s=0,s1=0,s2=0;
        cout<<"Ingrese l :"; cin>>l;
        do{


        cout<<"Ingrese x :"; cin>>x;
        i=i+1;
        s=s+1;
        if(x==10){
                i1=i1+1;
                s1=s1+x;



        }else{
                i2=i2+1;
                s2=s2+x;


        }


        }while(i<l);
        cout<<"La cantidad de billetes ingresadas fue :" <<i<<endl;
        cout<<"El valor total ingresado fue de : "<<s<<endl;

        cout<<"La cantidad de billetes de $10 ingresados fue :" <<i1<<endl;
        cout<<"El valor total en billetes de $10 ingresados fue de : "<<s1<<endl;


        cout<<"La cantidad de billetes de $20 ingresados fue :" <<i2<<endl;
        cout<<"El valor total en billetes de $20 ingresados fue de :" <<s2<<endl;

        return 0;


}
