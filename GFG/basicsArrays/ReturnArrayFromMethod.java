public class ReturnArrayFromMethod {
    public static void main(String[] args) {
        int ar[] = returningArray();
    }

    public static int[] returningArray() {
        return new int[]{1,2,3};
    }
}