class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int&& s=prices.size();
        if (s <= 1) return 0;
        int buy = prices[0], sell=0;
        for (int i = 1; i < s; i++) {
            buy = min(buy, prices[i]);
            sell = max(sell, prices[i] - buy);
 //           cout<<buy<<"|"<<sell<<endl;          
        }
        return sell;
    }
}; 
