/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package vista;
import modelo.*;
/**
 *
 * @author Jorman
 */
public class Principal {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Punto punto1 = new Punto(3,3);
        Punto punto2 = new Punto(3, 3);
        Linea linea = new Linea(punto1, punto2);
         
        
        System.out.println("Puntos son iguales? : "+punto1.compararPuntos(punto2));
        System.out.println("Distancia : "+punto1.calcularDistancia(punto2));
        System.out.println(linea.conexion());
        
    }    
}
