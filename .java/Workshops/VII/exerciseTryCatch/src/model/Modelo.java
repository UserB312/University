
package model;

import Excepciones.MyExcepcion;
import datos.Persistencia;

/**
 *
 * @author ESTUDIANTES
 */
public class Modelo {
    private Persistencia persistencia;

    public Modelo() {
        this.persistencia = new Persistencia();
    }
    
    public void ejecutarModelo(int dato) throws MyExcepcion{
        this.persistencia.ejecutarPersistencia(dato);
    }
    
}
