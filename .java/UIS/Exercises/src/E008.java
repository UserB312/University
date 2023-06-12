
public class E008 {

    public static void main(String[] args) {
    //CODE=FUNCION QUE NO RETORNA DATOS
        String name="Julio";
        int multiplicacion=multiplicar(15);
        System.out.println(multiplicacion);
    }
    
    //FUNCION MULTIPLICAR
    private static int multiplicar(int num){
        return(num*num);
    }
   
    private static void imprimirname(String name){
        System.out.println(name);
    }
    }