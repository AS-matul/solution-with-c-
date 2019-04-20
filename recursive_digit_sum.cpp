#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
long long strconvert(char c){
    return c-'0';
}
long long leni(long long i)
{
    long long len = 1;
    if (i > 0) {

        for (len = 0; i > 0; len++) {
            i = i / 10;
        }
    }
    return len;
}
long long summation(long s,long l)
{
    long long sum=0;
    for(long long i=0;i<l;i++){
        sum=sum+s%10;
        s=s/10;
       }
     return sum;
}
int main()
{
    string first_num;
    long long f_sum=0,k;
    cin>>first_num;
    cin>>k;
    for(long long i=0;i<first_num.length();i++)
    {
        f_sum=f_sum+ strconvert(first_num[i]);
    }
    long long after_first=f_sum*k;
    long long sum=after_first;
    long long len= leni(after_first);
    for(long long j=0;;){
        sum=summation(sum,len);
        len=leni(sum);
        if(len==1)
        {
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}
