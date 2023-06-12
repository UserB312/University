
package ExercisePoliformismo;

public class Figura {
    private int alto;
    private int ancho;
    private double area;

    public Figura(int alto, int ancho){
        this.alto = alto;
        this.ancho = ancho;
    }
    
    public double getArea(){
        return area;
    }
    public int getAlto(){
        return alto;
    }
    public int getAncho(){
        return ancho;
    }
    public void setAlto(int alto){
        this.alto = alto;
    }
    public void setAncho(int ancho){
        this.ancho = ancho;
    }
    public void setArea(double area){
        this.area = area;
    }
    
    public double calcularArea(){
        return 0.0d;
    }
}
