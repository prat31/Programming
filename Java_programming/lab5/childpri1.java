class child extends Thread{
    public void run(){
        System.out.println("Child Priority = "+Thread.currentThread().getPriority());
    }
}

class newChild extends Thread{
    public void run(){
       System.out.println("New Child Priority = "+Thread.currentThread().getPriority());
    }
}

class thread_priority1{
    public static void main(String args[]){
        child ct = new child();
        ct.start();
        newChild nt = new newChild();
        nt.start();
        System.out.println("Main Priority = "+ Thread.currentThread().getPriority());
    }
}