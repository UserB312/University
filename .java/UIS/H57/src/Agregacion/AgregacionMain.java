
package Agregacion;

public class AgregacionMain {

    public static void main(String[] args) {
        Empleado objeto1=new Empleado("Julio","Rios");
        Empleado objeto2=new Empleado("Andres","Mendoza");
        Empleado objeto3=new Empleado("Camilo","Gonzales");
        
        Empleado listaEmpleados[]=new Empleado[3];
        listaEmpleados[0]=objeto1;
        listaEmpleados[1]=objeto2;
        
        
        
        Banco objetoBanco=new Banco("Bancolombia",listaEmpleados);
        objetoBanco.imprimirEmpleados(2);
        objetoBanco.AgregarEmpleado(objeto3, 2);
        //INICIALMENTE IMPRIME DOS EMPLEADOS, LUEGO SE AGREGA OTRO Y SE IMPRIME
        System.out.println("________________________________");
        objetoBanco.imprimirEmpleados(3);
    }
    
}
