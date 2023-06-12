
package model;
/**
 * @author Julio
 */
public class Persona {
    private int id;
    private String Nombre;
    
    //CONSTRUCTOR POR DEFAULT
    public Persona(){
    }
    //CONSTRUCTOR SOBRECARGADO
    public Persona(int id, String Nombre){
        this.id = id;
        this.Nombre = Nombre;
    }
    //GETTERS AND SETTERS
    public int getId() {
        return id;
    }
    public void setId(int id) {
        this.id = id;
    }
    public String getNombre() {
        return Nombre;
    }
     public void setNombre(String Nombre) {
        this.Nombre = Nombre;
    }

    @Override
    public String toString() {
        return "Persona" + " id = " + id + ", Nombre = " + Nombre + '}';
    }
    
     
}
