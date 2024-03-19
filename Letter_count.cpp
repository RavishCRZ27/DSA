#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    char s[26]= {"abcdefghijklmnopqrst"};
    getline(cin,str);
    cout << str;
    int arr[26] = {0};
    transform(str.begin(),str.end(),str.begin(),[](unsigned char c){return tolower(c);});
    for(int i=0;i<str.size();i++)
    {
        int t;
        if(str[i]<'a'||str[i]>'z')
            continue;
        t = str[i] - 'a';
        arr[t] +=1;
    }
    for(int i=0;i<26;i++)
    {
        cout << s[i] << ": "<< arr[i] << endl;
    }

}
