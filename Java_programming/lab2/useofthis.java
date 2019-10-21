

class useofthis{
    int a, b;

    useofthis(int a, int b){
        this.a=a;
        this.b=b;
    }

    void show(){
        System.out.println("a = "+a+" b = "+b);
    }

    public static void main(String args[]){
        useofthis example = new useofthis(31, 87);
        example.show();
    }

}