
package ExercisePoliformismo;

public class Triangulo extends Figura{
    
    public Triangulo(int alto, int ancho) {
        super(alto, ancho);
    }
    
    @Override
    public double calcularArea(){
        return (getAncho() * getAlto())/2;
    }

}
