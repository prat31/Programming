import java.util.*;

class armstrong
{
    public static void main(String args[])
    {
        System.out.println("Enter a number : ");
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        int result=0, n, temp=num, temp2;
        for(n=0; num>0; num=num/10, n++);
        num=temp;
        for(int i=0; i<n; i++)
        {
            temp2=num%10;
            result=result + (int)Math.pow(temp2, n);
            num=num/10;
        }
        if(result==temp)
            System.out.println(result+" is an Armstrong's number.");
        else   
            System.out.println(temp+" is not an Armstrong's number.");

    }
}