
class Complete{
    // Function for finding maximum and value pair
    public static int[] game_with_number (int inputArray[], int arryLength) {
        // Complete the function
        for (int inputIndex = 0; inputIndex < arryLength - 1; inputIndex++)
            inputArray[inputIndex] = inputArray[inputIndex] ^ inputArray[inputIndex + 1];
        return inputArray;
    }
}
