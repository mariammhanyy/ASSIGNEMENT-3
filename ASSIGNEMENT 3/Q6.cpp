void radix_sort(vector<int>& arr)
{
	
	int sz = arr.size();

	
	int max_val = *max_element(arr.begin(), arr.end());

	
	int d = digits(max_val);

	node** bins;

	

	bins = new node * [10];

	
	for (int i = 0; i < 10; i++)
		bins[i] = NULL;

	
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < sz; j++) 
			insert(bins[(arr[j] / (int)pow(10, i)) % 10],
				arr[j]);

		int x = 0, y = 0;
		

		while (x < 10) {
			while (bins[x] != NULL)
				arr[y++] = del(bins[x]);
			x++;
		}
	}
}


void print(vector<int> arr)
{
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;
}
