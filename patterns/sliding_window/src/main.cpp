#include<iostream>
#include<vector>
using namespace std;

int main(){

   int arr[] = {3,8,2,5,7,6,12};
   int n = sizeof(arr)/sizeof(arr[0]);  //(total size / size of one ele) gives no of elements
   cout<<n<<endl;

   int sum = 0;
    cout<<"Enter the window size."<<endl;
    int w;
    cin>>w;
    int l = 0;
    int r = w-1;    //intially will have r accordingly to array index i.e array 1st index 0
                    //so r-1 will give accurate result

    for(int i=0;i<=r;i++){
        sum+=arr[i];
    }
    
    cout<<"Sum till first window size is"<<endl;
    cout<<sum<<endl;

    int maxSum = sum;   // intially maximum-sum is sum only
                       
    while(r < n-1){
        sum-=arr[l];                    // subtracting the left element from sum or window
        l++;                            // moving window to right
        r++;                            // ""   ""  ""
        sum+=arr[r];                    // now adding new right element to the window
        maxSum = max(maxSum,sum);       // if sum is greater than maxSum then update it
    }
    cout<<"Maximum Subarray Sum"<<endl;
    cout<<maxSum<<endl;

    return 0;
}