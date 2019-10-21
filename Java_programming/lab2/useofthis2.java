class gadget{
    
    String name;
    int price;
    gadget(int p){
        
        this("Laptop");
        price = p;
        System.out.println("price value = "+price); 
    }
    gadget(String n){
        this();
        name = n;
        System.out.println("Name of gadget = "+name);
    }
    gadget(){
        System.out.println("List of gadgets ");
    }

    public static void main(String args[]){
        new gadget(100);
    }    
}

