class MyHashSet {
public:
    vector<list<int>>HashSet;
    int size;
    MyHashSet() {
        size=100;
        HashSet.resize(size);
    }

    int hash(int key){
        return key%size;
    }

    list<int>::iterator search(int key){
        int i=hash(key);
        return find(HashSet[i].begin(),HashSet[i].end(),key);
    }
    
    void add(int key) {
        if(contains(key))return;
        int i=hash(key);
        HashSet[i].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key))return ;
        int i=hash(key);
        HashSet[i].erase(search(key));        
    }
    
    bool contains(int key) {
        int i=hash(key);
        if(search(key)!=HashSet[i].end())return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */