
package model;
/**
 * @author Julio
 */
public class Masajista extends Persona{
    private String Titulacion;
    private int aniosExperiencia;
    
    //CONSTRUCTOR POR DEFAULT
    public Masajista(){
    }
    //CONSTRUCTOR SOBRECARGADO
    public Masajista(int id,String Nombre, String Apellidos,int Edad, String Titulacion, int aniosExperiencia){
        super(id, Nombre, Apellidos, Edad);
        this.Titulacion = Titulacion;
        this.aniosExperiencia = aniosExperiencia;
    }

    //GETTERS AND SETTERS
    public String getTitulacion() {
        return Titulacion;
    }
    public void setTitulacion(String Titulacion) {
        this.Titulacion = Titulacion;
    }
    public int getAniosExperiencia() {
        return aniosExperiencia;
    }
    public void setAniosExperiencia(int aniosExperiencia) {
        this.aniosExperiencia = aniosExperiencia;
    }
   
    @Override
    public void Concentrarse(){
        System.out.println("Debe concentrarse con tiempo para los masajes");
    }
    @Override
    public void Viajar(){
        System.out.println("Puede viajar");
    }
    public void darMasaje(){
        System.out.println("Puede dar masaje");
    }
    
}
