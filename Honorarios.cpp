#include "Honorarios.h"

//Honorarios::Honorarios()
//{
//    //ctor
//}
Honorarios::Honorarios(string nomb, long anti, int id,int sueldo, int horass): Empleado(nomb, anti, id){
    SueldoHora = sueldo;
    Horas = horass;
}

int Honorarios::CalcuSueldo(){
    int sueldo = 0;
    sueldo = (SueldoHora * Horas);
    return sueldo;
}
