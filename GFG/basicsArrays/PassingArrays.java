class PassingArrays {

    public static void main(String[] args) {
        int ar[] = {1,2,3};
        
        sum(ar);
    }

    public static void sum(int[] arr) {
        int sum = 0;
        
        for (int i = 0; i < arr.length; i++)
            sum+=arr[i];

        System.out.println("sum of array values : " + sum);
    }

}