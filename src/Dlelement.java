public class Dlelement {
    public static void main(String[] args) {

        int[] array = {1, 2, 3, 4, 5}; // Sample array
        int elementToDelete = 3; // Element to delete
        int index = -1;

        // Find the index of the element to delete
        for (int i = 0; i < array.length; i++) {
            if (array[i] == elementToDelete) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            // Shift elements to the left starting from the index
            for (int i = index; i < array.length - 1; i++) {
                array[i] = array[i + 1];
            }

            // Adjust the length of the array by creating a new array with one less element
            int[] newArray = new int[array.length - 1];
            System.arraycopy(array, 0, newArray, 0, newArray.length);

            // Print the updated array
            System.out.println("Array after deleting " + elementToDelete + ":");
            for (int value : newArray) {
                System.out.print(value + " ");
            }
        } else {
            System.out.println("Element not found in the array.");
        }
    }
}
    
