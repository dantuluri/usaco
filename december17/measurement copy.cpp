#include<iostream>
#include <fstream>
#include<vector>
#include <algorithm>
using namespace std;
struct Cows
{
  int day;
  string name;
  int mark;
};
bool compareCows(Cows bessie, Cows fred)
{
  return bessie.day< fred.day;
}
bool compareMark(Cows bessie, Cows fred)
{
  if(bessie.mark==fred.mark)
  return bessie.day<fred.day;
  return bessie.mark>fred.mark;
}


int main()
{
  ifstream fin("measurement.in");
ofstream fout("measurement.out");
  int change = 0;
  Cows *cw, *best;
  Cows temp;
  int n;
  fin>>n;
  cw = new Cows[n];
  for (int beta = 0; beta < n; beta++) {
    fin>>cw[beta].day>>cw[beta].name>>cw[beta].mark;
    // cout<<cw[beta].day<<cw[beta].name<<cw[beta].mark<<"\n";
  }
  // cout<<"DONE WITH INPUT";
   sort(cw, cw+n, compareCows);      //CREATED ARRAY
  //  for (int i = 0; i < n; i++) {
  //    cout<<cw[i].day<<cw[i].name<<cw[i].mark<<"\n";
   //
  //  }
  vector<Cows> vCows(cw,cw+n);      //CREATED VECTOR above
    //  cout<<"DONE WITH SORTING FIRST";
    //  cout<<"\n\nvector prnt";
    //  for(int i=0; i<vCows.size(); i++)
    //  cout << vCows[i].day << ' '<<vCows[i].name<<' '<<vCows[i].mark<<' '<<"\n";
    //  cout<<"vector done";

  best = new Cows[n];
  for (int i = 0; i < 1; i++) {
    best[i].day = 0;
    best[i].name = "";
    best[i].mark = 0;
  }
  vector<Cows> vBest(best,best+1);      //CREATED VECTOR below
  // cout<<"DONE WITH CREATING VBEST VECTOR";
  // cout<<"\n\nvector prnt";
  // for(int i=0; i<vBest.size(); i++)
  // cout << vBest[i].day << ' '<<vBest[i].name<<' '<<vBest[i].mark<<' '<<"\n";
  // cout<<"vector done";
  // cout<<"------------------------------------------";

  for (int i = 0; i < n; i++) {
    // cout<<"\n\nloop start\n\n";
    //EXTERNAL FOR LOOP FOR CW ARRAY FIRST ONE THAT GOES FROM 0 TO N
    temp = vBest.at(0);
    bool alreadyPresent = true;
    //FIRST CHECK IF PRESENT IN BEST ARRAY
    // cout<<"before the loop that determines if two names are same then to sort them as such"<<"\n";
    for (int j = 0; j < vBest.size(); j++) {
      // cout<<" NAME1 "<<vCows.at(i).name<<"               seeing if they are similar                NAME2 : "<<vBest.at(j).name<<"\n";
      if(((vCows.at(i).name)==(vBest.at(j).name))&&alreadyPresent)
      {
        // cout<<"WHAT "<<vCows.at(i).name<<"    ";
        // cout<<"HAHAHA "<<vBest.at(j).name<<"ALREADY"<<"\n";
        vBest.at(j).mark+=vCows.at(i).mark;//add new mark for sorting the vCow
        sort(vBest.begin(), vBest.end(), compareMark);      //SORT ON MARK
        // cout<<"JAKE PAUL 2";

        alreadyPresent = false;
        // cout<<"\n\n\n\nhere we have two names that are the same so we sort them and we get this SORTED by mark\n";
        // for(int c=0;c<vBest.size(); c++)
        // {
        //   cout << vBest[c].day << ' '<<vBest[c].name<<' '<<vBest[c].mark<<' '<<"\n";
        // }
        // cout<<"vector done\n\n";


      }
    }
    if(alreadyPresent)
    {
      // cout<<"\n\n\n no matching"<<"\n\n";
      int biggy = vBest.size();
      bool tempfix = true;
      for (int j = 0; j < biggy; j++) {
        // cout<<"vcow output mark: "<<vCows.at(i).mark<<"\n";
        // cout<<"vbest output mark:"<<vBest.at(j).mark<<"\n";
        if((vCows.at(i).mark>vBest.at(j).mark)&&(tempfix))
        {
          vBest.insert(vBest.begin()+j,vCows.at(i));
          tempfix = false;
        }
      }
      if(tempfix)
      {
        vBest.push_back(vCows.at(i));
      }
      sort(vBest.begin(), vBest.end(), compareMark);      //SORT ON MARK
    }


    if(i==0)
    {
      bool defect = true;
      int g = 0;
      while(defect&&g<n)
      {
        if((vBest.at(g).name).compare("")==0)
        {
          vBest.erase(vBest.begin()+g);
          defect = false;
        }
        else g++;
      }
    }

    if(temp.name.compare(vBest.at(0).name)!=0)
    change++;

    // cout<<"-------------------------------------------------";
    // cout<<"current zbest config:\n\n";
    // for(int z=0;z<vBest.size(); z++)
    // {
    //   cout << vBest[z].day << ' '<<vBest[z].name<<' '<<vBest[z].mark<<' '<<"\n";
    // }
    // cout<<"-------------------------------------------------";
    //





  }
fout<<change<<"\n";
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//

}
