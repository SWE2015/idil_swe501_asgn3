#ifndef UNSORTEDLIST_H
#define UNSORTEDLIST_H

#define MAX_ITEMS 64

#include "Contact.h"

class UnsortedList
{
    public:
        UnsortedList();
        void makeEmpty();
        bool isFull();
        int lengthIs();
        void RetreiveItem(Contact & item, bool & found);
        void insertItem(Contact item);
        void deleteItem(Contact item);
        void resetList();
        Contact getNextItem();
        virtual ~UnsortedList();
    protected:
    private:
        int length;
        int currentPos;
        Contact info[MAX_ITEMS];
        const static Contact err;
};

#endif // UNSORTEDLIST_H
