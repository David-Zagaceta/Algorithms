#include <iostream>

// Of two natural number a & b, this euclidean algo. can calculate their GCD, g. g is the largest number that divides into a & b w/o leavin a remainder. g = gcd(a,b).
void euclid_algo(int, int);
int euclid_algo_r(int, int);

int main(){

	// prompt user for two numbers
	int a,b;
	std::cout << "enter two integers: ";
	std::cin >> a >> b;
	euclid_algo(a,b);	

};

void euclid_algo(int a, int b){
	if (a < b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	std::cout << "GCD(" << a <<","<< b << ")=" << euclid_algo_r(a, b) << std::endl;

}

int euclid_algo_r(int a, int b){
	if (a%b == 0){return b;}
	else{
		return euclid_algo_r(b, a%b);
	}
}
