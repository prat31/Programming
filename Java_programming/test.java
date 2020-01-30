import java.lang.*;
class DemoInstance{
    int i=5;
    DemoInstance(){
        i++;
    }
    public void show(){
        i=i+2;
    }
    public static void main(String args[]){
        DemoInstance d1 = new DemoInstance();
        d1.i++;
        d1.show();
        DemoInstance d2 = new DemoInstance();
        System.out.println(d1.i);
        System.out.println(d2.i); 
    }
}