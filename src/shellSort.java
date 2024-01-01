public class shellSort {
    public static void main(String[] args) {
        int [ ] a = {1,56,-33,4,-5,89,-99};
        for(int gap = a.length/2;gap>0 ;gap/=2)
        {
            for( int i = gap;i<a.length;i++)
            {
                int newele = a[i];
                int j =i;
                while(j>= gap&& a[j-gap] > newele)
                {
                    a[j] =  a[j - gap];
                    j = j - gap;
                }
                a[j] = newele;


            }


        }
        for(int i =0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
    }
}
