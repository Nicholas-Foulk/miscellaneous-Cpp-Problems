//============================================================================
// Name        : SaveThePrisoner.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    int n[t];
    int m[t];
    int s[t];
    for(int a=0;a<t;a++)
    {
        cin>>n[a]>>m[a]>>s[a];
    }
    for(int b=0;b<t;b++)
    {
        //here is the number of loops made if needed
        //int loops;
        //loops = (m[b]/n[b]);
        //here is the offset prisoner we will end with last in the loop, so this plus the inital guy who didnt get candy
        int offset=0;
        offset = (m[b] % n[b]);
        if(!(offset == 0))
         {
          offset--;
        }
        //here is the number of prisoners left to get candy before we get to the end of the loop, without including the first guy
        int prisonleft=0;
        prisonleft = n[b] - s[b];
        //here is the offset minus the number of prisonersleft
        if(prisonleft>offset)
        {
            int result1=0;
            result1= s[b] + offset;
            cout<<"The prisoner with the poisoned candy is "<<result1<<endl;
        }
        else if(prisonleft == offset)
        {
            int result2=n[b];
            cout<<"The prisoner with the poisoned candy is "<<result2<<endl;
        }
        else if(prisonleft < offset)
        {
            int result3=0;
            result3 = offset-prisonleft;
            cout<<"The prisoner with the poisoned candy is "<<result3<<endl;
        }
    }
    return 0;
}
