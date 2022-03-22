#include <iostream>
#include <string>
using namespace std;

int main(){
    string chat;
    int add = 0;
    int remove = 0;
    int traffic = 0;
    while (true){
        getline(cin, chat);
        if (chat[0]=='\0') break;
        if (chat[0] == '+'){
            add++;
        }
        else if (chat[0] == '-'){
            remove++;
        }
        else {
            int n = chat.size();
            for (int i=0; i < n; i++) {
                if(chat[i] == ':'){
                    traffic += (n - i - 1) * (add - remove);
                    break;
                }
            }
        }
    }
    cout << traffic << endl;
    return 0;
}