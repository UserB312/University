
package vista;

import java.util.Scanner;
import modelo.Estudiante;

/**
 * @author Julio
 */
public class Principal {
    public static void main(String[] args) {
        Estudiante obj = new Estudiante();
        Scanner entrada = new Scanner(System.in);
        
        System.out.println("___CALCULAR NOTAS UPC___");
        System.out.print("DIGITE SU NOTA 1 = ");
        obj.setN1(entrada.nextDouble());
        System.out.print("DIGITE SU NOTA 2 = ");
        obj.setN2(entrada.nextDouble());
        System.out.print("DIGITE SU NOTA 3 = ");
        obj.setN3(entrada.nextDouble());
        obj.calcularNota();
        obj.info();
    }
}
