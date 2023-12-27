public class InsertionSort {
    public static void main(String[] args) {

        int [ ] a = {1,-9,44,23,55,-77,88,34};
        for(int firstunsortedindex = 1; firstunsortedindex<a.length; firstunsortedindex++)
        {
            int newele = a[firstunsortedindex];
            int i;
            for(i = firstunsortedindex;i>0&& a[i-1] > newele;i--)
            {
               a[i] =a[i-1];  //shifting from left to right


            }
            a[i] = newele;
        }
        for (int i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
    }
}
