//Quick-sort Algorithim
// Black and Blue are two identifier acting as a pointer for the array.
#include<bits/stdc++.h>
using namespace std;

int Divide(int ar[],int start,int end)
{
    int blue  = start;     //blue pointer here  will stick to the first
    for(int black=start;black<end;black++)
    {
        if(ar[black]<ar[end])
        {
            swap(ar[blue],ar[black]);      //swap the valus when any lesser value found in array than pivot
            blue+=1;                     //increment the blue pointer then.
        }
    }

    swap(ar[blue],ar[end]);
    return blue;                //The correct position of the pivot value
}

void Quick_sort(int ar[],int start, int end)    //end is always a pivot element
{
    if(start<end)   //Base condition for quick-sort.
    {
        //finding correct position of piviot
        int fix = Divide(ar,start,end);    // Dividing the Array  (Fix represent the fix index whose value is at correct position)
        Quick_sort(ar,start,fix-1);    //left side ,dividing the values across the pivot and then calling 
        Quick_sort(ar,fix+1,end);     //Right side, 

    }
}

int main()
{
    int n; //Taking Elements
    cout<<"Enter the Size of Array -:"<<endl;
    cin>>n;
    int ar[n];  //array size n
    for(int i=0;i<n;i++)     //taking values in array
        {
            cout<<"Enter Array's ["<<i<<"] Element-:";
            cin>>ar[i];
        }
    
    Quick_sort(ar,0,n-1);    //Calling Quick_sort function   

    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";

    return 0;
    
}


/*
Best Time Complexity -> k = log2n || (log(base 2)  n)
Worst time complexity -> n(n+1)/2  -> O(n^2)
*/