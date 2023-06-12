
package AgregacionV2;

import java.util.ArrayList;
//COMO FUUNCIONA UN ARRAY
public class principal {

    public static void main(String[] args) {
        ArrayList<String> lista=new ArrayList<String>();
        lista.add("Julio");
        lista.add("Morgan");
        lista.add("Andres");
        //TAMAÑO DE LA LISTA, ESTA COMPUESTA POR CUANTOS ELEMENTOS
        System.out.println(lista.size());
        //IMPRIMe UN ELEMENTO EN ESPECIFICO MEDIANTE EL INDICE INDICADO
        System.out.println(lista.get(2));
        //RECORRE TODA LA LISTA E IMPRIME CADA ELEMENTO DE LA LISTA
        for (int i = 0; i < lista.size(); i++) {
            System.out.println(lista.get(i));
        }
    }
    
}
