/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package vista;

import java.util.ArrayList;
import java.util.List;
import modelo.*;

/**
 *
 * @author Jairo F
 */
public class Principal {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        List<PuedeCantar> listCantantes = new ArrayList();
        List<PuedeBailar> listBailarines = new ArrayList();
        List<PuedeBailarYCantar> list= new ArrayList();
        
        PuedeCantar jhon = new Persona();
        listCantantes.add(jhon);
        listBailarines.add((PuedeBailar)jhon);
        
        
        Canario piolin = new Canario();
        listCantantes.add(piolin);
        
        Gallo claudio = new Gallo();
        listBailarines.add(claudio);
        listCantantes.add(claudio);
        
        Cocodrillo lilo = new Cocodrillo();
        listBailarines.add(lilo);
        
        imprimirCantantes(listCantantes, listBailarines);
        
    }
    
    public static void imprimirCantantes(List<PuedeCantar> listA, List<PuedeBailar> listB){
        
        System.out.println("** OBJETOS QUE PUIEDEN CANTAR **");
        for(PuedeCantar p: listA){
            System.out.println(p.cantar());
            System.out.println("--------------------");
        }
        
        System.out.println("** OBJETOS QUE PUIEDEN BAILAR **");
        for(PuedeBailar b: listB){
            System.out.println(b.bailar());
            System.out.println("--------------------");
        }
    
    }
    
}
