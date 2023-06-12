
package Herencia;

public class Seleccion_principal {

    public static void main(String[] args) {
        Futbolista cuadrado=new Futbolista(7,"Mediocampista",10032396,"Juan","Cuadrado",30);
        System.out.println(cuadrado.getNombre()+" "+cuadrado.getApellido());
        System.out.println(cuadrado.getDorsal()+" "+cuadrado.getPosicion());
        //ESTOS METODOS SON ORIGINARIOS DE LA CLASE Futbolista
        cuadrado.jugarPartido();
        cuadrado.entrenar();
        //ESTOS METODOS SON HEREDADOS DE LA CLASE SeleccionFutbol
        cuadrado.viajar();
        cuadrado.concentrarse();
        
        //COMPROBAMOS LA HERENCIA DE LOS METODOS HEREDADOS DE LA CLASE SeleccionFutbol A LA CLASE Entrenador
        System.out.println("_____________________________________________");
        Entrenador pekerman=new Entrenador("Federacion Argentina",1065653,"Jose","Pekerman",76);
        //UTILIZAMOS METODOS HEREDADOS DE LA CLASE SeleccionFutbol   getNombre
        System.out.println(pekerman.getNombre()+" "+pekerman.getApellido());
        //UTILIZAMOS UN METODO ORIGINARIO DE LA CLASE Entrenador  getFederacion
        System.out.println(pekerman.getFederacion());
        pekerman.concentrarse();
        pekerman.dirigirPartido();
        
        System.out.println("_____________________________________________");
        //COMPROBAMOS LA HERENCIA DE LOS METODOS HEREDADOS DE LA CLASE SeleccionFutbol A LA CLASE Masajista
        Masajista julio=new Masajista("Fisioterapeuta",1039583,"Julio","Rios",19);
        System.out.println(julio.getNombre()+" "+julio.getApellido());
        System.out.println(julio.getTitulacion());
        //METODO ESPECIFICADO QUE LA CLASE Masajista TIENE    darMasaje( )
        julio.darMasaje();
        //METODO HEREDADO
        julio.concentrarse();
    }  
}
