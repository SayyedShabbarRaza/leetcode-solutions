class MyHashSet {
public:
    vector<int>HashSet;
    int size;
    MyHashSet() {
        size=1e6+1;
        HashSet.resize(size);
    }
    
    void add(int key) {
        HashSet[key]=1;
    }
    
    void remove(int key) {
        HashSet[key]=0;
    }
    
    bool contains(int key) {
        return HashSet[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */