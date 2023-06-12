package Controlador;

import Modelo.ConexionBD;
import java.sql.ResultSet;
import java.util.ArrayList;
import java.util.List;

public class Producto {
    private String nombre;
    private String id;
    private double temperatura;
    private double valorBase;
    
    public Producto(String nombre, String id, double temperatura, double valorBase){
        this.nombre=nombre;
        this.id=id;
        this.temperatura=temperatura;
        this.valorBase=valorBase;
    }
    
    public Producto(){      
    }

    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public String getId() {
        return id;
    }
    public void setId(String id) {
        this.id = id;
    }
    public double getTemperatura() {
        return temperatura;
    }
    public void setTemperatura(double temperatura) {
        this.temperatura = temperatura;
    }
    public double getValorBase() {
        return valorBase;
    }
    public void setValorBase(double valorBase) {
        this.valorBase = valorBase;
    }   
    
    public boolean agregarProducto(){
        ConexionBD conexion=new ConexionBD();
        String sql="insert into producto(id,nombre,temperatura,valorBase)"
               + "values('"+id+"','"+nombre+"',"+temperatura+","+valorBase+")";
        if(conexion.insertarBD(sql)){
            conexion.cerrarConexion();
            return true;
        }else{
            conexion.cerrarConexion();
            return false;
        }
    }
    
    public List<Producto> listarProductos(String parametro){
        List<Producto> listaProductos=new ArrayList<>();
        ConexionBD conexion=new ConexionBD();
        String sql="select * from producto"+parametro;
        try {
            ResultSet rs=conexion.consultarBD(sql);
            while(rs.next()){
                listaProductos.add(
                    new Producto(
                        rs.getString("nombre")
                       ,rs.getString("id")
                       ,rs.getDouble("temperatura")
                       ,rs.getDouble("valorBase")    
                    )
                );
            }
        } catch (Exception e) {
            System.out.println("Error al consultar los productos");
        }
        conexion.cerrarConexion();
        return listaProductos;
    } 
    
    public boolean actualizarProducto(){
        ConexionBD conexion=new ConexionBD();
        String sql="update producto set "
                +"nombre='"+nombre+"',"
                +"temperatura="+temperatura+","
                +"valorBase="+valorBase+" "
                +"where id='"+id+"'";
        if(conexion.actualizarBD(sql)){
            conexion.cerrarConexion();
            return true;
        }else{
            conexion.cerrarConexion();
            return false;
        }
    }
    
    public boolean eliminarProducto(){
        ConexionBD conexion=new ConexionBD();
        String sql="delete from producto where id='"+id+"'";
        if(conexion.borrarBD(sql)){
            conexion.cerrarConexion();
            return true;
        }else{
            conexion.cerrarConexion();
            return false;
        }
    }
}
