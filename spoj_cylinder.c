#include <stdio.h>
#define PI 3.1415926535897931159979635
#define MIN(a,b) ((a)<(b)?(a):(b))
int main(){
  int a, b,t;
  double h1, h2, r1, r2, v1, v2;
  scanf("%d",&t);
  while(t--){
    scanf("%d%d",&a,&b);
    r1 = a/(2.0*PI);
    h1 = b - 2*r1;

    r2 = MIN(b/(2.0*(PI+1.0)),a/2.0);
    h2 = a;

    v1 = (PI*r1*r1*h1);
    v2 = (PI*r2*r2*h2);

    if(v1 > v2)
      printf("%.15lf\n",v1);
    else
      printf("%.15lf\n",v2);
  }
  return 0;
}
