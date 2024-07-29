class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int buy = INT_MAX;
        int day =0;
        int sell = INT_MIN;
      
//         for(int i =0;i<prices.size();i++){
            
//             if(prices[i]<=buy){
//                 buy = prices[i];
//                 day = i;
//             }
            
//         }
        
//         if(day==prices.size()-1){return 0;}
        
        
//         for(int i=0;i<prices.size();i++){
            
//              if(prices[i]>sell&&prices[i]>buy&&i>day){

//                sell = prices[i];
             
//              }
          
            
        
//         }
        
        
        
//           long long ans = sell - buy;
//         // if(ans<=0){return 0;}
        
        
        
        for(int i=0;i<prices.size();i++){
         
           buy = min(buy,prices[i]);
            sell = max(sell,prices[i]-buy);
        
        }
        
        return sell;
        
        
    
        
        
    }     
    
};