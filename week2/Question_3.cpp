#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Login{
private:
string password;
void key() const
{
    cout<<"password is "<<password<<endl;
}
public:
string mail;
Login()
{

}
void setPassword(string a)
{
    this->password=a;
}
 Login(string mail,string password)
 {
    this->mail=mail;
    this->password=password;
 }
 void getPassword() const
 {
    key();
 }
 void getCredentials() const {
        cout << "Mail: " << this->mail << endl;
        getPassword();
 }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Login login1;
    login1.mail = "user1@example.com";
    login1.setPassword("default_password");
    cout << "Method 1: Using default constructor and setter method" << endl;
    login1.getCredentials();
    cout << endl;

    Login login2("user2@example.com", "secure_password");
    cout << "Method 2: Using parameterized constructor" << endl;
    login2.getCredentials();
    cout << endl;

    Login login3("user3@example.com", "initial_password");
    cout << "Method 3: Creating object and modifying it" << endl;
    login3.setPassword("updated_password");
    login3.getCredentials();
    cout << endl;

    return 0;
}