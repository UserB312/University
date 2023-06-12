
package model;
/**
 * @author Julio
 */
public class Directivo extends Empleado{
    
    public Directivo(){
    }
    //CONSTRUCTOR SOBRECARGADO
    public Directivo(String Nombre){
        super(Nombre);
    }

    @Override
    public String toString() {
        return "Empleado " + this.getNombre() + " - > Directivo";
    }
    
}
