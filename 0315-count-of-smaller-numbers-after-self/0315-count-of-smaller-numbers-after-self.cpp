class Solution {
public:
    vector<int> result;

    void merge(vector<pair<int,int>>& arr, int left, int mid, int right){
        vector<pair<int,int>> temp;
        int i = left, j = mid + 1;
        int rightCount = 0;

        while(i <= mid && j <= right){
            if(arr[i].first <= arr[j].first){
                result[arr[i].second] += rightCount;
                temp.push_back(arr[i]);
                i++;
            } else {
                rightCount++;  // one smaller element found
                temp.push_back(arr[j]);
                j++;
            }
        }

        while(i <= mid){
            result[arr[i].second] += rightCount;
            temp.push_back(arr[i]);
            i++;
        }

        while(j <= right){
            temp.push_back(arr[j]);
            j++;
        }

        for(int k = 0; k < temp.size(); k++){
            arr[left + k] = temp[k];
        }
    }

    void divide(vector<pair<int,int>>& arr, int left, int right){
        if(left >= right) return;

        int mid = left + (right - left) / 2;
        divide(arr, left, mid);
        divide(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }

    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        result.resize(n, 0);

        vector<pair<int,int>> arr;
        for(int i = 0; i < n; i++){
            arr.push_back({nums[i], i});
        }

        divide(arr, 0, n - 1);
        return result;
    }
};