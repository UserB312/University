
package AgregacionV2;

import java.util.ArrayList;

public class Banco {
    private String name;
    private ArrayList<Empleado> empleados;
    
    public Banco(String name, ArrayList<Empleado> empleados){
        this.name=name;
        this.empleados=empleados;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public ArrayList<Empleado> getEmpleados() {
        return empleados;
    }
    /**
     * ME PERMITE AGREGAR UN EMPLEADO A LA LISTA DEL BANCO
     * @param empleadoNuevo 
     */
    public void setEmpleados(Empleado empleadoNuevo) {
        empleados.add(empleadoNuevo);
    }
    /**
     * RECORRE CADA ELEMENTO DE LA LISTA EMPLEADOS Y EXTRAE SU NOMBRE Y APELLIDO
     */
    public void imprimirEmpleados(){
        System.out.println("LISTA EMPLEADOS.");
        //RECORREMOS LA LISTA PARA IMPRIMIR TODOS LOS ELEMENTOS
        for (int i = 0; i < empleados.size(); i++) {
            System.out.println("Nombre: "+empleados.get(i).getName()
            +" Apellido: "+empleados.get(i).getApellido());
        }
    }
    
    

}
