
package AgregacionV2;

import java.util.ArrayList;

public class AgregacionV2_Main {

    public static void main(String[] args) {
        //INICIALIZAMOS EL OBJETO QUE CONTENDRA LA LISTA DE LOS EMPLEADOS
        ArrayList<Empleado>listaEmpleados=new ArrayList<Empleado>();
        //CREAMOS OBJETOS QUE CONTIENEN INFORMACION DEL EMPLEADO
        Empleado objeto1=new Empleado("Julio","Rios");
        Empleado objeto2=new Empleado("Andres","Meneses");
        Empleado objeto3=new Empleado("Luis","Gamboa");
        //AÑADIMOS LOS OBJETOS DE LOS EMPLEADOS A LA LISTA INICIALIZADA EN LA PARTE SUPERIOR
        listaEmpleados.add(objeto1);
        listaEmpleados.add(objeto2);
        
        Banco objetoBank=new Banco("Bancolombia",listaEmpleados);
        System.out.println("Cantidad de empleados: "+objetoBank.getEmpleados().size());
        objetoBank.imprimirEmpleados();
    }
    
}
