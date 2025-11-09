#include <bits/stdc++.h>
#define NMAX 1005
#define ll long long
#define mod 1000007

std::ifstream f("testgit.in");
std::ofstream g("testgit.out");

using namespace std;

int n;
int a[NMAX];
ll ans;

int main() {
    cin >> n;
    for(int i=1;i<=n;i++)cin >> a[i], ans+=a[i];
    cout << ans << '\n';
    sort(a+1, a+n+1);
    for(int i=1;i<=n;i++)cout << a[i] << " ";
}
