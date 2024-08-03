//dependencies
#include <iostream>
#include <array>
#include <string>

using namespace std;

#define INITIAL_VAL 0
#define EMPTY_VAL 0
#define MAX_ARR_SIZE 100
#define RETURN_VAL 0

//operator
#define ADD_REC_VAL     1
#define FETCH_REC_VAL   2
#define QUIT_VAL        3
//enum
enum class option{

AddRecord = 1,
FetchRecord = 2,
Quit = 3,
Invalid

};
class userinfo{

    public:
        string  UserName;
        int     UserAge;

};

//overloading operator
istream& operator>>(istream& in, option& options) {
    int value;
    if (in >> value) {
        switch (value) {
            case ADD_REC_VAL:
                options = option::AddRecord;
                break;
            case FETCH_REC_VAL:
                options = option::FetchRecord;
                break;
            case QUIT_VAL:
                options = option::Quit;
                break;
            default:
                options = option::Invalid;
                break;
        }
    }
    return in;
}

//class of menu (for printing menu and taking option from user)
class menu{
    public:
    void printTitle(void)
    {
        cout << "****************************************** \n ******* User SignUp Application *******\n****************************************** \n";
    }

    void printMenu(void)
    {
        cout << "\nPlease select an option: \n";
        cout << "1: Add Record \n";
        cout << "2: Fetch Record \n";
        cout << "3: Quit \n";

    }
    option GetOption(void)
    {
        option localOption;
        cout << "option: ";
        cin >> localOption;
        return localOption;
    }

};

//class of user (for userinfo: name / age)
class user{

    public:
    //ARRAY OF userinfo CLASS 
        array<userinfo,MAX_ARR_SIZE> usersInfo{};
        //ADD RECORD FUNCTION
        void AddRecord(int index)
        {
            //getting userinfo from user
            cout << "Enter name: ";
            cin >> usersInfo[index].UserName;
            cout << "Enter age: ";
            cin >> usersInfo[index].UserAge;
        }
        //FETCH RECORD FUNCTION
        void FetchRecord(void)
        {
            //taking ID from user as an input
            int ID = INITIAL_VAL;
            cout << "Enter the ID: ";
            cin >> ID;
            if(usersInfo[ID].UserAge != EMPTY_VAL)
            {
                //printing userinfo
            cout << "username: "<< usersInfo[ID].UserName;
            cout <<"\nuserage: "<<  usersInfo[ID].UserAge << "\n\n";
            }
            else{
                //informing user that there is no data msg. 
                cout << "Invalid ID. cuz there is no added data for this id. \n";
            }
        }
        //QUIT FUNCTION
        void Quit(void)
        {
            cout << "...Program termination \n"; 
        }


};

//main entry point
int main(){
    //menu for printing menu and taking option
    menu menu1;
    //user for taking and showing the userinfo
    user userNow;

    option current_options = option::AddRecord;
    
    int current_index = INITIAL_VAL;
    //code
    
    //print "user signup application"
    menu1.printTitle();
    //menu (add record - fetch record - quit)
    while(current_options != option::Quit)
    {
    menu1.printMenu();
    current_options = menu1.GetOption();
    switch(current_options)
    {
        case option::AddRecord  :   userNow.AddRecord(current_index);    current_index++;    break;
        case option::FetchRecord:   userNow.FetchRecord();                                   break;
        case option::Quit       :   userNow.Quit();                                          break;

        default                 : cout << "\n Invalid option.\n";                            break;
    }
    }
    

    return 0;
}