#ifndef ARTICULO_H_INCLUDED
#define ARTICULO_H_INCLUDED
class Articulo
{
    public:
        Articulo();
        int getCodigo()const;
        int getCantidad()const;
       const char * getDescrip() const;
        double getPrecio()const;
    private:
        int codigo,cant;
        char descrip[30];
        double preciou;
};


#endif // ARTICULO_H_INCLUDED
