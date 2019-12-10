  
class parent extends Thread{
    public void run(){
        System.out.println("Parent Priority = "+Thread.currentThread().getPriority());
    }
}

class child extends parent{
    public void run(){
	    System.out.println("Child Priority ="+ Thread.currentThread().getPriority());
    }
}

class thread_priority2{
    public static void main(String args[]){
        Thread.currentThread().setPriority(7);
        parent pt = new parent();
        child ct = new child();
	    pt.start();
	    ct.start();
    }
}