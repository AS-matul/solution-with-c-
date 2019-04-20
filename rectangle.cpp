#include <bits/stdc++.h>

using namespace std;

int largestRectangle(int arr[], int n)
{
	stack<int> s;
	int current_max_area = 0;
	int topp;
	int area_with_top;
	int i = 0;
	while (i < n)
	{
		if (s.empty() || arr[s.top()] <= arr[i])
			s.push(i++);
		else
		{
			topp = s.top();
			s.pop();
			area_with_top = arr[topp] * (s.empty() ? i :
								i - s.top() - 1);
			if (current_max_area < area_with_top)
				current_max_area = area_with_top;
		}
	}


	while (s.empty() == false)
	{
		topp = s.top();
		s.pop();
		area_with_top = arr[topp] * (s.empty() ? i :
								i - s.top() - 1);

		if (current_max_area < area_with_top)
			current_max_area = area_with_top;
	}

	return current_max_area;
}

int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	int res=largestRectangle(arr, i);
	cout<<res<<endl;
	return 0;
}
