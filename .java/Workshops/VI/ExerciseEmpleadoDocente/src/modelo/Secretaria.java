
package modelo;

public class Secretaria extends Empleado {

    public Secretaria() {
        super("Asistente");
    }

    @Override
    public double CalcularSueldo() {
        return 5000;
    }

}
