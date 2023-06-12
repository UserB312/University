
package model;

public class Circulo extends Figura {

    public Circulo(String color) {
        super(color);
    }

    @Override
    void dibujar() {
        System.out.println("Dibujando un circulo de color " + color);
    }

    @Override
    void borrar() {
        System.out.println("Borrando un circulo de color " + color);
    }
    
    @Override
    public void cambiaColor(String c) {
        System.out.println("Cambiando color del circulo, que es de color " + color + " a " + c);
        color = c;
    }
    
    @Override
    public String queColor() {
        return color;
    }
    
    @Override
    public String toString() {
        return "El circulo es de color " + color;
    }
}
