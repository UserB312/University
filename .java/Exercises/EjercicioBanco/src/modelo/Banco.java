
package modelo;

import java.util.ArrayList;

/**
 * @author Julio
 */
public class Banco {
    private String nombre;
    private String sede;
    private String pais;
    private ArrayList<Cuenta> cuentas;

    /*public Banco() {
        this.cuentas = new ArrayList();
    }

    public Banco(String nombre, String sede, String pais) {
        this.nombre = nombre;
        this.sede = sede;
        this.pais = pais;
    }*/
    public Banco() {
        this(null, null, null);
    }

    public Banco(String nombre, String sede, String pais) {
        this.nombre = nombre;
        this.sede = sede;
        this.pais = pais;
        this.cuentas= new ArrayList();
    }

    /**
     * @return the nombre
     */
    public String getNombre() {
        return nombre;
    }
    /**
     * @param nombre the nombre to set
     */
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    /**
     * @return the sede
     */
    public String getSede() {
        return sede;
    }
    /**
     * @param sede the sede to set
     */
    public void setSede(String sede) {
        this.sede = sede;
    }
    /**
     * @return the pais
     */
    public String getPais() {
        return pais;
    }
    /**
     * @param pais the pais to set
     */
    public void setPais(String pais) {
        this.pais = pais;
    }
    /**
     * @return the cuentas
     */
    public ArrayList<Cuenta> getCuentas() {
        return cuentas;
    }
    /**
     * @param cuentas the cuentas to set
     */
    public void setCuentas(ArrayList<Cuenta> cuentas) {
        this.cuentas = cuentas;
    }
    
    public void registrarCuenta(int numero, double saldo, String tipo, Persona titular){
        
        if(this.consultarCuenta(numero)==null){
            Cuenta cuenta = new Cuenta(numero, saldo, tipo, titular, this);
            this.cuentas.add(cuenta);
        }
        
    }
    
    public Cuenta consultarCuenta(int numero){
        
        if(this.cuentas!=null){
            for(Cuenta c: this.cuentas){
                if(c.getNumero()==numero){
                    return c;
                }
            }
            return null;
        }
        else{
            return null;
        }    
    }
}
