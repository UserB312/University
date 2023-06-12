/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modelo;

/**
 *
 * @author Jairo F
 */
public class Canario implements PuedeCantar {

    @Override
    public String cantar() {
        return PuedeCantar.CANTO_CANARIO;
    }
    
}
