//
// Created by 13584 on 2023/11/16.
//
#include <stdio.h>
#include <math.h>

double f(int *q, double x, int p, int n);
double integration(int *q, int p, int n, double start, double end);
double sim(int *q, int p, int n, double start, double end, double del);

int main() {
  int n, p;
  double del = 0.0001;
  scanf("%d %d", &n, &p);
  getchar();
  int a[n + 1];
  for (int i = 0; i < n + 1; ++i) {
    scanf("%d", &a[i]);
    getchar();
  }
  double start = 0.0;
  double end = 0.0;
  scanf("%lf %lf", &start, &end);
  int *q = a;
  printf("%lf\n", sim(q, p, n, start, end, del));
  return 0;
}
double f(int *q, double x, int p, int n) {
  double sum = 0.0;
  for (int i = 0; i <= n; ++i) {
    sum += pow(x, i) * (*q);
    q++;
  }
  return pow(sum, p);
}
double integration(int *q, int p, int n, double start, double end) {
  double sum = 0;
  double mid = (start + end) / 2;
  sum = 4 * f(q, mid, p, n) + f(q, start, p, n) + f(q, end, p, n);
  return sum * (end - start) / 6.0;
}
double sim(int *q, int p, int n, double start, double end, double del) {
  double mid = (start + end) / 2;
  double tem = fabs(integration(q, p, n, start, mid) + integration(q, p, n, mid, end) - integration(q, p, n, start, end));
  if (tem <= 15 * del) {
    return integration(q, p, n, start, mid) + integration(q, p, n, mid, end) + \
    (integration(q, p, n, start, mid) + integration(q, p, n, mid, end) - integration(q, p, n, start, end)) / 15;
  } else {
    return sim(q, p, n, start, mid, del / 2) + sim(q, p, n, mid, end, del / 2);
  }
}
