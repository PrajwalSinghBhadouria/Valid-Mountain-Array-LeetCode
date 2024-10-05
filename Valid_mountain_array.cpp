class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        map<int, int> mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]=i;
        }
        int m = *max_element(arr.begin(),arr.end());
        int index = mp[m];
        if(index==0 || index==arr.size()-1){
            return false;
        }
        for(int i=index; i>=1; i--){
            if(arr[i-1]>arr[i]){
                return false;
            }
            else if(arr[i]==arr[i-1]){
                return false;
            }
        }
        for(int i=index; i<arr.size()-1; i++){
            if(arr[i]<arr[i+1]){
                return false;
            }
            else if(arr[i]==arr[i-1]){
                return false;
            }
        }
        return true;
    }
};
