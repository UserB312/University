
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
        
        System.out.println("** INFORMES DE DEVOLUCION **");
        System.out.println("----------------------------");
        for(Vehiculo r : listRentados){
            devolucionVehiculo(r);
        }
        
        
    }
    
    public static Vehiculo rentaVehiculo(){
        
        Vehiculo v;
        System.out.println("----------------------------------------------------");
        String placa=Entrada.leerString("Placa: ");
        char tipoVehiculo = Entrada.leerchar("Tipo vehiculo[ A-> autobus, V->Automovil, X->Tractor ]: ");
        switch (tipoVehiculo) {
            case 'A':
            case 'a':
                double precioKm= Entrada.leerDouble("PrecioKm: ");
                double kmRenta= Entrada.leerDouble("Km renta: ");
                double kmDev= Entrada.leerDouble("Km dev: ");
                v= new Autobus(precioKm, kmRenta, kmDev, placa, true);
                break;
            case 'V':
            case 'v':
                int horasRenta= Entrada.leerInt("Horas renta: ");
                double valorHora= Entrada.leerDouble("Valor hora: ");
                v= new Automovil(valorHora, horasRenta, placa, true) ;
                break;
            default:
                double precioDia= Entrada.leerDouble("Precio dia: ");
                LocalDate fechaRenta= LocalDate.parse(Entrada.leerString("Fecha renta(aaaa-mm-dd): "));
                LocalDate fechaDev= LocalDate.parse(Entrada.leerString("Fecha devolucion(aaaa-mm-dd): "));
                v = new Tractor(precioDia, fechaRenta, fechaDev, placa, true);
                break;
        }
        
        return v;
    }
    
    public static void devolucionVehiculo(Vehiculo v){
        
        v.setEstado(false);
        
//        if(v instanceof Autobus){
//           
//            Autobus a = (Autobus)v;
//            System.out.println("Km Renta: " + a.getKmRenta());
//            System.out.println("Km Devolucion: " + a.getKmDevolucion());
//            System.out.println("Precio Km: " + a.getPrecioKm());
//            
//        }
//        else{
//            
//            
//            System.out.println("Fecha renta: " +((Tractor)v).getFechaRenta().toString() );
//            System.out.println("Fecha devolucion: " +((Tractor)v).getFechaDevolucion().toString() );
//            System.out.println("Precio Dia: " + ((Tractor)v).getPrecioDia());
//        
//        }
        System.out.println(v);
        System.out.println("Total Importe: " + v.calcularImporteRenta());
        System.out.println("--------------------------------------------");
        
    }
    
}
