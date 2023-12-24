import java.util.Scanner;
//creating an array and finding the index when you enter the number//

public class Test {
    public static void main(String[] args) {
        int[] intArray = new int[7];
        intArray[0] = 56;
        intArray[1] = 45;
        intArray[2] = -15;
        intArray[3] = 5;
        intArray[4] = 7;
        intArray[5] = 567;
        intArray[6] = 67;

        for (int i = 0; i < 7; i++) {
            System.out.println(intArray[i]);
        }
        Scanner s = new Scanner(System.in);
        System.out.println("enter the number");
        int num = s.nextInt();
        int index = -1;
        for (int i = 0; i < 7; i++) {
            if (intArray[i] ==num)
            {
                index =i;
                break;

            }



        }
        System.out.println("index " +  index);
    }
}