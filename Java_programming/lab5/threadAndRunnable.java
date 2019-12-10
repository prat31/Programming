class child extends Thread{
    public void run(){
        for(int i=0; i<5; i++){
            System.out.println("Child");
        }
    }
}

class small_child implements Runnable{
    public void run(){
        for(int i=0; i<5; i++){
            System.out.println("Small Child");
        }
    }
}

class thread_and_runnable{
    public static void main(String args[]){
        child ct = new child();
        ct.start();
        small_child st = new small_child();
        Thread t = new Thread(st);
        t.start();
        for(int i=0; i<5; i++){
            System.out.println("Main");
        }
    }
}