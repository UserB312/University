
package ExerciseComposicion;

public class Cliente {
    private String identificacion;
    private String nombre;
    private String apellido;
    
    public Cliente(String identificacion, String nombre, String apellido){
        this.identificacion = identificacion;
        this.nombre = nombre;
        this.apellido = apellido;
    }
    public String getIdentificacion(){
        return identificacion;
    }
    public String getNombre(){
        return nombre;
    }
    public String getApellido(){
        return apellido;
    }
}
