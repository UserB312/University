
package persistencia;

import java.util.ArrayList;
import java.util.List;
import modelo.Vehiculo;

public class ListaVehiculo implements IRenta {

    private List<Vehiculo> lista;

    public ListaVehiculo() {
        this.lista = new ArrayList();
    }
    
    
    @Override
    public void registraVehiculo(Vehiculo v) {
        this.lista.add(v);
       
    }

    @Override
    public Vehiculo buscarVehiculo(String placa) {
        for (Vehiculo v : lista) {
            if (v.getPlaca().equalsIgnoreCase(placa)) {
                return v;
            }

        }
        return null;
    }

    @Override
    public List<Vehiculo> informeRenta() {
        return this.lista;
    }
    
}
