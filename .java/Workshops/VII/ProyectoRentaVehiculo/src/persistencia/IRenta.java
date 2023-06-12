
package persistencia;

import java.io.IOException;
import java.util.List;
import modelo.Vehiculo;

/**
 * @author Jairo F
 */
public interface IRenta {
    
    void registraVehiculo(Vehiculo v) throws IOException;
    Vehiculo buscarVehiculo (String placa) throws IOException;
    List<Vehiculo> informeRenta() throws IOException;
    
}
