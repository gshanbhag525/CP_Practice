class ArrayRotaionJugglingAlgo {

    static void rotateArr(int arr[], int rotationDistance, int arrayLength) {
        // add your code herevoid rotateArr(int arr[], int rotationDistance, int
        // arrayLength){
        rotationDistance = rotationDistance % arrayLength;
        int indexJuggle, indexSet, k, temp;
        int g_c_d = gcd(rotationDistance, arrayLength);
        for (indexJuggle = 0; indexJuggle < g_c_d; indexJuggle++) {
            // run for indexJuggle sets
            temp = arr[indexJuggle];
            indexSet = indexJuggle;
            while (true) {
                k = indexSet + rotationDistance;
                if (k >= arrayLength)
                    k = k - arrayLength;
                if (k == indexJuggle)
                    break;
                arr[indexSet] = arr[k];
                indexSet = k;
            }
            arr[indexSet] = temp;
        }
    }

    static int gcd(int a, int b) {
        if (b == 0)
            return a;
        else
            return gcd(b, a % b);
    }

    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6,7,8,9,10,11,12};
        rotateArr(arr, 3, 12);
    }

    
}