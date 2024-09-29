class AllOne {
public:
    unordered_map<short, unordered_set<string>> strs;
    priority_queue<short> lo, hi;
    unordered_map<string, short> cnt;
    AllOne() { ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); }

    void inc(const string& key) {
        if (cnt[key]++)
            strs[cnt[key] - 1].erase(key);
        strs[cnt[key]].insert(key), lo.push(-cnt[key]), hi.push(cnt[key]);
    }

    void dec(const string& key) {
        strs[cnt[key]--].erase(key);
        if (cnt[key])
            strs[cnt[key]].insert(key), lo.push(-cnt[key]), hi.push(cnt[key]);
    }

    string getMaxKey() {
        while (hi.size() && strs[hi.top()].empty())
            hi.pop();
        return hi.size() ? *strs[hi.top()].begin() : \\;
    }

    string getMinKey() {
        while (lo.size() && strs[-lo.top()].empty())
            lo.pop();
        return lo.size() ? *strs[-lo.top()].begin() : \\;
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */