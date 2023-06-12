
package model;
/**
 * @author Julio
 */
public class Futbolista extends Persona {
    private int dorsal;
    private String demarcacion;
    
    //CONSTRUCTOR POR DEFAULT
    public Futbolista(){
    }
    //CONSTRUCTOR SOBRECARGADO
    public Futbolista(int id, String Nombre, String Apellidos, int Edad, int dorsal, String demarcacion){
        super(id,Nombre,Apellidos,Edad);
        this.dorsal = dorsal;
        this.demarcacion = demarcacion;
    }

    //GETTERS AND SETTERS
    public int getDorsal() {
        return dorsal;
    }
    public void setDorsal(int dorsal) {
        this.dorsal = dorsal;
    }
    public String getDemarcacion() {
        return demarcacion;
    }
    public void setDemarcacion(String demarcacion) {
        this.demarcacion = demarcacion;
    }
    
    @Override
    public void Concentrarse(){
        
    }
    @Override
    public void Viajar(){
        System.out.println("Puede viajar para jugar");
    }
    public void jugarPartido(){
        System.out.println("Puede jugar partido de futbol");
    }
    public void entrenar(){
        System.out.println("Puede entrenar para el proximo partido");
    }
    
}
