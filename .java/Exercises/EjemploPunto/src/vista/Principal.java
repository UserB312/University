/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package vista;

import modelo.Punto;

/**
 *
 * @author Jairo F
 */
public class Principal {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Punto p = new Punto();
        System.out.println(p);
        
        
        Punto p2 = new Punto(10,20);
        System.out.println(p2);
        
        
        System.out.println("Distancia: " + p2.distancia(new Punto(10,20)));
        System.out.println("Distancia a (0,0):" + p2.distancia());
        System.out.println("Suma : " + p2.suma(p));
    }
    
}
