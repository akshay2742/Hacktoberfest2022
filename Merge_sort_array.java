//Inplace merging of two sorted arrays
import java.io.*;
class Merge_sort_array
{
    public static void main(String args[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int a1,m,n,b1;
        a1=Integer.parseInt(br.readLine());
        b1=Integer.parseInt(br.readLine());
        m=Integer.parseInt(br.readLine());
        n=Integer.parseInt(br.readLine());
        int a[]=new int[a1];
        int b[]=new int[b1];
        int i,j=0,k;
        for(i=0;i<a1;i++)
        {
            a[i]=Integer.parseInt(br.readLine());  
        }
        for(i=0;i<b1;i++)
        {
            b[i]=Integer.parseInt(br.readLine());  
        }
        for(i=m;i<a1;i++)
        {
            a[i]=b[j];
            j++;
        }
        for(i=1;i<a1;i++)
        {
            k=a[i];
            j=i-1;
            while(j>=0 && a[j]>k)
            {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = k;
        }
        for(i=0;i<m+n;i++)
        {
            System.out.print(a[i]+" ");
        }
    }
}
