
import java.util.Scanner;

public class E006 {
    public static void main(String[] args) {
        Scanner entrada=new Scanner(System.in);
        System.out.println("Menu \n 1 Factorial \n 2 Primo \n 3 Salir");
        System.out.println("Digite una opcion:");
        int menu=entrada.nextInt();
        switch(menu){
            case 1:
                System.out.println("Digite el numero del cual desea el factorial");
                int num=entrada.nextInt();
                System.out.println("El numero factorial es:"+factorial(num));
                break;
            case 2:
                System.out.println("Digite el numero para validar si es primo");
                int numPrimo=entrada.nextInt();
                System.out.println(primo(numPrimo));
                break;
            case 3:
                System.out.println("Adios");
                break;            
        }
    }   
    static int factorial(int num){
        int resultado=1;
        for (int i = 2; i <=num; i++) {
            resultado=resultado*i;
        }
        return resultado;
    }
    static boolean primo(int num){
        int acumulador=0;
        for (int i = 1; i <=num; i++) {
            if(num%i==0){
                acumulador++;
            }
        }
        if(acumulador==2){
            return true;
        }else{
            return false;
        }               
    }
}
