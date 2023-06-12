
import java.util.Scanner;

public class E001 {

    public static void main(String[] args) {
        /*-Declare dos variables entera y realice operaciones 
        de suma, resta, multiplicación y división 
        */
        Scanner lectura=new Scanner(System.in);
        System.out.println("Ingrese el numero 1:");
        int num1=lectura.nextInt();
        System.out.println("Ingrese el numero 2:");
        int num2=lectura.nextInt();
        int suma=num1+num2;
        int resta=num1-num2;
        int multiplicacion=num1*num2;
        double division=(double)num1/(double)num2;
        System.out.println("La suma es:"+suma);
        System.out.println("La Resta es:"+resta);
        System.out.println("La Multiplicacion es:"+multiplicacion);
        System.out.println("La division es:"+division);
    }
    
}
