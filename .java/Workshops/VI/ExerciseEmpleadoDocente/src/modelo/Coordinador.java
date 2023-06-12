
package modelo;

public class Coordinador extends Empleado {

    public Coordinador() {
        super("Coordinador");
    }

    @Override
    public double CalcularSueldo() {
        return 5000;
    }
}
