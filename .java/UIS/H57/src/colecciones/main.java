
package Colecciones;

import java.util.List;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Set;
import java.util.SortedSet;
import java.util.TreeSet;

public class main {

    public static void main(String[] args) {
        
        //LISTAS = SE PERMITEN ELEMENTOS REPETIDOS
        List objetoArrayList = new ArrayList<>();
        objetoArrayList.add("Luis");
        objetoArrayList.add("Carlos");
        objetoArrayList.add("Luis");
        System.out.println(objetoArrayList);
        
        //CONJUNTOS = NO SE PERMITEN ELEMENTOS REPETIDOS
        Set objetoHashset = new HashSet<>();
        objetoHashset.add("Luis");
        objetoHashset.add("Carlos");
        objetoHashset.add("Luis");
        System.out.println(objetoHashset);
        
        //CONJUNTO DE DATOS ORDENADOS, NO PERMITE ELEMENTOS REPETIDOS
        SortedSet objetoTreeSet = new TreeSet<>();
        objetoTreeSet.add("Luis");
        objetoTreeSet.add("Carlos");
        objetoTreeSet.add("Luis");
        System.out.println(objetoTreeSet);
    }
}
