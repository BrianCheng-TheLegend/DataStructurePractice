#ifndef BAG_H
#define BAG_H
class Bag
{
    public:
    //constructor and destructor
    Bag(int bagCapacity=10);
    ~Bag();

    int Size() const;
    bool IsEmpty() const;
    int Element() const;

    void Push(const int);
    void Pop();

    private:

    int *array;
    int capacity;
    int top;
};
#endif