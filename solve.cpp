// Problema de Busca Completa ou DFS (Depth First Search) -> Filtragem
#include <bits/stdc++.h>

using namespace std;

int n, l, r, x;
vector<int> problems;

// custo computacional é O(2^n) mais especificamente 2^15

int solve(int i, int k, int sum, int menor, int maior) {
  int pega = 0;
  int nao_pega = 0;
  // caso base
  if (i == n) {
    // resolvi o problema
    if (k >= 2 && sum >= l && sum <= r && maior - menor >= x) {
      return 1;
    } else
    // não resolvi o problema
    return 0;
  }

  // passagem para os próximos estados
  pega = solve(i + 1, k + 1, sum + problems[i], min(maior, problems[i]), max(maior, problems[i]));
  nao_pega = solve(i + 1, k, sum, menor, maior);

  return pega + nao_pega;
}

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int aux;

  cin >> n >> l >> r >> x;

  for (int i = 0; i < n; i++)
  {
    cin >> aux;
    problems.push_back(aux);
  }

  cout << solve(0, 0, 0, INT_MAX, INT_MIN) << endl;

  return 0;
}