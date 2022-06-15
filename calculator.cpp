#include<iostream>
using namespace std;
class Calculator{
    double num; // to store input
    double result=0; // to store result
    char sign = '+'; // to store operator symbols
    char prevSign;
    public:
        int eval(){
            if(prevSign=='+'){
                result +=num;
            }else if(prevSign=='-'){
                result -= num;
            }else if(prevSign=='*'){
                result*=num;
            }else if(prevSign=='/'){
                result/=num;
            }

            return result;
        }

        void processing(){            
            do{
                cout<<endl<<"Enter number : ";
                cin>>num;                
                prevSign = sign;
                cout<<endl<<eval();
                cout<<endl<<"Enter symbols (+, -, *, /,=) => ";
                cin>>sign;               
                prevSign = sign; 
                if(sign=='='){
                    cout<<endl<<"Final Result : "<<result;
                    system("exit");
                }
           }while(sign!='=');
        }
};
int main(){
    Calculator cal;
    cal.processing();
	return 0;
}
