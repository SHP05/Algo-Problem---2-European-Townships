#include <iostream>
using namespace std;

int main() {

   int t; cin>>t;
   for(int i=1;i<=t;i++){

    int x;
    cin>>x;
    int totalwall=0;
    int totalbed,r,s,h;
    for(int j=1;j<=x;j++){
        cin>>totalbed;
        cin>>r>>s>>h;
        totalwall=totalwall+(h*6)+(s*4)+(r*3);


    }
    double ascent,regular,totaltime,ascentquantity,regularquantity;

    ascent=(totalwall/3.0);
    regular=totalwall*(2/3.0);
ascentquantity=ascent*1.5;
regularquantity=regular*2.25;
totaltime=(ascent*2.5)+(regular*3.25);

cout<<totaltime<<","<<ascentquantity<<","<<regularquantity<<endl;

}
}