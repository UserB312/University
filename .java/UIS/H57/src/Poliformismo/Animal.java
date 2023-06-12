
package Poliformismo;

public class Animal {
    protected String especie;
    protected String sexo;
    protected String nombre;
    
    public Animal(String especie, String sexo, String nombre){
        this.especie = especie;
        this.sexo = sexo;
        this.nombre = nombre;
    }
    
    public String getEspecie(){
        return especie;
    }
    public String getSexo(){
        return sexo;
    }
    public String getNombre(){
        return nombre;
    }
    public void setNombre(String nombre){
        this.nombre=nombre;
    }
    
    public void hacerSonido(){
        System.out.println("SONIDO");
    }
}
