#include <bits/stdc++.h>
using namespace std;

struct bullet
{
    int t,x,y;
    bool run=false, entered=false;
};
bullet b[200000];
const int bullet_type[8][2]= {{1,0},{1,1},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1}};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int game_map[5][5]= {0};
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>b[i].t>>b[i].x>>b[i].y;

    int bullet_runs=0;
    game_map[2][2]=1;
    for(int i=0; i<n; i++)if(0<=b[i].x and b[i].x<=4 and 0<=b[i].y and b[i].y<=4)
        {
            b[i].entered=true;
            game_map[b[i].y][b[i].x]=-1;
        }

    while(bullet_runs<n)
    {
        queue<pair<int,int>> bfs;
        for(int i=0; i<5; i++)
            for(int j=0; j<5; j++)
                if(game_map[i][j]==1)
                {
                    bfs.push(make_pair(j,i+1));
                    bfs.push(make_pair(j,i-1));
                    bfs.push(make_pair(j+1,i));
                    bfs.push(make_pair(j-1,i));
                }
        if(bfs.empty())
        {
            cout<<0;
            return 0;
        }
        while(!bfs.empty())
        {
            int x=bfs.front().first,y=bfs.front().second;
            bfs.pop();
            if(0<=x and x<=4 and 0<=y and y<=4 and game_map[y][x]==0) game_map[y][x]=1;
        }


        for(int i=0; i<5; i++)
            for(int j=0; j<5; j++)
                if(game_map[i][j]==-1)game_map[i][j]=0;
        for(int i=0; i<n; i++)
            if(!b[i].run)
            {
                b[i].x+=bullet_type[b[i].t][0];
                b[i].y+=bullet_type[b[i].t][1];
                if(0<=b[i].x and b[i].x<=4 and 0<=b[i].y and b[i].y<=4)
                {
                    b[i].entered=true;
                    game_map[b[i].y][b[i].x]=-1;
                }
                else if(b[i].entered)
                {
                    b[i].run=true;
                    bullet_runs++;
                }
            }
//        for(int i=4; i>=0; i--)
//        {
//            for(int j=0; j<5; j++)printf("%2d",game_map[i][j]);
//            cout<<endl;
//        }
//        cout<<endl;
    }
    cout<<1;
    return 0;
}
/**
25
2 0 -1
2 1 -1
2 2 -1
6 3 5
6 4 5
2 0 -4
2 1 -4
2 2 -4
6 3 8
6 4 8
2 0 -7
2 1 -7
2 2 -7
6 3 11
6 4 11
2 0 -10
2 1 -10
2 2 -10
6 3 14
6 4 14
2 0 -13
2 1 -13
2 2 -13
6 3 17
6 4 17
**/


/**
16
0 -5 0
0 -5 1
0 -5 2
0 -5 3
2 1 -6
2 2 -6
2 3 -6
2 4 -6
4 11 1
4 11 2
4 11 3
4 11 4
6 0 13
6 1 13
6 2 13
6 3 13
**/
