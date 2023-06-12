
package modelo;

public class Asistente extends Empleado{

    public Asistente() {
        super("Asistente");
    }
    
    @Override
    public double CalcularSueldo() {
        return 4000;
    }  
}
