class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        int n = position.size();
        stack<double> st;
        for(int i=0; i<n; i++)
        {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());
        for(auto car : cars)
        {
            double time = (double)(target - car.first) / car.second;
            if(st.empty() || time > st.top())
            {
                st.push(time);
            }
        }
        return st.size();
    }
};
