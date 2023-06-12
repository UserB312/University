
package ExerciseComposicion;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Principal {

    public static void main(String[] args) {
        ArrayList<Prestamo> ListaPrestamos=new ArrayList<>();
        Scanner entrada = new Scanner(System.in);
        SimpleDateFormat formato=new SimpleDateFormat("dd/MM/yyyy");
        boolean agregarPrestamo=true;
        while (agregarPrestamo){
            try {
                System.out.println("--------------INFORMACION DEL PRESTAMO--------------");
                System.out.println("--------------INFORMACION DEL CLIENTE----------------");
                System.out.println("Digite el numero de identificacion:");
                String identificacion=entrada.next();
                System.out.println("Digite el nombre:");
                String nombre=entrada.next();
                System.out.println("Digite el apellido:");
                String apellido=entrada.next();
            
                System.out.println("---------------INFORMACION VEHICULO-------------");
                System.out.println("Digite la marca");
                String marca=entrada.next();
                System.out.println("Digite el modelo");
                int modelo=entrada.nextInt();
                System.out.println("Digite la matricula");
                String matricula=entrada.next();
                System.out.println("Digite la tarifa");
                int tarifa=entrada.nextInt();
            
                System.out.println("---------------INFORMACION PRESTAMO---------------");
                System.out.println("Indique desde que fecha requiere el prestamo (dd/mm/yyyy)");
                Date fecha=formato.parse(entrada.next());
                System.out.println("Ingrese los dias que requiere el vehiculo");
                int dias=entrada.nextInt();
            
                Cliente objetoCliente=new Cliente(identificacion, nombre, apellido);
                Vehiculo objetoVehiculo=new Vehiculo(marca, modelo, matricula, tarifa);
                Prestamo objetoPrestamo=new Prestamo(objetoCliente, objetoVehiculo, dias, fecha);
            
                ListaPrestamos.add(objetoPrestamo);
                System.out.println("Marque x si desea agregar un nuevo prestamo");
                String respuesta=entrada.next();
                if (!respuesta.equals("x")){
                    agregarPrestamo=false;
                }   
            } catch (ParseException ex) {
                Logger.getLogger(Principal.class.getName()).log(Level.SEVERE, null, ex);
                    }
            }     
        //VARIABLE ACUMULADORA DE EL VALOR DEL PRESTAMO
        int TotalPrestamo=0;
        //RECORRER CADA UNO DE LOS ELEMENTOS DE LA LISTA
        for (int i = 0; i < ListaPrestamos.size(); i++) {
            //IMPRIMIR LA INFORMACION DEL PRESTAMO LLAMANDO EL METODO QUE CONTIENE DICHA IMPRESION
            ListaPrestamos.get(i).getInformacionPrestamo();
            //ACUMULAR EL VALOR DEL PRESTAMO SEGUN EL METODO QUE TIENE EL CALCULO
            TotalPrestamo = TotalPrestamo + ListaPrestamos.get(i).getValorPrestamo();
        }
        //IMPRIME EL VALOR ACUMULADO DEL PRESTAMO 
        System.out.println("El valor total de los prestamos es " + TotalPrestamo);
        }
}   

