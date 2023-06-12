
package EXERCISE005;

import java.util.Scanner;

/**
 * @author Julio
 */
public class main005 {

    public static void main(String[] args) {
        /* En la Tabla 1 se muestran el número de calorías que contienen las principales frutas. ¿Si Juan cena una ensalada de 
        frutas que contiene 2 manzanas, 3 peras, 1 naranja y 1 melón, cuantas calorías ha consumido? Cree una aplicación en 
        java que le permita realizar el cálculo, para ello defina e inicialice las variables que considere.*/
        
        Scanner entrada = new Scanner(System.in);
        
        //DECLARACION DE VARIABLES
        float manzana = 52;        //CALORIAS - KCAL 
        float pina = 55;                 //CALORIAS - KCAL
        float Pera = 55;                //CALORIAS - KCAL
        float Naranja = 45;          //CALORIAS - KCAL
        float Fresa = 32;            //CALORIAS - KCAL
        float Melon = 54;              //CALORIAS - KCAL
        
        float kcalTotal = ((manzana * 2) + (Pera * 3) + Naranja + Melon);
        
        //IMPRIMO RESULTADO
        System.out.println("JUAN HA CONSUMIDO : " + kcalTotal + " CALORIAS");
        System.out.println("\n______________SEGUNDA COMBINACION________________\n");
        System.out.print("CUANTAS MANZANAS CONSUMIO : ");
        float cantManzana = entrada.nextFloat();
        System.out.print("CUANTAS PINAS CONSUMIO : ");
        float cantPiña = entrada.nextFloat();
        System.out.print("CUANTAS PERAS CONSUMIO : ");
        float cantPera = entrada.nextFloat();
        System.out.print("CUANTAS NARANJAS CONSUMIO : ");
        float cantNaranja = entrada.nextFloat();
        System.out.print("CUANTAS FRESAS CONSUMIO : ");
        float cantFresa = entrada.nextFloat();
        System.out.print("CUANTAS MELONES CONSUMIO : ");
        float cantMelon = entrada.nextFloat();
        float total = ((manzana * cantManzana) + (pina * cantPiña ) + (Pera * cantPera) + (Naranja * cantNaranja) + (Fresa * cantFresa) + (Melon * cantMelon));
        System.out.println("EL USUARIO HA CONSUMIDO : " + total + " CALORIAS");
    }
    
}
