#include <bits/stdc++.h>
using namespace std;
struct petrolPump {
  int petrol;
  int distance;
};
int tour(petrolPump p[], int n) {
  for (int i = 0; i < n; i++) {
    int petrol = 0, distance, curr;
    queue<int> q;
    q.push(i);
    while (q.size()) {
      curr = q.front();
      petrol += p[curr].petrol;
      distance = p[curr].distance;
      if (distance > petrol)
        break;
      petrol = petrol - distance;
      curr = (curr + 1) % n;
      if (curr == i)
        return i;
      q.push(curr);
    }
  }
  return -1;
}
int main() {
  petrolPump p[4];
  p
}