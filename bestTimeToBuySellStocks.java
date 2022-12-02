public class bestTimeToBuySellStocks {
    public static int maxProfit(int[] prices) {
        int maxPro = 0;
        int minPrice = Integer.MAX_VALUE;
        int N = prices.size();
        for(int i=0; i<N; i++) {
            int profit = prices[i] - minPrice;
            minPrice = Math.min(minPrice, prices[i]);
            maxPro = Math.max(maxPro, profit);
        }
        return maxPro;
    }

    public static void main(String[] args) {
        int[] prices = {7,1,5,3,6,4};
        System.out.println(maxProfit(prices));
    }
}