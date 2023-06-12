
package Visibilidad;

public class producto {
    private String name;
    protected int precio;
    public int cantidad;
    //METODO CONSTRUCTOR, UTILIZADO PARA INICIALIZAR ATRIBUTOS U EL OBJETO  
    public producto(String name,int precio,int cantidad){
        this.name = name;
        this.precio = precio;
        this.cantidad = cantidad;
    }
    void test(){
        name = "";
        precio = 0;
        cantidad = 0;
    }
    
}
