
package modelo;

import java.util.ArrayList;
/**
 * @author Julio
 */
public class Empresa {
    
    private int nit;
    private String nombre;
    private ArrayList<Direccion> direcciones;
    private ArrayList<Persona> trabajadores;

    public Empresa() {
        this(123456, "Manejar.com");
    }

    public Empresa(int nit, String nombre) {
        this.nit = nit;
        this.nombre = nombre;
        this.direcciones = new ArrayList();
        this.trabajadores= new ArrayList();
    }

   
    public int getNit() {
        return nit;
    }
    public void setNit(int nit) {
        this.nit = nit;
    }
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public ArrayList<Direccion> getDirecciones() {
        return direcciones;
    }
    public void setDirecciones(ArrayList<Direccion> direcciones) {
        this.direcciones = direcciones;
    }
    
    public void registrarDireccion(Direccion d){  
        this.direcciones.add(d);
    }

    @Override
    public String toString() {
        return "Empresa{" + "nit=" + nit + ", nombre=" + nombre + '}';
    }

    public ArrayList<Persona> getTrabajadores() {
        return trabajadores;
    }
    public void setTrabajadores(ArrayList<Persona> trabajadores) {
        this.trabajadores = trabajadores;
    }
    
    public void registrarTrabajador(Persona p){
        this.trabajadores.add(p);
    }
}
