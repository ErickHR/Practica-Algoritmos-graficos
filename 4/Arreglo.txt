
package codigoVector;

/**
 *
 * @author Rivas
 */
public class Arreglo {

    private Integer [] n;
    private int indice;

    public Arreglo() {
        
        this.indice = 0;
        this.n = new Integer[10];
        
    }
    
        /*operaciones publicas básicas*/
    
    public int size(){
        return this.indice;
    }
        
    
    public int length (){
        
        return this.n.length;
        
    }
    
    public int getNumber( int position ) {
        
        return this.n[position];
        
    }
    
    public void addItem( int item ) {
        
        if ( this.size() == this.length() )
            this.extendArray();
        
        this.n[indice] = item;
        this.indice++;
        
    }
    
    public void extendArray(){
        Integer[] aux = new Integer[ this.length() ];
        
        System.arraycopy( this.n, 0, aux, 0, this.length());
            
        this.n = new Integer[ this.length() + 10  ];
        
        System.arraycopy( aux, 0, this.n, 0, aux.length );
        
    }
    
    /*operaciones publicas complementarias*/
    
    public void deleteEnd(){
        
        int[] newN = new int[indice];
        
        for( int i = 0; i < newN.length; i++){
            newN[i] = this.getNumber(i);
        }
        
        this.deleteAll();
        
        for ( int i = 0; i < newN.length - 1; i++ ){
            this.addItem( newN[i] );
        }
        
    }
    
    public void deleteAll(){
        
        this.n = new Integer[10];
        
    }

    public Integer[] getN() {
        return this.n;
    }
    
}
