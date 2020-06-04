#ifndef HONORARIOS_H
#define HONORARIOS_H

#include <Empleado.h>


class Honorarios : public Empleado
{
    public:
        //Honorarios();
        Honorarios(string, long, int, int, int);

        int GetSueldoHora() { return SueldoHora; }
        void SetSueldoHora(int val) { SueldoHora = val; }
        int GetHoras() { return Horas; }
        void SetHoras(int val) { Horas = val; }

        //!Métodos
        int CalcuSueldo();

    protected:

    private:
        int SueldoHora;
        int Horas;
};

#endif // HONORARIOS_H
