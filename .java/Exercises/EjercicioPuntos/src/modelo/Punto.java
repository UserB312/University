/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

import java.lang.Math;

/**
 *
 * @author Jorman
 */
public class Punto {

    private double x;
    private double y;

    public Punto() {
        this.x = 0;
        this.y = 0;
    }

    public Punto(double a, double b) {
        this.x = a;
        this.y = b;
    }
    
    public double getX() {
        return x;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return y;
    }

    public void setY(double y) {
        this.y = y;
    }

    public boolean compararPuntos(Punto punto) {        
        return (this.x == punto.getX() && this.y == punto.getY());
    }

    @Override
    public String toString() {
        return "Punto{" + "x=" + x + ", y=" + y + '}';
    }
    
    

    public double calcularDistancia() {
        return Math.sqrt(Math.pow(this.x, 2) + Math.pow(this.y, 2));
    }

    public double calcularDistancia(Punto punto) {
        return Math.sqrt(Math.pow(this.x - punto.getX(), 2) + Math.pow(this.y - punto.getY(), 2));
    }

}
