
package persistencia;

import java.util.List;
import modelo.Vehiculo;

public interface IRenta {
    
    void registraVehiculo(Vehiculo v);
    Vehiculo buscarVehiculo (String placa);
    List<Vehiculo> informeRenta();
    
}
