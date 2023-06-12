
package modelo;
/**
 * @author Julio
 */
public class Estudiante {
    private double N1,N2,N3;

    //CONSTRUCTOR
    public Estudiante(){
        this.N1 = 0;
        this.N2 = 0;
        this.N3 = 0;
    }

    //GETTERS AND SETTERS
    public double getN1(){
        return this.N1;
    }
    public double getN2(){
        return this.N2;
    }
    public double getN3(){
        return this.N3;
    }
    public void setN1(double N1){
        this.N1=N1;
    }
    public void setN2(double N2){
        this.N2=N2;
    }
    public void setN3(double N3){
        this.N3=N3;
    }
    
    //METODOS
    public double calcularNota(){
        return (this.N1 * 0.3) + (this.N2 * 0.3) + (this.N3 * 0.4) ;
    }
    public void info(){
        System.out.println("NOTA FINAL = " + calcularNota() );
    }
}
