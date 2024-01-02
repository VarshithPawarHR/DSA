import java.util.Scanner;

public class insertAtSpecificIndex {
    public static void main(String[] args) {
        int [] a =  {1,2,3,4,5,6,23,4,5};

        Scanner s = new Scanner(System.in);
        System.out.println("enter the index you want to update");

        int index = s.nextInt();
        if(index<0||index>a.length)
        {
            System.out.println("index out of bound");
        }
        else {
            System.out.println("enter the number you want to update");
            int ele = s.nextInt();
            a[index] = ele;

        }
        System.out.println("array elements are:");
        for(int i =0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
    }

}
