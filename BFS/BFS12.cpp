#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

// BFS(нахождение кратчайших путей и расстояние от начальной вершины до всех остальных вершин которые есть в графе) [список ребер]

void bfs(VectorVector &matrix, int startNum) {
    int size_matrix = matrix.size();
    vector<int> visited(size_matrix, 0);
    vector<int> prog(size_matrix, -1);

    queue<int> q;
    q.push(startNum);
    visited[startNum] = true;

    while(!q.empty()) {
        int numfront = q.front();
        q.pop();
        cout << "Посещена вершина: " << numfront << "\n";
        for(int i = 0; i < size_matrix; i++) {
            if(matrix[numfront][i] == 1 && !visited[i]) {
                q.push(i);
                visited[i] = true;
                prog[i] = numfront;
            }
        }
    }
    cout << "\n";

    for (int endNum = 0; endNum < size_matrix; endNum++) {
        if (endNum != startNum) {
            vector<int> result;
            for (int i = endNum; i != -1; i = prog[i]) {
                result.push_back(i);
            }

            cout << "Кратчайший путь " << " до " << endNum << ": ";
            for(int i = result.size() - 1; i >= 0; i--) {
                cout << result[i] << " ";
            }
            cout << "\n";

            cout << "Кратчайший путь = " << result.size() << "\n" << "\n";
        }
    }

    cout << "\n" << "\n";
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, m;
    cout << "Введите количество вершин: ";
    cin >> n;

    cout << "Введите количество ребер: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(n, 0));

    cout << "Введите ребра в форме(u, v): " << "\n";
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
        matrix[v][u] = 1; // Это если граф неориентированный
    }

    int startNum;
    cout << "Введите начальную точку: ";
    cin >> startNum;

    bfs(matrix, startNum);

    return 0;
}

