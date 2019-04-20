#include <bits/stdc++.h>

using namespace std;
long long array_sum(long long arr[],int s)
{
    long long sum=0;
    for(int i=0;i<s;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int arr_max_pos(long long arr[])
{
    long long m=arr[0];
    int l=0;
    if(m<arr[1])
    {
        m=arr[1];
        l=1;
    }
    if(m<arr[2])
    {
        l=2;
    }
    return l;
}
long long array_sum_pre(long long arra_sum,int pos,long long arr[])
{
    return arra_sum-arr[pos];
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    long long arr_one[a];
    long long arr_two[b];
    long long arr_three[c];
    for(int i=a-1;i>=0;i--)
    {
        cin>>arr_one[i];
    }
    for(int i=b-1;i>=0;i--)
    {
        cin>>arr_two[i];
    }
    for(int i=c-1;i>=0;i--)
    {
        cin>>arr_three[i];
    }
    long long arr[3];
    long long res;
    arr[0]=array_sum(arr_one,a);
   // cout<<arr[0]<<endl;
    arr[1]=array_sum(arr_two,b);
   // cout<<arr[1]<<endl;

    arr[2]=array_sum(arr_three,c);
   // cout<<arr[2]<<endl;
    for(;;){
        if(arr[0]==0)
        {
            res=0;
            break;
        }
        if((arr[0]==arr[1])&& (arr[0]==arr[2]))
        {
           // cout<<a;
            res=array_sum(arr_one,a);
            break;
        }
        else
        {
            int max_pos=arr_max_pos(arr);
            if(max_pos==0)
            {
                a--;
                arr[0]=array_sum_pre(arr[0],a,arr_one);
               // cout<<"arr 0 reduced "<<arr[0]<<endl;
            }
            else if(max_pos==1)
            {
               b--;
               arr[1]=array_sum_pre(arr[1],b,arr_two);
                //cout<<"arr 1 reduced "<<arr[1]<<endl;
            }
            else
            {
                c--;
                arr[2]=array_sum_pre(arr[2],c,arr_three);
                 //cout<<"arr 2 reduced "<<arr[2]<<endl;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}
