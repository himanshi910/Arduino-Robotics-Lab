#include <iostream>
using namespace std;
class robot{
    private:
        int speed;
    public:
        void moveforword(int s){
            speed = s;
            cout<<"Robot is moving forward with speed "<<speed<<endl;
        }
        void movebackword(int s){
            speed = s ;
            cout<<"Robot is moving backward with speed "<<speed<<endl;
        }
        void moveleft(int s){
            speed = s;
            cout<<"Robot is moving left with speed "<<speed<<endl;
        }
        void moveright(int s){
            speed = s;
            cout<<"Robot is moving right with speed "<<speed<<endl;
        }
};


int main(){
    robot r;
    for(int i=0;i<5;i++){
    char choice;
    cout<<"Enter your choice: "<<endl;
    cout<<"move forward: F"<<endl;
    cout<<"move backward: B"<<endl;
    cout<<"move left: L"<<endl;
    cout<<"move right: R"<<endl;
    cin>>choice;
     if(choice!= 'F' && choice!= 'B' && choice!= 'L' && choice!= 'R'){
        cout<<"Invalid choice"<<endl;
        return 1;
    }
     

    switch(choice){
        case 'F':
            r.moveforword(10);
            break;
        case 'B':
            r.movebackword(10);
            break;
        case 'L':
            r.moveleft(10);
            break;
        case 'R':
            r.moveright(10);
            break;
        }
    }return 0;
}
