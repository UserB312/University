
package modelo;

import java.util.Scanner;

public class Entrada {
    private static Scanner entrada = new Scanner(System.in);
    
    
    public static String leerString(String label){
        
        System.out.print(label);
        return entrada.next();
        
    }
    
    public static double leerDouble(String label){
        
        System.out.print(label);
        return entrada.nextDouble();
        
    }
    
    public static int leerInt(String label){
        
        System.out.print(label);
        return entrada.nextInt();
        
    }
    
    public static char leerchar(String label){
        
        System.out.print(label);
        return entrada.next().charAt(0);
        
    }
    
}
