#include <bits/stdc++.h>
using namespace std;

// Define type aliases for convenience
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
// const ll mod = 1e9 + 7;
template <typename T> istream &operator>>(istream &istream, vector<T> &v) {
  for (auto &it : v)
    cin >> it;
  return istream;
}

// Define macros for convenience
#define py cout << "YES" << endl;
#define sz(x) static_cast<int>((x).size())
#define pn cout << "NO" << endl;
#define f first
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
#define REPU(i, a, b) for (int i = a; i > b; i--)
#define SQ(a) (a) * (a)
#define cube(a) ((a) * (a) * (a))
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define sorting(v) sort(all(v))
#define sum(n) n *n + 1 / 2
#define endl '\n'
#define um unordered_map<int, int>
#ifndef ONLINE_JUDGE
#define debug(x) \
  cerr << #x << " "; \
  _print(x); \
  cerr << endl;
#else
#define debug(x)
#endif

void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(unsigned int t) { cerr << t; }

template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> v);
template <class T, class V> void _print(map<T, V> v);
template <class T> void _print(multiset<T> v);
template <class T, class V> void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.first);
  cerr << ",";
  _print(p.second);
  cerr << "}";
}
template <class T> void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(multiset<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V> void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
// void solve(int l,int r){
// }
bool isdigit(char ch) {
  if (ch >= '0' && ch <= '9') {
    return true;
  }
  return false;
}
bool ischar(char ch) {
  if (ch >= 'a' && ch <= 'z') {
    return true;
  }
  return false;
}
vector<int> getPrimesLessThanN(int n) {
  vector<bool> isPrime(n, true); // Initialize a boolean vector with true values
  vector<int> primes;

  // 0 and 1 are not prime numbers
  if (n <= 2) {
    return primes;
  }

  // Sieve of Eratosthenes
  isPrime[0] = isPrime[1] = false;
  for (int p = 2; p * p < n; ++p) {
    if (isPrime[p]) {
      for (int i = p * p; i < n; i += p) {
        isPrime[i] = false;
      }
    }
  }

  // Collecting all prime numbers less than n
  for (int p = 2; p < n; ++p) {
    if (isPrime[p]) {
      primes.push_back(p);
    }
  }

  return primes;
}
void print(){
  cout << '\n';
}
template<typename T, typename... Ts>
void print(const T& a, const Ts&... b){
  cout << a;
  (cout << ... << (cout << ' ', b));
  cout << '\n';
}
// 1)CHECK FOR LONG LONG 
// 2)FIRST READ QUESTION PROPERLY 2 TIMES
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
  }
}