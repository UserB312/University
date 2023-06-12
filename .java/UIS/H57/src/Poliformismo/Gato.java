
package Poliformismo;

public class Gato extends Animal{
    
    public Gato(String especie, String sexo, String nombre) {
        super(especie, sexo, nombre);
    }
    
    @Override
    public void hacerSonido(){
        System.out.println("MIAU MIAU");
    }
    
    
}
