class PeekingIterator : public Iterator {
private:
    int nextElement;
    bool has_next;

public:
    PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        has_next = Iterator::hasNext();
        if(has_next)
            nextElement = Iterator::next();
    }

    int peek() {
        return nextElement;
    }

    int next() {
        int current = nextElement;

        has_next = Iterator::hasNext();
        if(has_next)
            nextElement = Iterator::next();

        return current;
    }

    bool hasNext() const {
        return has_next;
    }
};