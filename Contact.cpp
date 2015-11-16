#include <iostream>
#include "UnsortedList.h"

#include "Contact.h"

using namespace std;

Contact::Contact()
{
    Name = " ";
    Number = 0;
}

Contact::Contact(string N, long num)
{
    Name = N;
    Number = num;
}

string Contact::getName()
{
    return Name;
}

long Contact::getNumber()
{
    return Number;
}

bool Contact::equals(Contact b)
{
    return(this->Name==b.Name && this->Number == b.Number);
}

Contact::~Contact()
{
    //dtor
}
