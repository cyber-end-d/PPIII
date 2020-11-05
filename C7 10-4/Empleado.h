#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

class Empleado
{
    public:
        Empleado(const char*, const char*);
        ~Empleado();
        const char*getNombre()const;
        const char*getApellido()const;
        static int getContador();
        void mostrar()const;
    private:
        char*nombre;
        char*apellido;
        static int contador;

};
#endif // EMPLEADO_H_INCLUDED
