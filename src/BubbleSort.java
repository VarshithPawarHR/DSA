public class BubbleSort {
    public static void main(String[] args) {

        int [] a ={2,-6,77,88,-9,-11,55};

        for( int unsortedindex = a.length-1;unsortedindex>0;unsortedindex--)
        {
            for(int i=0;i<unsortedindex;i++)
            {
                if(a[i]>a[i+1]) //decreasinhg if(a[i]<a[i+1])
                {
                    swap(a, i,i+1);
                }
            }
        }

        for (int i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
    }
    public static void swap(int [] a, int i, int j)
    {
        if(i==j)
        {
            return;
        }
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }



}
