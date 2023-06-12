/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

/**
 *
 * @author Jorman
 */
public class Linea {

    private Punto puntoInicial;
    private Punto puntoFinal;

    public Linea(Punto puntoInicial, Punto puntoFinal) {
        this.puntoInicial = puntoInicial;
        this.puntoFinal = puntoFinal;
    }

    public Punto getPuntoInicial() {
        return puntoInicial;
    }

    public void setPuntoInicial(Punto puntoInicial) {
        this.puntoInicial = puntoInicial;
    }

    public Punto getPuntoFinal() {
        return puntoFinal;
    }

    public void setPuntoFinal(Punto puntoFinal) {
        this.puntoFinal = puntoFinal;
    }

    @Override
    public String toString() {
        return "Linea{" + "puntoInicial=" + puntoInicial + ", puntoFinal=" + puntoFinal + '}';
    }
        

    public String conexion() {
        return "Esta linea conecta los puntos" + (puntoInicial.getX() + "," + puntoInicial.getY()) + " y " + (puntoFinal.getX() + "," + puntoFinal.getY());
    }

}
