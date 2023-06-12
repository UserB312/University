package sesionextraordinaria;

import java.util.Scanner;
public class E007 {  
    public static void main(String[] args) {  
        //Calculadora con +-*/
        boolean bandera=true;
        Scanner entrada=new Scanner(System.in);
        while(bandera==true){
            System.out.println("Menu opciones \n + \n - \n * \n / \n 0 para salir");
            String menu=entrada.next();
            if(menu.equals("0")){
                System.out.println("Adios");
                bandera=false;
            }else{
                System.out.println("Ingrese el numero 1:");
                int num1=entrada.nextInt();
                System.out.println("Ingrese el numero 2");
                int num2=entrada.nextInt();
                switch(menu){
                    case "+":                      
                        System.out.println("La suma es:"+suma(num1, num2));
                        break;
                    case "-":
                        System.out.println("La Resta es:"+resta(num1, num2));
                        break;
                    case "*":
                        System.out.println("La multiplicación es:"+multiplicacion(num1, num2));
                        break;
                    case "/":
                        System.out.println("La división es:"+division(num1, num2));
                        break;
                    default:
                        System.out.println("No digito una opción valida");
                        break;
                }
            }
        }
    }     
    
    static int suma(int num1,int num2){
        return (num1+num2);
    }
    
    static int resta(int num1,int num2){
        return (num1-num2);
    }
    
    static int multiplicacion(int num1,int num2){
        return (num1*num2);
    }
    
    static double division(int num1,int num2){
        return (num1/(double)num2);
    }
    
}
