//  https://www.geeksforgeeks.org/counting-sort/


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

int range = 0;


void CountSort(int arr[], int n) {

	int count[range + 1], sortArr[n];


//	initialize count array as 0
	for (int i = 0; i <= range; i++)count[i] = 0;


//  count array , count individual element of arr
	for (int i = 0; i < n; i++) {

		count[arr[i]]++;
	}


//	Change count[i] so that count[i] now contains actual position
	 
	for (int i = 1; i <= range; i++) {

		count[i] += count[i - 1];
	}



	for (int i = n - 1; i >= 0; i--) {

		count[arr[i]]--;
		sortArr[count[arr[i]]] = arr[i];
	}

// Copy the output array to arr, so that arr now
	// contains sorted characters

	for (int i = 0; i < n; i++) {
		arr[i] = sortArr[i];
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
		range = max(range, arr[i]);
	}

	CountSort(arr, n);

	PrintArray(arr, n);

}
