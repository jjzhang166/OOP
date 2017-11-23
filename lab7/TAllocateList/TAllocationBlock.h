#ifndef LAB6_TALLOCATIONBLOCK_H
#define LAB6_TALLOCATIONBLOCK_H
#include "/home/bokoch/CLionProjects/OOP/lab7/TList/TList.h"
#include <cstdlib>

class TAllocationBlock {
public:
    TAllocationBlock(size_t size, size_t count);
    void *allocate();
    void deallocate(void *pointer);
    bool has_free_blocks();
    bool Find(void *);
    virtual ~TAllocationBlock();
private:
    size_t _size;
    size_t _count;
    unsigned char *_used_blocks;
    //void **_free_blocks;
    TList<void *> _free_blocks;
    size_t _free_count;

};


#endif //LAB6_TALLOCATIONBLOCK_H