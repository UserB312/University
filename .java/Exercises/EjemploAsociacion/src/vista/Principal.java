
package vista;

import java.time.LocalDate;
import modelo.*;
/**
 * @author Julio
 */
public class Principal {

    public static void main(String[] args) {
        // TODO code application logic here
        Persona personaA = new Persona();
        imprimirPersona(personaA);
        
        Direccion dir = new Direccion("Sabanas", "Valledupar", "Cesar");
        Empresa empresa = new Empresa(3456, "Andes");
        LocalDate fecha = LocalDate.of(2009, 6, 4);
        Persona personaB = new Persona("88", "COndorito", 30, fecha, dir, empresa);
        imprimirPersona(personaB);

        empresa.registrarTrabajador(personaB);
        empresa.registrarTrabajador(personaA);
        empresa.registrarDireccion(dir);
        imprimirEmpresa(empresa);
    }
    
    public static void imprimirPersona(Persona p){
        System.out.println("Datos de la Persona");
        System.out.println(p);
        System.out.println("----------------------------");
    }
    
    public static void imprimirEmpresa(Empresa e){
        
        System.out.println("Datos de la empresa: ");
        System.out.println("Nombre: " + e.getNombre());
        System.out.println("Nit: " + e.getNit());
        System.out.println("Direcciones: ");
        for(Direccion d : e.getDirecciones()){
            System.out.println(d);
        }
        System.out.println("Trabajadores: ");
        for(Persona p: e.getTrabajadores()){
            imprimirPersona(p);
        }
    
    }
}
