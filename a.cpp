#include <bits/stdc++.h>
#define NMAX 1005
#define ll long long
#define mod 1000009

std::ifstream f("testgit.in");
std::ofstream g("testgit.out");

using namespace std;

int n, a;
ll ans;

int main() {
    cin >> n;
    for(int i=1;i<=n;i++)cin >> a, ans=(ans+a)%mod;
    cout << ans;
}
