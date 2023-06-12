
package Composicion;

public class Automovil {
    private String modelo;
    private int radioRuedas;
    private int anchoRuedas;
    private double cilindraje;
    private Rueda ruedas[ ];

    public Automovil(String modelo, int radioRuedas, int anchoRuedas, double cilindraje, int cantidadRuedas) {
        this.modelo = modelo;
        this.radioRuedas = radioRuedas;
        this.anchoRuedas = anchoRuedas;
        this.cilindraje = cilindraje;
        //SE INICIALIZA EL VECTOR RUEDAS APARTIR DE UN CICLO FOR
        ruedas = new Rueda[cantidadRuedas];
        //EL FOR NOS PERMITE ASIGNAR EN CADA UNA DE LAS POSICIONES LA INFORMACION DE LA CLASE RUEDA
        for (int i = 0; i < cantidadRuedas; i++) {
            ruedas[ i ] = new Rueda(radioRuedas, anchoRuedas);
        }
    }
    //LENGTH NOS DETERMINA EL TAMAÑO DEL VECTOR
    public int getCantidadRuedas(){
        return ruedas.length;
    }   
}
