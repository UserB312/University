
package model;

public class Triangulo extends Figura {

    public Triangulo(String color) {
        super(color);
    }

    @Override
    void dibujar() {
        System.out.println("Dibujando un triangulo de color " + color);
    }

    @Override
    void borrar() {
        System.out.println("Borrando un triangulo de color " + color);
    }
    
    @Override
    public void cambiaColor(String c) {
        System.out.println("Cambiando color del triangulo, que es de color " + color + " a " + c);
        color = c;
    }
    
    @Override
    public String queColor() {
        return color;
    }
    
    @Override
    public String toString() {
        return "El triangulo es de color " + color;
    }
}
