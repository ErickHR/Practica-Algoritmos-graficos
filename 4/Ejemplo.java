/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gui;

import codigoVector.Arreglo;
import java.util.Scanner;

/**
 *
 * @author Rivas
 */
public class Ejemplo {
    
    public Arreglo array = new Arreglo();
    
    public void list(){
        int option = 0;
        int item;
        Scanner sc = new Scanner(System.in);
        
        do {    
            
            System.out.println("Buenas Profesor");
            System.out.println("1. agregar valores");
            System.out.println("2. borrar al final");
            System.out.println("3. borrar todo");
            System.out.println("0. Salir");
            System.out.print("Seleccione una opción: ");
            option = sc.nextInt();
            switch ( option ) {
                case 1 :
                    System.out.println("");
                    System.out.print("ingrese un numero: ");
                    this.addItem( item = sc.nextInt() );
                    break;
                case 2 :
                    this.deleteEnd();
                    break;
                case 3 :
                    this.deleteAll();
                    break;
                 default:
                     System.out.println("Las opciones son de 0-3");
            }
            
        } while ( option != 0 );

    }
    
    public void addItem (int item){
        
        array.addItem( item );
        this.getArray();

    }
    
    public void deleteEnd (){
        
        array.deleteEnd();
        
    }
    
    public void deleteAll (){
        
        array.deleteAll();
        
    }

    private void getArray() {
        
        for (int i = 0; i < array.size(); i++) {
            System.out.print( array.getN()[i] + " - " );
        }
        
        System.out.println("");
    }
    
}
