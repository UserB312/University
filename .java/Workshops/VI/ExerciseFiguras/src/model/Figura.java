
package model;

abstract class Figura implements Coloreable {
    
    protected String color;

    public Figura(String color) {
        this.color = color;
    }
    
    abstract void dibujar();
    abstract void borrar();
}
