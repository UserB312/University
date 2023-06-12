
package Herencia;

public class Masajista extends SeleccionFutbol{
    private String titulacion;
    
    
    public Masajista(String titulacion, int dni, String nombre, String apellido, int edad){
        super(dni, nombre, apellido, edad);
        this.titulacion=titulacion;
    }
    
    public String getTitulacion(){
        return titulacion;
    }
    
    public void darMasaje(){
        System.out.println("Puede dar masaje");
    }

}
