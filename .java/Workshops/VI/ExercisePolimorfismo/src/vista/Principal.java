
package vista;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;
import modelo.*;

public class Principal {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        List<Vehiculo> listRentados = new ArrayList();
        
        System.out.println(" ** RENTA DE VEHICULOS ** ");
        Vehiculo v = rentaVehiculo();
        listRentados.add(v);
        
        Vehiculo v2 = rentaVehiculo();
        listRentados.add(v2);
        
        Vehiculo v3 = rentaVehiculo();
        listRentados.add(v3);
        
        imprimirList(listRentados);
    }
    
    public static void imprimirList(List<Vehiculo> list){
        System.out.println("\n ** INFORME DE VEHICULOS RENTADOS ** ");
        for(Vehiculo v: list){
            devolucionVehiculo(v);
        }
   
    }
    
    public static void devolucionVehiculo(Vehiculo v){
        
         v.setEstado(false);
         
//         if(v instanceof Autobus a){
//             
//             //Autobus a = (Autobus)v;
//             System.out.println("Precio km: " + a.getPrecioKm());
//             System.out.println("km renta: " + a.getKmRenta());
//             System.out.println("Km devolucion: " + a.getKmDevolucion());
//         
//         }
//         else{
//             
//             System.out.println("Precio dia: " + ((Tractor)v).getPrecioDia());
//             System.out.println("Fecha renta: " + ((Tractor)v).getFechaRenta().toString());
//             System.out.println("Fecha devolucion: " + ((Tractor)v).getFechaDevolucion().toString());
//         
//         }
         
         System.out.println(v);         
         System.out.println("Importe de renta: " + v.calcularImporteRenta());
         System.out.println("---------------------------------");
    
    }
    
    public static Vehiculo rentaVehiculo(){
        System.out.println("---------------------------------");
        Vehiculo v;
        String placa = Entrada.leerString("Placa:");
        char tipoVehiculo= Entrada.leerChar("Tipo [A->autobus, * ->tractor]: ");
        if(tipoVehiculo=='A' || tipoVehiculo=='a'){
            double precioKm=Entrada.leerDouble("Precio Km: ");
            double kmRenta=Entrada.leerDouble("Km renta: ");
            double kmDev=Entrada.leerDouble("Km devolucion: ");
            v = new Autobus(precioKm, kmRenta, kmDev, placa, true);
        }
        else{
            
            double precioDia = Entrada.leerDouble("Precio dia: ");
            LocalDate fechaRenta = LocalDate.parse(Entrada.leerString("Fecha renta(aaaa-mm-dd):  " ));
            LocalDate fechaDevolucion = LocalDate.parse(Entrada.leerString("Fecha devolucion(aaaa-mm-dd): " ));
            v = new Tractor(precioDia, fechaDevolucion, fechaRenta, placa, true);
        }
        
        return v;
    
    }
    
}
