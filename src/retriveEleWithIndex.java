import java.util.Scanner;

public class retriveEleWithIndex {
    public static void main(String[] args) {
        int[] a = {1, 2, 3, 4, 5, 44, 66, 77, 88};
        Scanner s = new Scanner(System.in);
        System.out.println("enter the index whose element you want to retrieve");
        int index = s.nextInt();
        if(index<0||index>a.length)
        {
            System.out.println("invalid index");
        }

            for (int i = 0; i < a.length; i++) {
                if (i == index) {
                    System.out.println("element at index " + index + " is " + a[i]);
                }


            }
        }

}

