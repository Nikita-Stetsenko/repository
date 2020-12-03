int main()
{
	char equation;
	char tru;
	int m = 2;
	int k = 4;
	int n = 6;
	if (k < m < n) {
		equation = tru;
	}
	if (k > m) {
		m += k;
	}
	if (m > n) {
		n += m;
	}
	return 0;
}