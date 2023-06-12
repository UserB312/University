
package vista;

import modelo.*;

public class Principal {

    public static void main(String[] args) {
        
        EmpleadoBasico eb = new EmpleadoBasico(100, 5000);
        System.out.println(eb);
        
        EmpleadoComision ec = new EmpleadoComision(100, 5000, 7000);
        System.out.println(ec);
    }
    
}
