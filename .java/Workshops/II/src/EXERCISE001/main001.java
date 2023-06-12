
package EXERCISE001;
/**
 * @author Julio
 */
public class main001 {

    public static void main(String[] args) {
         /*1--Escriba un programa en java que defina una variable “x” de tipo entero, con un valor inicial (el que usted decida), y
        muestre el resultado de las siguientes instrucciones:*/
        int x = 12;
        System.out.printf("x=%d\n", x);
        System.out.printf("El valor de %d + %d es %d\n", x, x, (x + x));
        System.out.printf("El valor de %d / 2 = %d.2\n", x, x/2);
        System.out.printf("El valor de %d mod 3 = %d\n", x, x%3);
    }
    
}
