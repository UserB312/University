package datos;

import Excepciones.MyExcepcion;

/**
 *
 * @author ESTUDIANTES
 */
public class Persistencia {

    public void ejecutarPersistencia(int dato) throws MyExcepcion{
        if (dato < 0) {
            throw new RuntimeException();
        }
        if(dato == 0){
            throw new MyExcepcion();
        }
//        if(dato == ""){
//            throw new MyExcepcion();
//        }

        System.out.println("SE PERSISTE CON " + dato);
    }

}
