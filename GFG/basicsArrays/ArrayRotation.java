import java.util.Scanner;

class ArrayRotation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arrayLength = 0;
        int rotationDistance = 0;
        System.out.println("Enter array length");
        arrayLength = sc.nextInt();
        System.out.println("Enter array rotation distance");
        rotationDistance = sc.nextInt();
        int arr[] = new int[arrayLength];
        int index = 0;
        int nextIndex = 0;
        System.out.println("Enter array values");
        for (index = 0; index < arrayLength; index++) {
            arr[index] = sc.nextInt();
        }

        for (index = 1; index <= rotationDistance; index++) {
            int tempValue = arr[arrayLength - 1];
            for (nextIndex = arrayLength - 1; nextIndex > 0; nextIndex--) {
                arr[nextIndex] = arr[nextIndex - 1];
            }
            arr[0] = tempValue;
        }

        System.out.println("values after rotating");
        for (index = 0; index < arrayLength; index++) {
            System.out.print(arr[index] + " ");
        }

    }
}