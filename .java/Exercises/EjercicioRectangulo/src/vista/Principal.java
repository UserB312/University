
package vista;

import modelo.Rectangulo;

/**
 * @author Jairo F
 */
public class Principal {

    public static void main(String[] args) {
        // TODO code application logic here
        
        Rectangulo r = new Rectangulo();
        System.out.println("Area:"+ r.calcularArea());
       imprimirRectangulo(r);
        
        System.out.println("-------------------------------");
        
        Rectangulo a = new Rectangulo();
        a.setAltura(50);
        a.setBase(30);
        imprimirRectangulo(a);
        System.out.println("_______________________________________");
        Rectangulo c = new Rectangulo(15,8);
        imprimirRectangulo(c);
        System.out.println("_______________________________________");
        Rectangulo j = new Rectangulo(15);
        imprimirRectangulo(j);
        System.out.println("_______________________________________");
        System.out.println("DIFERENCIA AREA ENTRE A Y C " + a.areaDiferencia(c.calcularArea()));
        
    }
    
    public static void imprimirRectangulo(Rectangulo r){
        System.out.println("Area:"+ r.calcularArea());
        System.out.println("Perimetro:"+ r.calcularPerimetro());
    }
    
}
