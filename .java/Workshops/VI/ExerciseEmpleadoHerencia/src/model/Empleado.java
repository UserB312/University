
package model;
/**
 * @author Julio
 */
public class Empleado {
    private String Nombre;
    
    //CONSTRUCTOR POR DEFAULT
    public Empleado(){
    }
    public Empleado(String Nombre){
        this.Nombre = Nombre;
    }
    //GETTERS AND SETTERS
    public String getNombre(){
        return Nombre;
    }
    public void setNombre(String Nombre){
        this.Nombre = Nombre;
    }

    @Override
    public String toString() {
        return "Empleado " + Nombre;
    }
}
