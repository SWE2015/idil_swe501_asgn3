#include <iostream>
#include "UnsortedList.h"

#include "Contact.h"

using namespace std;

int main()
{
    // declare an unsorted list object to hold contact objects
    UnsortedList myContacts;

    // create 10 contact objects to be kept in the unsorted list
    Contact Ali("Ali Sever", 5336542314);
    Contact Veli("Veli Pak", 5338754634);
    Contact Mehmet("Mehmet Ezer", 5339890543);
    Contact Melih("Melih Gun", 5325438997);
    Contact Ceren("Ceren Gun", 5322335268);
    Contact Deniz("Deniz Gurata", 5337550987);
    Contact Can("Can Buyukbas", 5330965534);
    Contact Burak("Burak Benli", 5367709943);
    Contact Sinan("Sinan Kardan", 5391123432);
    Contact Mert("Mert Buyukbas", 5339985643);

    // insert contacts to the unsorted list
    myContacts.insertItem(Ali);
    myContacts.insertItem(Veli);
    myContacts.insertItem(Mehmet);
    myContacts.insertItem(Melih);
    myContacts.insertItem(Ceren);
    myContacts.insertItem(Deniz);
    myContacts.insertItem(Can);
    myContacts.insertItem(Burak);
    myContacts.insertItem(Sinan);
    myContacts.insertItem(Mert);

    // loop through unsorted list with getNextItem method and print name and number of each contact
    for(int i=0; i<myContacts.lengthIs(); i++){
        Contact temp = myContacts.getNextItem();
        cout << temp.getName() << " "<< temp.getNumber() << endl;
    }

    // try the retreive item method
    bool found;

    myContacts.RetreiveItem(Ali, found);

    cout << found << endl;

    // delete an item
    myContacts.deleteItem(Mehmet);

    // reset list and loop from the beginning again to check if delete item method worked as planned
    myContacts.resetList();
    for(int i=0; i<myContacts.lengthIs(); i++){
        Contact temp = myContacts.getNextItem();
        cout << temp.getName() << " "<< temp.getNumber() << endl;
    }
}

