#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

const int maxn = 1010;
char mp[maxn][maxn];
int dist[maxn][maxn];
int n;
int sx, sy, tx, ty;
int dx[4] = { 1, 0, 0, -1 }, dy[4] = { 0, -1, 1, 0 };
char dir[4] = { 'D', 'L', 'R', 'U' };

void bfs()
{
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++)
            dist[i][j] = 1e9;
    dist[tx][ty] = 0;
    queue<pair<int, int> > q;
    pair<int, int> t;
    t.first = tx;
    t.second = ty; 
    q.push(t);
    while (q.size()) {
        t = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = t.first + dx[i];
            int ny = t.second + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && dist[nx][ny] == 1e9 && mp[nx][ny] != '1') {

                dist[nx][ny] = dist[t.first][t.second] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) {     
        for (int j = 0; j < n; j++) {
            cin >> mp[i][j];
            if (mp[i][j] == 'S') {
                sx = i;
                sy = j;
            }
            if (mp[i][j] == 'T') {
                tx = i;
                ty = j;
            }
        }
    }

    bfs();

    cout << dist[sx][sy] << endl;

    int x = sx, y = sy;
        cout << "(" << x +1 << ", " << y+1 << ")" << endl;
    while (x != tx || y != ty) {
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && mp[nx][ny] != '1') {
                if (dist[x][y] == dist[nx][ny] + 1) {
                    cout << "(" << nx+1  << ", " << ny+1  << ")" << endl;
                    x = nx;
                    y = ny; 
                    break;
                }
            }
        }
    }
    return 0;
}
