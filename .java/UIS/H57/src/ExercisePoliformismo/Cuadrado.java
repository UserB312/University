
package ExercisePoliformismo;

public class Cuadrado extends Figura{
    
    public Cuadrado(int alto, int ancho){
        super(alto, ancho);
    }
    
    @Override
    public double calcularArea(){
        return Math.pow(getArea(),2);
    }

}
