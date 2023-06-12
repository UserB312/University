
package Herencia;

public class Entrenador extends SeleccionFutbol {
    private String federacion;
    
    public Entrenador(String federacion, int dni, String nombre, String apellido, int edad){
        super(dni, nombre, apellido, edad);
        this.federacion = federacion;
    }
    
    public String getFederacion(){
        return federacion;
    }
    
    public void dirigirPartido(){
        System.out.println("Puede dirigir un partido");
    }    
}
