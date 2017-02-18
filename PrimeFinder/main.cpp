#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main(){ 
	int i, N;
	int count = 0;
	cout << "To what number would you like to find all the primes? ";
	cin >> N;
	vector<int> a(N);
	const clock_t start = clock();
	for(i = 0; i < N; i++)
		a[i] = i;
	for (i = 2; i < N; i++)
		a[i] = 1;
	for (i = 2; i < N; i++)
		if (a[i])
			for (int j = i; j*i < N; j++) 
				a[i*j] = 0;
	for (i = 2; i < N; i++)
		if(a[i]){
			if(count++%10 == 0)
				cout << endl;
			else
				cout << " " << i;
		}
cout << " It took " << ((clock() - start)/(double)CLOCKS_PER_SEC) << " seconds to finish finding all " << count <<" primes.";
return 0;
}