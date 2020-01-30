import java.util.ArrayList;
import java.util.Scanner;

class test{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int testCases = sc.nextInt();
        int answer=0;
        for(int x=0; x<testCases; x++){
            int n = sc.nextInt();
            // sc.next();
            String str = new String();
            str = sc.next();
            // str = sc.nextLine();
            ArrayList<Character> arr = new ArrayList<Character>();
            arr.add(str.charAt(n-1));
            for(int i=n-2; i>=0; i--){
                if(arr.contains(str.charAt(i))){
                    answer=i+1;
                    for(int j=n-1; j>=0; j--){
                        if(str.charAt(j)==str.charAt(i)) break;
                        answer++;
                    }
                    break;
                }
                else{
                    arr.add(str.charAt(i));
                }
            }
            System.out.println(answer);
        }
        sc.close();
    }
}