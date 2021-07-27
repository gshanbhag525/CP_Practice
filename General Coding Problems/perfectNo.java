import java.util.Scanner;

public class perfectNo{
    public static void main(String[] args){
        
        int n, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an integer");
        n = sc.nextInt();

        for(int i = 1; i < n; i++){
            if(n % i == 0)
                sum = sum + i;
        }
        System.out.println("Sum is "+sum);
        if( sum == n)
            System.out.println("Given number is a Pefect Number");
        else
            System.out.println("Given number is not a Pefect Number");
    }
    int divisor(int x){
        return x;
    }
}