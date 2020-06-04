#include "Excepcion.h"
#include <string>
#include <iostream>
using namespace std;

//Excepcion::Excepcion()
//{
//    //ctor
//}

template <class dato>
dato Excepcion::Numero<dato>::LeerNum(){
    //cin.ignore();
    dato num = -1;
    do{
            cin.clear();
            string errorEntrada = "\nError: Entrada no valida";
            string errorRango = "\nError: Número no válido";
            try{
                cin>>num;
                if(cin.fail()) throw errorEntrada;
                if(num<0){throw errorRango;}
            }
            catch (string e){
                cout << e << endl;
                num = -1;
            }
            catch (exception e) {
                cout << "Error: " << e.what() << "\n";
                num = -1;
            }
            catch(...){
                cout << "Error inesperado!";
                num = -1;
            }
    }while(num==-1);

    return num;
}
