#include <iostream>
using namespace std;

int findSolution(int a3, int b3, int c3, int d3){
    //cout <<a1<<b1<<c1<<d1<<endl;
    double a1 = a3*1.0;
    double b1 = b3*1.0;
    double c1 = c3*1.0;
    double d1 = d3*1.0;
    string solution = "";
    double firstNum = 0;
    double secondNum = 0;
    double thirdNum = 0;
    bool solved = false;
    for(int x = 1; x < 5; x++){
        if(solved){
            break;
        }
        for(int y = 1; y < 5; y++){
            if(solved){
            break;
            }
            for(int z =1; z < 5; z++){
                if(solved){
                    break;
                }
                if(x==1){
                    solution+= "+";
                    firstNum = a1+b1;
                }
                if(x==2){
                    solution+= "-";
                    if(a1>b1){
                        firstNum = a1-b1;
                    }else{
                        firstNum = b1-a1;
                    }
                }
                if(x==3){
                    solution+= "x";
                    firstNum = a1*b1;
                }
                if(x==4){
                    solution+= "/";
                    firstNum = a1/b1;
                }
                if(y==1){
                    solution+="+";
                    secondNum = firstNum+c1;
                }
                if(y==2){
                    solution+="-";
                    if(firstNum>c1){
                        secondNum = firstNum-c1;
                    }else{
                        secondNum = c1-firstNum;
                    }
                }
                if(y==3){
                    solution+="x";
                    secondNum = firstNum*c1;
                }
                if(y==4){
                    solution+="/";
                    secondNum = firstNum/c1;
                }
                if(z==1){
                    solution+="+";
                    thirdNum = secondNum+d1;
                }
                if(z==2){
                    solution+="-";
                    if(secondNum>d1){
                        thirdNum = secondNum-d1;
                    }else{
                        thirdNum = d1-secondNum;
                    }
                }
                if(z==3){
                    solution+="x";
                    thirdNum = secondNum*d1;
                }
                if(z==4){
                    solution+="/";
                    thirdNum = secondNum/d1;
                    if(thirdNum!=24){
                        thirdNum = d1/secondNum;
                    }
                }
                if(thirdNum==24){
                    solved = true;
                    cout << "the solution using these order of numbers is: \n";
                    cout << a1 << " " << b1 <<" "<< c1 << " "<< d1 << endl;
                    cout << solution << endl;
                    return 1;
                }else{
                    firstNum = 0;
                    secondNum = 0;
                    thirdNum = 0;
                    solution = "";
                    //cout << "noo";
                }
            }
        }
    }
    return 0;
}

int main(){
    int a;
    int b;
    int c;
    int d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    int numArr[4] = {a,b,c,d};
    
    for(int w=0;w<4;w++){
        for(int x=0;x<4;x++){
            for(int y=0;y<4;y++){
                for(int z=0;z<4;z++){
                    if(w!=x && w!=y && w!=z && x!=y && x!=z && y!=z){
                        int xi = findSolution(numArr[w],numArr[x],numArr[y],numArr[z]);
                        if(xi==1){
                            return 0;
                        }
                        //cout << xi;
                    }
                }
            }
        }
    }
    return 0;
}