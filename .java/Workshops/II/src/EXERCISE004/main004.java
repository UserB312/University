
package EXERCISE004;

import java.util.Scanner;

/**
 * @author Julio
 */
public class main004 {

    public static void main(String[] args) {
        /*Se desea construir un programa en java que permita calcular el costo total de un viaje que tiene una duración en días. 
        Para ello, se requiere los siguientes datos: Número de días del viaje, Total de kilómetros conducidos por día, costo por 
        litro de gasolina, promedio de kilometro por litro de gasolina, pago por estacionamiento por día, pago de peajes por día. 
        Imprima en consola el resultado. */
        Scanner entrada = new Scanner(System.in);
        //SOLICITAR DATOS AL USUARIO
        System.out.print("DIGITE EL NUMERO DE DIAS DEL VIAJE : ");
        int NumDay = entrada.nextInt();
        System.out.print("DIGITE EL TOTAL DE KM CONDUCIDOS POR DIAS : ");
        double TotalKm = entrada.nextDouble();
        System.out.print("DIGITE EL COSTO POR LITRO DE GASOLINA : ");
        double CostoGas = entrada.nextDouble();
        System.out.print("DIGITE EL PROMEDIO DE KM POR LITRO DE GASOLINA : ");
        double PromKM = entrada.nextDouble();
        System.out.print("DIGITE EL PAGO POR ESTACIONAMIENTO POR DIA : ");
        double PagoEst = entrada.nextDouble();
        System.out.print("DIGITE EL PAGO POR PEAJE POR DIA : ");
        double peaje = entrada.nextDouble();

        System.out.println("***********COSTO TOTAL DEL VIAJE*************");
        double costoTGas = ((TotalKm * NumDay)/PromKM) * CostoGas;
        double costoTEstacionamiento = PagoEst * NumDay;
        double costoTPeaje = peaje * NumDay;
        
        double CostoTotal = costoTGas + costoTEstacionamiento + costoTPeaje;
        //IMPRIMO RESULTADO
        System.out.printf("EL COSTO TOTAL DEL VIAJE ES : $" + CostoTotal);
    }
    
}
