#ifndef VENTAS_H
#define VENTAS_H
#include <string>

#include <Empleado.h>

using namespace std;

class Ventas : public Empleado
{
    public:
        //Ventas();
        Ventas(string, long, int, int, int);

        int GetSueldoBase() { return SueldoBase; }
        void SetSueldoBase(int val) { SueldoBase = val; }
        int GetVentasSema() { return VentasSema; }
        void SetVentasSema(int val) { VentasSema = val; }
        //!Métodos
        int CalcuSueldo();

    protected:

    private:
        int SueldoBase;
        int VentasSema;
};

#endif // VENTAS_H
