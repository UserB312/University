
package model;
/**
 * @author Julio
 */
public class Operario extends Empleado{
    
    public Operario(){
    }
    //CONSTRUCTOR SOBRECARGADO
    public Operario(String Nombre){
        super(Nombre);
    }

    @Override
    public String toString() {
        return "Empleado " + this.getNombre() + " - > Operario";
    }
    
}
