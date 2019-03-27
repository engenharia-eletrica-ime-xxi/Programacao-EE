#include <iostream>
using namespace std;
int main(){
    char xadrez[8][8][2];
    int game = 1;
    int i,j,k;
    for(i = 0;i < 8;i++){
        for(j = 0;j < 8; j++){
            if(i == 1){
                xadrez[i][j][0]='W';
                xadrez[i][j][1]='P';
            }else if(i == 6){
                xadrez[i][j][0]='B';
                xadrez[i][j][1]='P';
            }
            if(i>1&&i<6){
                xadrez[i][j][0] = ' ';
                xadrez[i][j][1] = ' ';
            }
            if(i==0||i==7){
                switch (j){
                    case 0:
                    case 7:
                        xadrez[i][j][1] = 'T';
                        break;
                    case 1:
                    case 6:
                        xadrez[i][j][1] = 'H';
                        break;
                    case 2:
                    case 5:
                        xadrez[i][j][1] = 'B';
                        break;
                    case 3:
                        if(i==0)
                            xadrez[i][j][1] = 'Q';
                        else
                            xadrez[i][j][1] = 'K';
                        break;
                    case 4:
                        if(i==0)
                            xadrez[i][j][1] = 'K';
                        else
                            xadrez[i][j][1] = 'Q';
                    default:
                        break;
                }
            }
            if(i == 0){
                xadrez[i][j][0] = 'W';
            }
            if(i == 7){
                xadrez[i][j][0] = 'B';
            }
        }
    }
        for(i=0;i<8;i++){
            for(k=0;k<3;k++){
            for(j=0;j<8;j++){
                if(k==1){
                    if((j%2==0&&i%2==0)||(j%2!=0&&i%2!=0)){
                        cout << "|B ";
                    }
                    else{
                        cout << "|P ";
                    }
                    cout << xadrez[i][j][0] << xadrez[i][j][1] << "|\t";
                    }
                    else{
                        cout << "|----|\t";
                    }
                }
                cout << "\n";
            }
        }
return 0;
}
