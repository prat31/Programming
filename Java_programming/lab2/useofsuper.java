class bottle{
 
    int volume=100;
}

class plasticBottle extends bottle{
    int volume=200;

    void display(){
        System.out.println("Volume of bottle = "+super.volume);
        System.out.println("Volume of plastic bottle = "+volume);
    }
}

class trial{
    public static void main(String args[]){
        plasticBottle object = new plasticBottle();
        object.display();
    }
}