#ifndef CONTACT_H
#define CONTACT_H

using namespace std;

class Contact
{
    public:
        Contact();
        Contact(string N, long num);
        long getNumber();
        string getName();
        bool equals(Contact b);
        virtual ~Contact();
    protected:
    private:
        string Name;
        long Number;
};

#endif // CONTACT_H
