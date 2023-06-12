
package Exercise03;

public class EmpleadoTemporal extends Empleado {

    public EmpleadoTemporal(String nombre, String apellido, float baseSalarial, int anios) {
        super(nombre, apellido, baseSalarial, anios);
    }
    
    
    @Override
    public double calcularSalario() {
        return (2.5 * getBaseSalarial()) - (getBaseSalarial() * 0.2886);
    }
    

}
