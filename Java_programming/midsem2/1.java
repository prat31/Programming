class Parent {}

class child extends Parent {}

class Test{
    public static void main(String args[]){
    child cobj = new child();
    if(cobj instanceof child)
        System.out.println("cobj is instance of child.");
    else
        System.out.println("cobj is not an instance of child.");
    if(cobj instanceof Parent)
        System.out.println("child is instance of parent");
    else 
        System.out.println("child is not an instance of parent");
    }        
}
