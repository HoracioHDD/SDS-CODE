#include "Algoritmo.h"
#include <cmath>
//Algoritmo::Algoritmo()
//{
//    //ctor
//}

int* Algoritmo::nomina(float sueldo1){
int sueldo = (int)ceil(sueldo1);//!ceil sirve para redondear una cifra de manera mayor 3.1 = 4, floor es para el menor 3.9 = 3
int c1000=0, c500=0, c200=0, c100=0, c50=0, c20=0, c10=0, c5=0, c2=0, c1=0;//variables que almacenarán las repeticiones en las que alguna denominación se usará
    while(sueldo>=1000){
        sueldo-=1000.00;
        c1000+=1;
    }
        while(sueldo>=500){
            sueldo-=500.00;
            c500+=1;
        }
            while(sueldo>=200){
            sueldo-=200.00;
            c200+=1;
            }
                while(sueldo>=100){
                sueldo-=100.00;
                c100+=1;
                }
                    while(sueldo>=50){
                    sueldo-=50.00;
                    c50+=1;
                    }
                        while(sueldo>=20){
                        sueldo-=20.00;
                        c20+=1;
                        }
                            while(sueldo>=10){
                            sueldo-=10.00;
                            c10+=1;
                            }
                                while(sueldo>=5){
                                sueldo-=5.00;
                                c5+=1;
                                }
                                    while(sueldo>=2){
                                    sueldo-=2.00;
                                    c2+=1;
                                    }
                                        while(sueldo>=1){
                                        sueldo-=1.00;
                                        c1+=1;
                                        }

int *Arreg = new int[10];//!Creción del arreglo con el tamaño indicado

    Arreg[0] = c1000;
    Arreg[1] = c500;
    Arreg[2] = c200;
    Arreg[3] = c100;
    Arreg[4] = c50;
    Arreg[5] = c20;
    Arreg[6] = c10;
    Arreg[7] = c5;
    Arreg[8] = c2;
    Arreg[9] = c1;

return Arreg;
}

int* Algoritmo::Sumar(int *Arreg, int *Arreg2){
    int *Arreg3 = new int[10];//!Creación del nuevo arreglo
    for(int i = 0; i < 10; i++)
    {
        Arreg3[i] = Arreg[i] + Arreg2[i];
    }
    delete []Arreg;
    return Arreg3;
}

int* Algoritmo::Igual0(){
    int *Denominaciones2 = new int[10];
    for(int i=0; i<10; i++){
        Denominaciones2[i] = 0;
    }
return Denominaciones2;
}
