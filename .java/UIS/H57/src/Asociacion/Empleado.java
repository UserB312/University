
package Asociacion;

public class Empleado {
    private String name;
    private String apellido;
    
    public Empleado(String name, String apellido){
        this.name=name;
        this.apellido=apellido;
    }
    
    public String getname(){
        return name;
    }
    public String getapellido(){
        return apellido;
    }
}
