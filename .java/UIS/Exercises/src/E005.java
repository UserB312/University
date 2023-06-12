
package Ejercicios1406;

import java.util.Scanner;

public class E005 {
    public static void main(String[] args) {
       Scanner in=new Scanner(System.in);
       //Version 1
       char carac= in.next().charAt(0);       
       if(Character.isUpperCase(carac)){
           System.out.println("Si es mayuscula");
       }else{
           System.out.println("Es minuscula");
       }
       //Version 2
       String caracter2=in.next();
       String caracterMayuscula=caracter2.toUpperCase();
       if(caracterMayuscula.equals(caracter2)){
           System.out.println("Si es mayuscula");
       }else{
           System.out.println("Es minuscula");
       }
       
    }
    
}
