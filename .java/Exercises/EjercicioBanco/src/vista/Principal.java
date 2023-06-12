
package vista;

import modelo.*;

/**
 * @author Julio
 */
public class Principal {

    public static void main(String[] args) {
        
        Persona persona = new Persona("Jairo", "Seoanes");
        Persona persona2 = new Persona("Papa", "Noel");
        
        Banco banco = new Banco("Banco Popular", "Valledupar", "Colombia");
        
        banco.registrarCuenta(1, 0, "ahorro", persona);
        banco.registrarCuenta(1, 0, "corriente", persona2);
        
        imprimirBanco(banco);
        
        consultarCuenta(banco, 2);
        

    }
    
    public static void consultarCuenta(Banco banco, int numero){
        
        Cuenta buscada = banco.consultarCuenta(numero);
        if(buscada != null){
            System.out.println("Cuenta consultada: " + buscada);
        }
        else{
            System.out.println("La cuenta no existe, o no hay cuentas registradas");
        }
    
    }
    
    public static void imprimirBanco(Banco banco){
        System.out.println("* * INFORMACION DEL BANCO " + banco.getNombre().toUpperCase() + " * *"); 
        System.out.println("---------------------------------------------");
        System.out.println("Sede: " + banco.getSede());
        System.out.println("Pais: " + banco.getPais());
        System.out.println("Cuentas activas: ");
        System.out.println("---------------------------------");
        for(Cuenta c: banco.getCuentas()){
            System.out.println(c);
        }
        System.out.println("---------------------------------");
        System.out.println("Total cuentas activas: " + banco.getCuentas().size());
    }
    
}
