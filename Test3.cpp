#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
    int score;
    cout<<"please enter your score:"<<endl;
    cin>>score;
    if(score<=100){
        switch ((score-1)/10)
        {
        case 9: /* constant-expression */
            /* code */
        cout<<"your grade is A"<<endl;
            break;
        case 8:
        cout<<"your grade is B"<<endl;
        break;
        case 7:
        cout<<"your grade is C"<<endl;
        case 6:
        cout<<"your grade is D"<<endl;
        default:
        if(score==100) cout<<"your grade is D"<<endl;
        else cout<<"your grade is E"<<endl;
            break;
        }
    }else cout<<"ERROR"<<endl;
    system("pause");
    return 0;
}
