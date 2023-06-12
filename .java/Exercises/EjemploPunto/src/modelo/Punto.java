/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

/**
 *
 * @author Jairo F
 */
public class Punto {
    
    private double x;
    private double y;
    
    
    public Punto(){
        this(0,0);
    }
    
    public Punto(double x, double y){
        this.x=x;
        this.y=y;
    }
    
    public Punto(double x){
        this(x,0);
    }
    
    
    
    public double getX(){
        return this.x;
    }
    
    public double getY(){
        return this.y;
    }
    
    public void setX(double x){
        this.x=x;
    }
    
    public void setY(double y){
        this.y = y;
    }
    
    @Override
    public String toString(){
        return "("+ this.x + "," + this.y + ")";
    }
    
    public double distancia(Punto p){
        
        double dx = p.getX() - this.x;
        double dy = p.getY() - this.y;
        double dx2 = Math.pow(dx, 2);
        double dy2 = Math.pow(dy, 2);
        double raiz = Math.sqrt(dx2+dy2);
        return raiz;
    }
    
    public double distancia(){
        
        Punto p = new Punto();
        return this.distancia(p);
    
    }
    
    
    public Punto suma (Punto p){
        double sx = p.getX() + this.x;
        double sy = p.getY() + this.y;
        Punto suma = new Punto(sx, sy);
        return suma;
        
    }
}
