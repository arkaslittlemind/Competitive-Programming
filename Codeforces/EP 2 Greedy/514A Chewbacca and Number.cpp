Question Link- https://codeforces.com/problemset/problem/514/A

// Greedy and Implementation //

#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>

using namespace std;

string str1;
//string str2;

int main()
{
    cin >> str1;
    int len = str1.length();
//   for(int i = 0 ; i < len - 1 ; i++)
//   {
//       int minx = min(str1[i] , str1[2]);
//   }
    for (int i = 1 ; i < len ; i++)
    {
        if (str1[i] >= '5')
        {
            str1[i] = '9' - str1[i] + '0';
        }

    }
    if (str1[0] != '9' && str1[0] >= '5')
        str1[0] = '9' - str1[0] + '0';
    cout << str1 << endl;
    return 0;
}
