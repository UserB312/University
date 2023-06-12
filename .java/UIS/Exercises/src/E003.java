
package Ejercicios1406;

import javax.swing.JOptionPane;

public class E003 {
    public static void main(String[] args) {
        int num=Integer.parseInt(JOptionPane.showInputDialog("Ingrese num"));
        if(num%2==0){
            JOptionPane.showMessageDialog(null, "Es Par");
        }else{
            JOptionPane.showMessageDialog(null, "Es Impar");
        }
    }
    
    //num=int(input("ingrese numero:"))
    
}
