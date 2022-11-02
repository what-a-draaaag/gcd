#include <cassert>
#include <iostream>
#include <map>
using namespace std;
int gcd(int a, int b) {
	if (a == 0) return b;
	return gcd(b % a, a);
}

int gcdExt(int a, int b, int& x, int& y,int oa,int ob) {
	if (a == 0) { x = 0; y = 1; return b; }
	auto res = gcdExt(b % a, a, y, x,oa,ob);
	x -= (b / a) * y;
	if (x*oa+y*ob==gcd(oa,ob))
		cout << x << " " << y << endl;
	return res;
}
int main() {
	int a, b, x, y;
	cin >> a >> b;
	gcdExt(a, b, x, y,a,b);
	return 0;
}
