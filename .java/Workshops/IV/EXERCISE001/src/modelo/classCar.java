
package modelo;
/**
 * @author Julio
 */
public class classCar {
        /*Crear una clase Coche, a través de la cual se pueda conocer el color del coche, la marca, el modelo, el número de 
        caballos, el número de puertas y la matricula. Crear el constructor del coche, métodos getter y setter para sus atributos,
        un método toString que retorne una cadena de caracteres con los valores de sus atributos. Crear una clase 
        PruebaCoche que instancie varios coches, cambie sus estados (valores de sus atributos) y muestre sus datos por 
        pantalla.
        */
        //DECLARACION DE VARIABLES
        private String colorCar;
        private String marcaCar;
        private String modeloCar;
        private int NoCaballos;
        private int numPuertas;
        private String matriculaCar;
        
        //METODO CONSTRUCTOR
    public classCar(String colorCar, String marcaCar, String modeloCar, int NoCaballos, int numPuertas, String matriculaCar) {        
        this.colorCar = colorCar;
        this.marcaCar = marcaCar;
        this.modeloCar = modeloCar;
        this.NoCaballos = NoCaballos;
        this.numPuertas = numPuertas;
        this.matriculaCar = matriculaCar;
    }
    
    //GETTERS AND SETTERS
    public String getColorCar() {
        return this.colorCar;
    }
    public void setColorCar(String colorCar) {
        this.colorCar = colorCar;
    }
    public String getMarcaCar() {
        return this.marcaCar;
    }
    public void setMarcaCar(String marcaCar) {
        this.marcaCar = marcaCar;
    }
    public String getModeloCar() {
        return this.modeloCar;
    }
    public void setModeloCar(String modeloCar) {
        this.modeloCar = modeloCar;
    }
    public float getNoCaballos() {
        return this.NoCaballos;
    }
    public void setNoCaballos(int NoCaballos) {
        this.NoCaballos = NoCaballos;
    }
    public int getNumPuertas() {
        return this.numPuertas;
    }
    public void setNumPuertas(int numPuertas) {
        this.numPuertas = numPuertas;
    }
    public String getMatriculaCar() {
        return this.matriculaCar;
    }
    public void setMatriculaCar(String matriculaCar) {
        this.matriculaCar = matriculaCar;
    }
    
    //METODOS
    @Override
    public String toString(){
        return "Coche [ COLOR = " + colorCar + ", MARCA = " + marcaCar + ", MODELO = " + modeloCar + ", NUMCABALLOS = " + NoCaballos + ", NUMERO PUERTAS = " + numPuertas + ", MATRICULA = " + matriculaCar + "]";
    }      
}
