
#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long query, operation, num;
    cin >> query;
    vector<string>str;
    str.push_back("");
    string text, temp;
    for(long long i=0; i<query; i++){
        cin >>operation;
        if(operation==1){
            cin >> text;
            temp = str.back();
            temp += text;
            str.push_back(temp);
        }
        else if(operation==2){
            cin >> num;
            temp = str.back();
            long long l = temp.length();
            temp.erase(l-num, num);
            str.push_back(temp);
        }
        else if(operation==3){
            cin >> num;
            temp = str.back();
            cout << temp[num-1] << endl;
        }
        else{
            str.erase(str.end());
        }
    }
    return 0;
}

