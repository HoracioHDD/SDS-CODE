#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>

using namespace std;

class Empleado
{
    public:
        Empleado();
        Empleado(string, long, int);

        string GetNombre() { return Nombre; }
        void SetNombre(string val) { Nombre = val; }
        long GetAntiguedad() { return Antiguedad; }
        void SetAntiguedad(long val) { Antiguedad = val; }

        int GetID() { return ID; }
        void SetID(int val) { ID = val; }

        //!Métodos
        virtual int CalcuSueldo() = 0;

    protected:
        string Nombre;
        long Antiguedad;
        int ID;

    private:
};

#endif // EMPLEADO_H
