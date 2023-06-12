
package modelo;
/**
 * @author Julio
 */
public class Parrafo {
    
    /*ATRIBUTOS*/
    private String texto;
    
    /*METODO CONSTRUCTOR POR DEFECTO*/
    public Parrafo(){
        this.texto = "hola";
    }
    /*METODO SOBRECARGADO*/
    public Parrafo(String texto){
        this.texto = texto;
    }
    /*GETTERS*/
    public String getTexto(){
        return this.texto;
    }
    /*SETTERS*/
    public void setTexto(String texto){
        this.texto = texto;
    }
    
    /*METODOS*/
    
    /*EN CADA ITERACION EL METODO .charAt() NOS DEVOLVERA EL 
      CARACTER DE LA POSICION QUE ESTAMOS RECORRIENDO*/
    public int nVocales(String texto){
        int numVocal = 0;          /*CONTADOR*/
        texto.toLowerCase();   /*.toLowerCase( )   CONVIERTE TODA LA CADENA A MINUSCULAS*/
        for (int i = 0; i < texto.length(); i++) {      /*.lenght DEVUELVE LA CANTIDAD DE CARACTERES DE LA CADENA*/
            if ((texto.charAt(i) == 'a') || (texto.charAt(i)  == 'e') || (texto.charAt(i) == 'i') || (texto.charAt(i) == 'o') || (texto.charAt(i)  == 'u')){ 
            numVocal++;
            }
        }
        return numVocal;
    }
    /*indexOF NOS DEVUELVE EL INDICE O PRIMERA POSICION DE COINCIDENCIA EN LA CADENA, SI NO HAY COINCIDENCIAS 
    NOS DEl VOLVERA -1*/
    /*.charAt() NOS DEVOLVERA EL CARACTER DE LA POSICION QUE ESTAMOS RECORRIENDO*/
    public int nConsonantes(){
        int numConsonantes = 0;
        texto.toLowerCase();
        for (int i = 0; i < texto.length(); i++) {
            if ((texto.charAt(i) != 'a') || (texto.charAt(i)  != 'e') || (texto.charAt(i) != 'i') || (texto.charAt(i) != 'o') || (texto.charAt(i)  != 'u')) {
                numConsonantes++;
            }
        }
        return numConsonantes;
    }
    public int nSimbolos(String texto){
        int numSimbolos = 0;        /*CONTADOR*/
        String cadena = "abcdefghijkmnlopqrstuvwxyz";
        texto.toLowerCase();        /*.toLowerCase( )   CONVIERTE TODA LA CADENA A MINUSCULAS*/
        for (int i = 0; i < texto.length(); i++) {
            for (int j = 0; j < cadena.length(); j++) {
                if((cadena.charAt(j) != texto.charAt(i))){
                    numSimbolos++;
                }
            }
        }
    return numSimbolos;
    }
    public int buscar(){
        return 0;
    }
    public String vocalModa(){
        return "";
    }
    public int Palabras(){
        return 0;
    }
    public String palabraMayor (){
        return "";
    }
    public boolean compararTexto(String texto){
        /*FUNCION [.equalsIgnoreCase] devuelve un Boolean COMPARA LA CADENA CON LA CADENA INFORMADA PERO IGNORA LAS            MAYUSCULAS Y MINUSCULAS*/
        return texto.equalsIgnoreCase(texto);
    }
}
