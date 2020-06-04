#include "Ventas.h"

//Ventas::Ventas()
//{
//    //ctor
//}
Ventas::Ventas(string nomb, long anti, int id, int sueldo, int vent): Empleado(nomb, anti, id){
    SueldoBase = sueldo;
    VentasSema = vent;
}

int Ventas::CalcuSueldo(){
    int sueldo = 0;
    int comision = 0;

    if(VentasSema >= 5000 && VentasSema <= 10000){
        comision = (SueldoBase * 0.10);
    }else if(VentasSema >= 10001 && VentasSema <= 25000){
        comision = (SueldoBase * 0.20);
    }else if(VentasSema > 25000){
        comision = (SueldoBase * 0.25);
    }

    sueldo = (SueldoBase + comision);
    return sueldo;
}
