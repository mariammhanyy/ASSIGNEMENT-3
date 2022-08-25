void merge_sort(vector<int>& arr) {
    if (arr.size() <= 1) return;

    int mid = arr.size() / 2;
    vector<int> left(arr.begin(), arr.end() - mid);
    vector<int> right(arr.begin() + mid, arr.end());

    merge_sort(left);
    merge_sort(right);
    merge(left, right, arr);
}
void merge(vector<int>& left, vector<int>& right, vector<int>& results)
{
    int L_size = left.size();
    int R_size = right.size();
    int i = 0, j = 0, k = 0;
    
    while (j < L_size && k < R_size)
    {
        if (left[j] < right[k]) {
            results[i] = left[j];
            j++;
        }
        else {
            results[i] = right[k];
            k++;
        }
        i++;
    }
    while (j < L_size) {
        results[i] = left[j];
        j++; i++;
    }
    while (k < R_size) {
        results[i] = right[k];
        k++; i++;
    }
}