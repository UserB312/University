
public class Demo {

    public static void main(String[] args) {
        Nomina n = new Nomina();
        n.addEmpleado(new EmpleadoPlanta("Daniel", "Perez", 1000000,5));
        n.addEmpleado(new EmpleadoTemporal("Camila", "Lopez", 1000000,10));
        n.imprimirNomina();

    }
}