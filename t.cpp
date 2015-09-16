#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <math.h>
#include <numeric>

using namespace std;


class AnArray
{
public:
	int solveProblem(vector <int> A, int K)
	{
		long count=0;
		vector<int> b;
		
		sort(A.begin(),A.end());		

		for(int i=0;i<b.size();i++)
		{
			for(int j=0;i<b.size();j++)
			{
				for(int k=0;i<b.size();k++)
				{
					if(i==j)
						continue;
					if(j==k)
						continue;
					if(i==k)
						continue;
					long res = b[i]*b[j]*b[k];

					if((b[i]*b[j]*b[k]) % K == 0)
						count++;

				}
			}
		}
		return count;
	}

};