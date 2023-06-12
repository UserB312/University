
package model;

public class Cuadrado extends Figura {

    public Cuadrado(String color) {
        super(color);
    }

    @Override
    void dibujar() {
        System.out.println("Dibujando un cuadrado de color " + color);
    }

    @Override
    void borrar() {
        System.out.println("Borrando un cuadrado de color " + color);
    }
    
    @Override
    public void cambiaColor(String c) {
        System.out.println("Cambiando color del cuadrado, que es de color " + color + " a " + c);
        color = c;
    }
    
    @Override
    public String queColor() {
        return color;
    }
    
    @Override
    public String toString() {
        return "El cuadrado es de color " + color;
    }
}
