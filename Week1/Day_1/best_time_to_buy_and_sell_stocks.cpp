class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //initially set maxprofit to 0 and suppose that besttime to buy stock is very first day.
        int maxprofit =0, bestbuy= prices[0];

        //Traverse in the prices array.
        for(int i=0; i<prices.size(); i++){

        //we have to sell the stock when the price is maximum,apply the maximum logic (prices[i]-bestbuy) is the profit and we have to maximise it.
            if(prices[i] > bestbuy){
                maxprofit = max(maxprofit , prices[i]-bestbuy);
            }
        
        //we have to buy the stocks when the prices is minimum(apply minimum logic).
            bestbuy = min(bestbuy , prices[i]);
        }

        //return the maximum profit obtained.
        return maxprofit;
    }
};

//Time Complexity: O(n)
//Space Complexity: O(1)