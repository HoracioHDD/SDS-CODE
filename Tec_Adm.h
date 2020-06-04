#ifndef TEC_ADM_H
#define TEC_ADM_H

#include <Empleado.h>


class Tec_Adm : public Empleado
{
    public:
        //Tec_Adm();
        Tec_Adm(string, long, int,int, long);

        int GetSueldoDiario() { return SueldoDiario; }
        void SetSueldoDiario(int val) { SueldoDiario = val; }
        long GetDias() { return Dias; }
        void SetDias(long val) { Dias = val; }

        //!Métodos
        int CalcuSueldo();

    protected:

    private:
        int SueldoDiario;
        long Dias;
};

#endif // TEC_ADM_H
