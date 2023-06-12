
package ExercisePoliformismo;

public class Circulo extends Figura{
    
    public Circulo(int alto, int ancho){
        super(alto, ancho);
    }
    
    @Override
    public double calcularArea(){
        return getArea();
    }

}
