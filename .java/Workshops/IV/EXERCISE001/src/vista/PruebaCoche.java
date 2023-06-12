
package vista;

import modelo.classCar;
/**
 * @author Julio
 */
public class PruebaCoche {

    public static void main(String[] args) {
        classCar car1 = new classCar ("Azul","NISSAN","SKYLINE R34", 80, 4,"59485");
        classCar car2 = new classCar("Rojo", "Ford", "Focus", 120, 3, "5678DEF");

        System.out.println(car1.toString());
        System.out.println(car2.toString());
        
        /*ACTUALIZO EL COLOR DEL COCHE*/
        car1.setColorCar("VERDE");
        System.out.println("___________________IMPRIME COCHE _________________________");
        /*IMPRIMO EL CAMBIO REALIZADO*/
        System.out.println(car1.toString());
        
    }
    
}
