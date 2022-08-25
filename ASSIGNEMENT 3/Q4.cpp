void Quicksort(vector<int>& v, int start, int end) {

	if (start < end) {
		int p = Partition(v, start, end);
		Quicksort(v, start, p - 1);
		Quicksort(v, p + 1, end);
	}

}

void PrintVector(vector<int> v) {
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << "\n\n";
}