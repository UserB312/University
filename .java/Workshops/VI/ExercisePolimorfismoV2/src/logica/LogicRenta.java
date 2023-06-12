
package logica;

import java.util.List;
import modelo.Vehiculo;
import persistencia.IRenta;
import persistencia.ListaVehiculo;
import persistencia.MapaVehiculo;


public class LogicRenta {
    
    private IRenta datos;

    public LogicRenta() {
       // this.datos = new ListaVehiculo();
        this.datos = new MapaVehiculo();
    }
    
    
    public void rentarVehiculo(Vehiculo v){
        this.datos.registraVehiculo(v);
    }
    
    public Vehiculo buscarRentado(String placa){
         return this.datos.buscarVehiculo(placa);
    }
    
    public List<Vehiculo> informeRentas(){
        
        return this.datos.informeRenta();
    }
    
}
