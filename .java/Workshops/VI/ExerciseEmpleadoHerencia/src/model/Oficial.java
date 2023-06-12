
package model;
/**
 * @author Julio
 */
public class Oficial extends Operario{
    
    public Oficial(){
    }
    
    public Oficial(String Nombre){
        super(Nombre);
    }

    @Override
    public String toString() {
        return "Empleado " + this.getNombre() + " - > Operario - > Oficial";
    }
    
    
}
