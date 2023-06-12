/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

/**
 *
 * @author Jairo F
 */
public class Gallo implements PuedeCantar, PuedeBailar {

    @Override
    public String cantar() {
        return PuedeCantar.CANTO_GALLO;
    }

    @Override
    public String bailar() {
        return PuedeBailar.BAILE_GALLO;
    }
    
}
