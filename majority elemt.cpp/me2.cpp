class solution {
public:
    int majorityElement(vector<int>& nums) {
        int n 
        for(int val : nums) {
            int freq = 0;

            for(int el : nums) {
                if(el == val) {
                    freq++;
                }
            }
            if(freq > n/2){
                return val;
            }
        }
    }
    return -1;  // ye jyada trh use nhi hogi , use hogi jb ye upar wala return nhi krega 
}