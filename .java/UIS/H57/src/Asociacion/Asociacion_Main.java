
package Asociacion;

public class Asociacion_Main {

    public static void main(String[] args) {
        Empleado objeto=new Empleado("Julio","Rios");
        Empleado objeto2=new Empleado("Jaime","Salazar");
        
        Banco objeto3=new Banco("Bancolombia");
        
        System.out.println("El empleado de nombre "+objeto.getname()+" con apellido "
        +objeto.getapellido()+" trabaja en el banco "+objeto3.getname());
        
        System.out.println(objeto.getname()+objeto.getapellido());
        System.out.println(objeto2.getname()+objeto2.getapellido());
    }
    
}
