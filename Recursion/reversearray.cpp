class Solution{
public:
    void helper(int i, int arr[], int n) {
        if (i >= n / 2)
            return;

        swap(arr[i], arr[n - i - 1]);
        helper(i + 1, arr, n);
    }

    void reverse(int arr[], int n) {
        helper(0, arr, n);
    }
};
