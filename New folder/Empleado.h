#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED



class Empleado
{
public:
    ~Empleado();
    Empleado(const char*, const char*);
    void setNombre(const char*);
    void setApellido(const char*);
    const char*getNombre()const;
    const char*getApellido()const;
    virtual void mostrar()const;
    virtual float sueldo()const=0; //las func virtuales puras deben ser OBLIGATORIAMENTE redefinidas, las otras las puedo heredar, sueldo queda sin definir
    //sueldo es cirtual pura, no tiene cuerpo por eso lo pongo cero

private:
    char*nom, *ape;
};


#endif // EMPLEADO_H_INCLUDED
