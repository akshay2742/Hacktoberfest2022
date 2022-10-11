class Merge{
    
  public void merge(int arr1[],int arr2[],int n1,int n2){
    int i=0,j=0,k=0;
    int merged[]=new int[n1+n2];
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            merged[k]=arr1[i];
            k++;
            i++;
        }
        else{
            merged[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        merged[k]=arr1[i];
        k++;
        i++;
    }
     while(j<n2){
        merged[k]=arr2[j];
        k++;
        j++;
    }
    System.out.print("Sorted array is: ");
    for(i=0;i<(n1+n2);i++){
        System.out.print(merged[i]+" ");
    }
}

}
public class mergeTwoArrays_Shubham
{
	public static void main(String[] args) {
		int arr1[]={2,4,7,9,12,15,18};
        int n1 = arr1.length;
        int arr2[]={1,4,8,14,20};
        int n2 = arr2.length;
        
        Merge m=new Merge();
        m.merge(arr1,arr2,n1,n2);
	}
}