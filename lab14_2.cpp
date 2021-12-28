#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool p[][M], int x, int y, int z){
    for(int a = 0; a < N; a ++){
        for(int b = 0; b < M; b++){
            if(sqrt(pow(a-y,2)+pow(b-z,2))+1 <= x){
                p[a][b] = 1;
            }
        }
    }
}

void showImage(const bool p[][M]){

     cout << "------------------------------------------------------------------------\n";
    for(int m = 0; m < N; m++){
        cout << "|";
        for(int o = 0; o < M ; o++){
            if(p[m][o] == 0) cout << " ";
            if(p[m][o] == 1) cout << "*";
        }
        cout << "|" << endl;
    }
    cout << "------------------------------------------------------------------------\n";

}