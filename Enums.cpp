#include <iostream>
using namespace std;

enum enCOLOR { RED, GREEN ,Yellow, BLUE };
enum enGENDER { Male , Female };
enum enMaritalSTATUS { Single , Married , Divorced , Widowed };


struct stAddress
{
    string Streetname;
    string Buildingo;
    string POBox;
    string ZIPCode;
};

struct stContactInfo
{
    string Phone;
    string Email;
    stAddress Address;
};

struct stPerson
{
    string FirstName;
    string LastName;

    stContactInfo ContactInfo;

    enMaritalSTATUS MaritalStatus;
    enGENDER Gender;
    enCOLOR FavoriteColor; 

};

int main()
{
    stPerson Person1;
    Person1.FirstName = "salia";
    Person1.LastName = "brik";
    Person1.FavoriteColor = enCOLOR :: BLUE;
    Person1.ContactInfo.Address.Buildingo = "123";
    Person1.ContactInfo.Address.POBox = "123hjdhd";
    Person1.ContactInfo.Address.Streetname = "123";
    Person1.ContactInfo.Address.ZIPCode = "123";
    Person1.ContactInfo.Email = "sisi@gmail.com";
    Person1.ContactInfo.Phone = "065997885544";
    Person1.Gender = enGENDER ::Female;
    Person1.MaritalStatus = enMaritalSTATUS :: Married;


    cout << Person1.LastName << endl;
    cout << Person1.FirstName << endl;
    cout << Person1.FavoriteColor << endl;
    cout << Person1.ContactInfo.Address.Buildingo << endl;
    cout << Person1.ContactInfo.Address.POBox << endl;
    cout << Person1.ContactInfo.Address.Streetname << endl;
    cout << Person1.ContactInfo.Address.ZIPCode << endl;
    cout << Person1.ContactInfo.Email << endl;
    cout << Person1.ContactInfo.Phone << endl;
    cout << Person1.FavoriteColor << endl;

    return 0;
}