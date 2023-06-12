
package model;
/**
 * @author Julio
 */
public class Tecnico extends Operario{
    
    public Tecnico(){
    }
    public Tecnico(String Nombre){
        super(Nombre);
    }

    @Override
    public String toString() {
        return "Empleado " + this.getNombre() + " - > Operario - > Tecnico";
    }
    
    
}
