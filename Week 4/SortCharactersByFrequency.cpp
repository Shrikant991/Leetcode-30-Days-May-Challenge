class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char,int>map;
        for(auto i:s)
        {
            map[i]++;
        }
        vector<pair<char,int>>vec;
        for(auto i:map)
        {
            vec.push_back(make_pair(i.first,i.second));
        }
        sort(vec.begin(),vec.end(),[](pair<char,int> &a,pair<char,int> &b){
            return a.second>b.second;
        });
        string t="";
        for(auto i:vec)
        {
            while(map[i.first]--)
            t+=i.first;
        }
        return t;
    }
};
