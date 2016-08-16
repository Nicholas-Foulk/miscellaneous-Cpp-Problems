//============================================================================
// Name        : SpaceStations.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int m;
    int distance[n]; //this is for distance between space city and current city

    cin >> n >> m;
    vector<int> c(m);
    int listofPossibleDistances[n][n];
    for(int c_i = 0;c_i < m;c_i++)
    {
       cin >> c[c_i];
    }

   for(int b = 1; b<n+1; b++) //this for loop is for resetting distance everytime
   {
		for(int d = 0; d<m;d++)
		{
			for(int a = c[0]; a<c[n-1]; a++) //checking the whole array
					{
						listofPossibleDistances[d][b]= abs(b-a);  //here we find the distance of each flatland city to every space station
					}
		}
   }
  //im going to print out the possible distances for testing purposes
   for(int z=0;z<n;z++)
   {
	   for(int y=0;y<m;y++)
	   {
		   cout<<"Outputting all possible distances: "<<listofPossibleDistances[n][m]<<endl;
	   }
   }

   //so here we have our searching of the 2D array and putting the smallest value into a 1D array.
  int smallest = listofPossibleDistances[0][0];
  for( int e = 0; e<m-1;e++)
  {
	  for(int f=0;f<n;f++)
	  {
		  if (listofPossibleDistances [e][f] < smallest)
		  {
			  smallest = listofPossibleDistances [e][f];
		  }
		  distance[e]=smallest;  //here we input the particular distance we found to be smallest into the one dimensional distance array
	  }
  }

  int smallestnumberSecArray = distance[0];
  int finalSmallestNumber = 0;

  for(int g=0;g<n;g++)
  {
	  if(distance[g]<=smallestnumberSecArray)
	  {
		  finalSmallestNumber=distance[g];
	  }
  }

  cout<<"Here is the final smallest number "<<finalSmallestNumber<<" "<<endl;

   return 0;
}
