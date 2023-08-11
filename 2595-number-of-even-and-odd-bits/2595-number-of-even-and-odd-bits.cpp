class Solution {
public:
    vector<int> evenOddBit(int n) {
 string bin;
        while(n){
            bin+=to_string(n%2);
            n/=2;
        }
        vector<int> res(2);
        for(int i = 0; i < bin.size(); i++){
            if(bin[i] == '1'){
                if(!(i&1)) res[0]++;
                else res[1]++;
            }
        }
        return res;
    }
};