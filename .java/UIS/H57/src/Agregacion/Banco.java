
package Agregacion;

public class Banco {
    private String name;
    private Empleado empleados[];//<-AGREGACION
    
    
    public Banco(String name, Empleado empleados[]){
        this.name=name;
        this.empleados=empleados;
    }
    
    public String getname(){
        return name;
    }
    
    public void imprimirEmpleados(int cantidad){
        System.out.println("Empleados del banco "+name);
        for (int i = 0; i < cantidad; i++) {
            System.out.println(empleados[i].getname()+" "+empleados[i].getapellido());
            
        }
    }
    
    public void AgregarEmpleado(Empleado nuevoEmpleado, int posicion){
        empleados[posicion]=nuevoEmpleado;
    }
}
