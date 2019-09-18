class factor
{
    public static void main(String arr[])
    {
        int x=Integer.parseInt(arr[0]);
        int y=Integer.parseInt(arr[1]);
        if(x%y==0)
            System.out.println(y+" is a factor of " + x);
        else if(y%x==0)
            System.out.println(x+" is a factor of " + y);
        else
        System.out.println("They are not factor of each other");
        
    }
}