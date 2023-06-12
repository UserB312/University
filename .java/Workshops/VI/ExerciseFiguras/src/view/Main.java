
package view;

import model.Pizarra;
import model.Triangulo;
import model.Cuadrado;
import model.Circulo;

public class Main {

    public static void main(String[] args) {
        // TODO code application logic here

        Pizarra pizarra = new Pizarra();

        Circulo c = new Circulo("rojo");
        Triangulo t = new Triangulo("amarillo");
        Cuadrado k = new Cuadrado("azul");
        
        pizarra.agregarFigura(k);
        pizarra.agregarFigura(c);
        pizarra.agregarFigura(t);

        pizarra.dibujarFiguras();
        
        System.out.println("---------------------------------------");
        
        c.cambiaColor("marron");
        t.cambiaColor("rosado");
        k.cambiaColor("naranja");

        pizarra.borrarFigura(k);
        pizarra.borrarFigura(c);
        pizarra.borrarFigura(t); 
    } 
}
