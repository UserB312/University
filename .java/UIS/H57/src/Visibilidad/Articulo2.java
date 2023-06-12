
package Visibilidad;

public class Articulo2 {

    private String nombre;
    private String marca;
    private double preciounitario;
    private int cantidadstock;

    public Articulo2(String nombre, String marca, double preciounitario, int cantidadstock) {
        this.nombre = nombre;
        this.marca = marca;
        this.cantidadstock = cantidadstock;
        this.preciounitario = preciounitario;
    }

    public double costoinventario() {
        return (preciounitario*cantidadstock);
    }

    public void informacionarticulo() {
        System.out.println("Nombre: "+ nombre);
        System.out.println("Marca: " + marca);
        System.out.println("Precio: "+ preciounitario);
        System.out.println("Cantidad: "+ cantidadstock);
        System.out.println("Costo Inventario: "+ costoinventario());
    }
}
