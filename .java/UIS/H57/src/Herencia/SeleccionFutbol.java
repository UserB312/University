
package Herencia;

public class SeleccionFutbol {
    protected int dni;
    protected String nombre;
    protected String apellido;
    protected int edad;
    //INCIALIZAMOS VARIABLES MEDIANTE UN CONSTRUCTOR                                   
    public SeleccionFutbol(int dni, String nombre, String apellido, int edad) {
        this.dni = dni;
        this.nombre = nombre;
        this.apellido = apellido;
        this.edad = edad;
    }
    //GETTER AND SETTER
    public int getDni(){
        return dni;
    }
    public void setDni (int dni){
        this.dni = dni;
    }
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public String getApellido() {
        return apellido;
    }
    public void setApellido(String apellido) {
        this.apellido = apellido;
    }
    public int getEdad() {
        return edad;
    }
    public void setEdad(int edad) {
        this.edad = edad;
    }
    //METODOS
    public void concentrarse(){
        System.out.println("Puede concentrarse");
    }
    public void viajar(){
        System.out.println("Puede viajar");
    }
    
}
