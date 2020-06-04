#include "Tec_Adm.h"
#include <iostream>
using namespace std;
//Tec_Adm::Tec_Adm()
//{
//    //ctor
//}
Tec_Adm::Tec_Adm(string nomb, long anti, int id,int sueldo, long diass): Empleado(nomb, anti, id){
    SueldoDiario = sueldo;
    Dias = diass;
}

int Tec_Adm::CalcuSueldo(){
    int sueldo = SueldoDiario * Dias;
    int bono = 0;
    int sueldoFinal = 0;

    if (Dias == 6){
        char resp = '\0';
        cout << "Llego temprano toda la semana?   [S/N]";
        cin >> resp;
        if(resp == 'S' || resp == 's'){
            if(Antiguedad < 5){
                bono = (SueldoDiario + (sueldo * 0.05));
            }else if(Antiguedad >= 5 && Antiguedad < 10){
                bono = (SueldoDiario + (sueldo * 0.10));
            }else if(Antiguedad >= 10 && Antiguedad <= 20){
                bono = (SueldoDiario + (sueldo * 0.20));
            }else if(Antiguedad > 20){
                bono = (SueldoDiario + (sueldo * 0.25));
            }
        }
    }

    sueldoFinal = sueldo + bono;
    return sueldoFinal;
}
