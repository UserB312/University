
package modelo;

public class Docente implements Trabajador {

    private int numHora;

    public Docente() {
    }
  
    public Docente(int numHora) {
        this.numHora = numHora;
    }

    public double getNumHora() {
        return numHora;
    }

    public void setNumHora(int numHora) {
        this.numHora = numHora;
    }
    
    @Override
    public double Sueldo(){
        return numHora*120; 
    }
    
    @Override
    public double Bonificacion(){
        return Sueldo()* 70/100;
    }
}
