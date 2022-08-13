#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define  fo(i,n)  for(i=0;i<n;i++)
#define  deb(x)  cout<< #x << "=" << x <<endl;
#define  deb2(x,y)  cout<< #x <<"="<< x<<","<< #y << "=" <<y<<endl;
#define  pb push_back
#define  ff first
#define  ss second
#define  pii pair<int,int>
#define  pll  pair<ll,ll>
#define  all(v) v.begin(),v.end()
#define  mem(x) memset(x,0,sizeof(x))
#define  itr(it,a) for(auto it=a.begin(); it!=a.end(); it++)



// Merge  two sorted subarrays

void Merge(int arr[],int low,int high,int mid){

//	int  sz=sizeof(arr)/sizeof(arr[0]);  giving error

	int i=low,j=mid+1;
	int brr[high],k=low;

	while(i<=mid && j<=high){

		if(arr[i]<=arr[j]){
			brr[k]=arr[i];
			i++;k++;
		}
		else{
			brr[k]=arr[j];
			j++;k++;
		}

	}


// Put remaining element of left arr 
	while(i<=mid){
		brr[k]=arr[i];
		i++;k++;
	}

// Put remaining element of right arr 
	while(j<=high){
		brr[k]=arr[j];
		j++;k++;
	}

// Copy brr array to arr	
	for(k=low;k<=high;k++){
		arr[k]=brr[k];
	}
}



void MergeSort(int arr[],int low,int high){

	if(low<high){

		int mid=(low+high)/2;

		MergeSort(arr,low,mid);
		MergeSort(arr,mid+1,high);

		Merge(arr,low,high,mid);


	}

}

void PrintArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}



int main()
{

	int n, i, j;
	cin >> n;

	int arr[n + 1];

	for (i = 0; i < n; i++) {
		cin >> arr[i];
		
	}

	MergeSort(arr, 0,n-1);

	PrintArray(arr, n);

}
