class child extends Thread{
    public void run(){
        for(int i=0; i<5; i++){
            System.out.println(" Child ");
        }
    }
}

class two_threads{
    public static void main(String args[]){
        child ct = new child();
        ct.start();
        for(int i=0; i<5; i++){
            System.out.println(" Main ");
        }      
    }
}