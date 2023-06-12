
package vista;

import java.util.Scanner;
import modelo.Pago;

/*Crear una clase que permita calcular el pago de un maestro de obra por empañetar una vivienda, 
si se conoce que la tarifa de cualquier maestro de obra es de $ 2oo por Metro cuadrado de empañete.  
Cree tres maestros de obra y calcule su pago. Si se modifica la tarifa, cual seria el pago?.
 @author Julio
 */
public class PagoMaestro {

    public static void main(String[] args) {
               
        Scanner sc = new Scanner(System.in);
        Pago a = new Pago();
        Pago b = new Pago();
        Pago c = new Pago();
        
        System.out.println("Calcular Pago de Maestro de obra");
        
        System.out.println("Ingrese la cantidad de metros empañetados por el primer maestro: ");
        a.setMetroTrabajado(sc.nextDouble());
        System.out.println("Ingrese la cantidad de metros empañetados por el segundo maestro: ");
        b.setMetroTrabajado(sc.nextDouble());
        System.out.println("Ingrese la cantidad de metros empañetados por el Tercer maestro: ");
        c.setMetroTrabajado(sc.nextDouble());
        
        System.out.println("El Pago del primer maestro es : "+a.calcularPago());
        System.out.println("El Pago del segundo maestro es : "+b.calcularPago());
        System.out.println("El Pago del tercer maestro es : "+c.calcularPago());
        
        char respuesta; 
        System.out.println("¿Desea Cambiar la tarifa de pago?[S/N]");
        respuesta= sc.next().charAt(0);
        respuesta=Character.toUpperCase(respuesta);
        
        
        if (respuesta == 'S'){
            System.out.println("Ingrese la Tarifa deseada: ");
            double tarifaModificada = sc.nextDouble();
            a.setTarifa(tarifaModificada);
            b.setTarifa(tarifaModificada);
            c.setTarifa(tarifaModificada);
            System.out.println("El Pago del primer maestro es : "+a.calcularPago());
            System.out.println("El Pago del segundo maestro es : "+b.calcularPago());
            System.out.println("El Pago del tercer maestro es : "+c.calcularPago());
            
        }
    }
}
