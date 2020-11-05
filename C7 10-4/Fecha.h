#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

class Fecha
{
    public:
        Fecha(int=1,int=1,int=1900);
        void mostrar()const;
        ~Fecha();
    private:
        int dia, mes,anio;
        int verificarDia(int);
};



#endif // FECHA_H_INCLUDED
