
package EXERCISE001;

import java.util.Scanner;
/**
 * @author Julio
 */
public class main {
    /* Un vendedor minorista en línea requiere un informe de las ventas del día. Para ello cuenta con tres arreglos de n 
     elementos cada uno: A, B y C. El primero almacena el código de los productos vendidos en el día, El segundo almacena 
     el valor de venta de cada producto, y el tercero la cantidad de unidades vendidas de cada producto.
     Requiere un aplicativo que le calcule rápidamente los siguientes datos: 
    • Total productos vendidos en el día.
    • Total ingresos por ventas del día.
    • El producto más vendido.
    • El producto más costoso vendido*/
    public static void main(String[] args) {
        
        Scanner entrada = new Scanner(System.in);
        System.out.print("DIGITE LA CANTIDAD DE PRODUCTOS : ");
        int cantProduct = entrada.nextInt();
        
        /*DECLARACION DE VARIABLES Y DEFINICION DE TAMAÑO DE VECTOR*/
        int totalProdutDay = 0;
        double ingresoTotalDay = 0;
        int [ ] arrayA = new int [cantProduct ];                 /*VECTOR A = CODIGO DE PRODUCTOS VENDIDOS EN EL DIA */
        double [ ] arrayB = new double [cantProduct ];        /*VECTOR B = VALOR DE VENTA DE CADA PRODUCTO */
        int [ ] arrayC = new int [cantProduct ];                /*VECTOR C = CANTIDAD DE UNIDADES VENDIDAS DE CADA PRODUCTO */
        
        
        /*LLENAMOS LOS VECTORES*/
        for (int i = 0; i < cantProduct; i++) {
            System.out.println("_____________PRODUCTO # " + (i + 1)+ "____________\n");
            System.out.print("DIGITE EL CODIGO DEL PRODUCTO : ");
            arrayA [ i ] = entrada.nextInt();
            System.out.print("DIGITE EL VALOR DE VENTA DEL PRODUCTO : ");
            arrayB [ i ] = entrada.nextDouble();
            System.out.print("DIGITE LA CANTIDAD DE UNIDADES VENDIDAS DE CADA PRODUCTO :");
            arrayC [ i ] = entrada.nextInt();
        }
        /* TOTAL PRODUCTOS  Y TOTAL INGRESOS EN EL DIA*/
        for (int i = 0; i < cantProduct; i++) {
            totalProdutDay =+ arrayC[ i ];
            ingresoTotalDay =+ (arrayB[ i ] * arrayC[ i ]);
        }
        /*PRODUCTO MAS VENDIDO*/
        int productMVendido = arrayA[ 0 ];
        int cantMVendida = arrayC[ 0 ];
        if (cantProduct < 0 ){
            System.out.println("ERROR....NO EXISTEN PRODUCTOS");
        }else{
            for (int i = 0; i < cantProduct; i++) {
                if ( arrayC[ i ] > productMVendido ){
                    productMVendido = arrayA[ i ];
                    cantMVendida = arrayC[ i ];
                }
            }  
        }
        /*PRODUCTO MAS COSTOSO*/
        int productoMCostoso = arrayA[0];
        double valorMCostoso = arrayB[0];
        if (cantProduct < 0 ){
            System.out.println("ERROR....NO EXISTEN PRODUCTOS");
        }else{
        for (int i = 0; i < totalProdutDay; i++) {
            if (arrayB[ i ] > valorMCostoso) {
                productoMCostoso = arrayA[ i ];
                valorMCostoso = arrayB[ i ];
            }
        }
        }
        System.out.println("____________INFORME DE VENTAS ____________");
        System.out.println("EL TOTAL DE PRODUCTOS VENDIDOS EN EL DIA ES DE : " + totalProdutDay);
        System.out.println("EL TOTAL DE INGRESOS PRODUCIDOS POR DIA ES DE : " + ingresoTotalDay);
        System.out.println("EL PRODUCTO MAS VENDIDO ES EL PRODUCTO CON CODIGO : " + productMVendido);
        System.out.println("EL PRODUCTO MAS COSTOSO ES : " + productoMCostoso);
    }
}
