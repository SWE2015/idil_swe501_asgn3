#include <iostream>
#include "UnsortedList.h"

#include "Contact.h"

#define MAX_ITEMS 64


using namespace std;

const Contact UnsortedList::err = Contact("Error!", 0);

UnsortedList::UnsortedList()
{
    length = 0;
    currentPos = 0;
    Contact info[MAX_ITEMS];
}

void UnsortedList::makeEmpty()
{
    length = 0;
}

bool UnsortedList::isFull()
{
    return(length==MAX_ITEMS);
}

int UnsortedList::lengthIs()
{
    return length;
}

void UnsortedList::RetreiveItem(Contact & item, bool & found)
{
    int i = 0;
    while(!info[i].equals(item) && i<length){
        i++;
    }
    if(info[i].equals(item)){
        found = true;
        cout << "item found in location " << i+1 << endl;
    } else{
        found = false;
        cout << "item not found" << endl;
    }
}

void UnsortedList::insertItem(Contact item)
{
    info[length] = item;
    length ++;
}

void UnsortedList::deleteItem(Contact item){
    int location = 0;
    while(!info[location].equals(item) && location<length){
        location++;
    }
    if(info[location].equals(item)){
        info[location]=info[length-1];
        length--;
    }else{
        cout << "item to be deleted could not be found" << endl;
    }
}

void UnsortedList::resetList()
{
    currentPos = 0;
}

Contact UnsortedList::getNextItem()
{
    while(currentPos<length)
    {
        currentPos++;
        return info[currentPos-1];
    }
    return err;

}


UnsortedList::~UnsortedList()
{
    //dtor
}
