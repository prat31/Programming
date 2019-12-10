class child extends Thread{
    public void run(){
        for(int i=0; i<5; i++){
            System.out.println(" Child ");
        }
    }
}

class start_method_check2{
    public static void main(String args[])
    {
        child ct = new child();
        ct.start();
        for(int i=0; i<5; i++){
            System.out.println(" Main ");
        }
        ct.start();
    }
}