class StockSpanner {
public:
    StockSpanner() {

    }

    int next(int price) {
        int c=0;
        if(s.empty())
        {
            s.push(price);
            m[price]=1;
        }
        else
        {
            while(!s.empty() && price>=s.top())
            {
                c+=m[s.top()];
                s.pop();
            }
            m[price]=c+1;
            s.push(price);
        }
        return m[price];
    }
private:
    stack<int> s;
    unordered_map<int,int> m;
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
