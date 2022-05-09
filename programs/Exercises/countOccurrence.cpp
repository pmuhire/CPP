#include <iostream>
using namespace std;

int countOccurrences(long int x, int d)
{
	int count = 0; 
	while (x!=0)
	{
		if (x%10 == d)
		   count++;
		x = x/10;
	}
    // cout<<"D: "<<d<<"Count: "<<count<<endl;
	return count;
}

int maxOccurring(long int x)
{
if (x < 0)
	x = -x;

int result = -1; 
int max_count = 0; 

for (int d=0; d<=9; d++)
{
	int count = countOccurrences(x, d);
     cout<<"Count: "<<count<<"Max_count: "<<max_count<<endl;
	if (count >= max_count)
	{
		max_count = count;
		result = d;
	}else if(count==max_count)
    {
        result=-1;
    }
    cout<<max_count<<" "<< result<<" "<<count<<" "<<d<<endl;

    
}
return result;
}
int main()
{
	long int x = 1223355;
	cout << "Max occurring digit is " << maxOccurring(x);
	return 0;
}
