
package Repaso_H57;

public class Exercise1 {

    public static void main(String[] args) {
        System.out.println(comision(2500000));
    }
    
    
    private static float comision(float venta){
        int salariobasico=2500000;
        float comision;
        if (venta>=1000000 & venta<=2500000){
            comision=0;
        }else if (venta>2000000 & venta<=4000000){
            comision=salariobasico*0.06f;
        }else if (venta>4000000 & venta<=6000000){
            comision=salariobasico*0.12f;
        }else if (venta>6000000){
            comision=salariobasico*0.15f;
        }else{
            comision=0;
        }
        return comision;
    }
}
