class Complete{
    public static int[] game_with_number (int InputArray[], int arrayLength) {
        for (int inputIndex = 0; inputIndex < arrayLength - 1; inputIndex++)
            InputArray[inputIndex] = InputArray[inputIndex] | InputArray[inputIndex + 1];
        return InputArray;
    }
}
