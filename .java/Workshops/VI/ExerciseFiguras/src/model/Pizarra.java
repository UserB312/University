
package model;

import model.Figura;
import java.util.ArrayList;
import java.util.List;

public class Pizarra {
    
   private List<Figura> figuras;

    public Pizarra(){
        this.figuras = new ArrayList<Figura>();
    }
 
   public void agregarFigura(Figura f){
       figuras.add(f);
   }
  
   public void borrarFigura(Figura f){
       figuras.remove(f);
       System.out.println("");
   }
    
   public void dibujarFiguras(){
           
           for(Figura f : figuras ){
               System.out.println(f);
           }
       }
   }
   
