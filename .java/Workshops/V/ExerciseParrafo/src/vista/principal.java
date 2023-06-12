
package vista;

import modelo.Parrafo;
/**
 * @author Julio
 */
public class principal{
    public static void main(String[] args){
        Parrafo obj = new Parrafo();
        System.out.println("PERMITE COMPARAR UNA CADENA CON UNA CADENA RECIBIDA POR EL PARAMETRO, SI ES TRUE, SON IGUALES, DE LO CONTRARIO ARROJARA FALSA : " + obj.compararTexto("hola"));
        
        String cdn1 = "Las cadenas son inmutables";
        String cdn2 = "Los enteros son mutables";
        String cdn3 = "Las cadenas SON INMUTABLES";
        String msj = "Valor devuelto = ";

        System.out.println(msj + cdn1.equals(cdn3));
        System.out.println(msj + cdn1.equalsIgnoreCase(cdn3));
        System.out.println(msj + cdn2.equalsIgnoreCase("LOS enteros SON mutables"));
}
}  
