import java.util.*;
class max_star_value{
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        int test_cases=sc.nextInt();
        for(int z=0; z<test_cases; z++) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            int global_max_star_value=0;    
            for(int i=0; i<n; i++){
                arr[i]=sc.nextInt();
                if(i>0){
                    int local_max_star_value=0;
                    for(int j=i-1; j>=0; j--){
                        if(arr[j]%arr[i]==0)    local_max_star_value++;
                    }
                    
                    if(local_max_star_value>global_max_star_value)  global_max_star_value=local_max_star_value;
                }
            }
            System.out.println(global_max_star_value);
        }
    }
}