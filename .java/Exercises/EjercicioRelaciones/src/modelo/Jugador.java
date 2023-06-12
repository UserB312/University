
package modelo;
/**
 * @author 
 */
public class Jugador {
    private String nombre, posicion;
    private int edad;
    
    public Jugador(){}
    
    public Jugador(String n, String p, int e){
        this.nombre=n;
        this.posicion=p;
        this.edad=e;
    }

   
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public String getPosicion() {
        return posicion;
    }
    public void setPosicion(String posicion) {
        this.posicion = posicion;
    }
    public int getEdad() {
        return edad;
    }
    public void setEdad(int edad) {
        this.edad = edad;
    }
    
}
