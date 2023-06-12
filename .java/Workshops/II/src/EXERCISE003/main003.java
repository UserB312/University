
package EXERCISE003;

import java.util.Scanner;

/**
 * @author Julio
 */
public class main003 {

    public static void main(String[] args) {
        /*3--El precio de venta de los artículos de una tienda se calcula a partir de su valor de costo fijo, el porcentaje de iva y su 
        porcentaje de utilidad. Cree una aplicación en Java, en la que defina e inicialice dichos valores para un artículo, y 
        calcule y muestre su precio de venta */
        double costoFijo, porcentajeIVA, porcentajeUtilidad, precioVenta, precioIVA, cantidadIVA;
        char OP = 'S';
        Scanner input = new Scanner(System.in);
        while (OP == 'S') {
            System.out.print("DIGITE EL COSTO FIJO DEL ARTICULO : ");
            costoFijo = input.nextDouble();
            System.out.print("DIGITE EL PORCENTAJE DE IVA DEL ARTICULO : ");
            porcentajeIVA = input.nextDouble();
            System.out.print("DIGITE EL PORCENTAJE DE UTILIDAD DEL ARTICULO : ");
            porcentajeUtilidad = input.nextDouble();
            precioVenta = ((costoFijo)/(100 - porcentajeUtilidad)) * 100;
            cantidadIVA = (precioVenta * (porcentajeIVA)/100);
            precioIVA = (precioVenta * (porcentajeIVA)/100) + precioVenta;
        
            System.out.printf("EL PRECIO DE VENTA ES : %.2f\n", precioVenta);
            System.out.printf("LA CANTIDAD DE IVA ES : %.2f\n", cantidadIVA);
            System.out.printf("EL PRECIO CON IVA ES : %.2f\n", precioIVA);
            do {
                System.out.print("DESEA CONTINUAR INGRESANDO DATOS S/N : ");
                OP = input.next().charAt(0);
                OP = Character.toUpperCase(OP);
            } while((OP != 'S') && (OP != 'N'));   
        
        }    
    }
}    
