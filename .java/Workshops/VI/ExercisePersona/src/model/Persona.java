
package model;
/**
 * @author Julio
 */
public class Persona {
    private int id;
    private String Nombre;
    private String Apellidos;
    private int Edad;
    //CONSTRUCTOR POR DEFAULT
    public Persona() {
    }
    //CONSTRUCTOR SOBRECARGADO
    public Persona(int id, String Nombre, String Apellidos, int Edad){
        this.id = id;
        this.Nombre = Nombre;
        this.Apellidos = Apellidos;
        this.Edad = Edad;
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
    public String getApellidos() {
        return Apellidos;
    }
    public void setApellidos(String Apellidos) {
        this.Apellidos = Apellidos;
    }
    public int getEdad() {
        return Edad;
    }
    public void setEdad(int Edad) {
        this.Edad = Edad;
    }

    @Override
    public String toString() {
        return "Persona{" + "id=" + id + ", Nombre=" + Nombre + ", Apellidos=" + Apellidos + ", Edad=" + Edad + '}';
    }    
    
    public void Concentrarse(){
        System.out.println("Puede concentrarse");
    }
    public void Viajar(){
        System.out.println("Puede viajar");
    }
    
}
