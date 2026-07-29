class MyCircularDeque {
public:
vector<int>arr;
    int r=0;
    MyCircularDeque(int k) {
        r=k;

    }
    
    bool insertFront(int value) {
        if(arr.size()>=r){
            return false;
        }
        arr.insert(arr.begin(),value);
        return true;
    }
    
    bool insertLast(int value) {
        if(arr.size()>=r){
            return false;
        }
        arr.push_back(value);
        return true;
    }
    
    bool deleteFront() {
        if(arr.empty()){
            return false;
        }
        
            arr.erase(arr.begin());
            return true;
    }
    
    bool deleteLast() {
        if(arr.empty()){
            return false;
        }
            arr.erase(arr.end());
            return true;
    }
    
    int getFront() {
        if(arr.empty()){
            return -1;
        }
        return arr[0];
    }
    
    int getRear() {
        if(arr.empty()){
            return -1;
        }
        return arr[arr.size()-1];
        
    }
    
    bool isEmpty() {
        if(arr.empty()){
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(arr.size()==r){
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */