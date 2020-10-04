import java.io.*;
class prog{
//function to find majority element in an array
static void findmajority(int arr[],int n)
{
int maxcount=0;
int index=-1;//sentinels
for(inti=0;i<n;i++)
{
int count =0;
for(int j=0;j<n;j++)
{
if(arr[i]==arr[j])
count++;
}
//update maxcount if count count of current element is greater 
if(count> naxcount)
{
maxcount= count;
index =i;
}
}
//if maxcount greater than n/2
//return the corresponding element
if(maxcount >n/2)
system.out.println(arr[index]);
else
system.out.println("no majority element");
}
//driver code
public ststic void ,main(string[]args){
int arr[]={1,1,1,1,3,5,1,2};
int n=arr.length;
findmajority(arr,n);
}
}
