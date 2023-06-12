
package Ejercicios1406;

import java.util.Scanner;

public class E004 {

    public static void main(String[] args) {
       /*
        Numero multipo de 10
        */
       Scanner nombreObjeto=new Scanner(System.in);
        System.out.println("Ingrese un numero:");
        int num=nombreObjeto.nextInt();        
        if(num%10==0){
            System.out.println("Es Multiplo de 10");
        }else{
            System.out.println("No es multiplo de 10");
        }
    }
    
}
