//  https://www.geeksforgeeks.org/quick-sort/

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



int Partition(int arr[], int low, int high) {

	int pivot = arr[high];

	int c = low-1;

	for (int i = low; i < high; i++) {

		if (arr[i] < pivot) {
			c++;
			swap(arr[i], arr[c]);
		}
	}

	swap(arr[c + 1], arr[high]);

	return c + 1;
}


void QuickSort(int arr[], int low, int high) {

	if (low < high) {

		int pi = Partition(arr, low, high);

		QuickSort(arr, low, pi - 1);

		QuickSort(arr, pi + 1, high);
	}
};


void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
};




int main()
{
	int n, i;
	cin >> n;
	int arr[n + 1];

	for (i = 0; i < n; i++)cin >> arr[i];

	QuickSort(arr, 0, n - 1);

	printArray(arr, n);
}
