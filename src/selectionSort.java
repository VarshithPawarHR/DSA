public class selectionSort {
    public static void main(String[] args) {
        int [] a ={1,-2,55,66,-3,-88,22,33};

        for(int lastunsortedarray = a.length -1; lastunsortedarray >0;lastunsortedarray--){
            int largest =0;
            for (int i = 0; i<=lastunsortedarray;i++)
            {
                if (a[i]>a[largest])
                {
                    largest = i;

                }
            }
            swap(a,largest,lastunsortedarray);
        }
        for (int i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }



    }
    public static void swap(int []a , int i ,int j)
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
