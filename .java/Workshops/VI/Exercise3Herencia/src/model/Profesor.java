
package model;
/**
 * @author Julio
 */
public class Profesor extends Persona{
    
    //CONSTRUCTOR POR DEFAULT
    public Profesor(){
    }
    //CONSTRUCTOR SOBRECARGADO
    public Profesor(int id, String Nombre){
        super(id, Nombre);
    }

    @Override
    public String toString() {
        return "Profesor de nombre: " + this.getNombre() + " con Id de profesor " + this.getId();
    }
    
    
}
