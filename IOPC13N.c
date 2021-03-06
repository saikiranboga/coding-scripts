#include<stdio.h>
int tree[100001];

inline void fastRead(int *a)
{
  register char c=0;
  while (c<33) c=getchar_unlocked();
  *a=0;
  while (c>33)
    {
      *a=*a*10+c-'0';
      c=getchar_unlocked();
    }
}

int main(){
  int N,Q,U,i,x,y,p;
  for(i=0;i<100000;i++){
    tree[i] = -2;
  }
  fastRead(&N);
  fastRead(&Q);
  fastRead(&U);
  tree[U] = -1;
  for(i=1;i<N;i++){
    fastRead(&x);
    fastRead(&y);
    tree[y] = x;
  }

  for(i=0;i<Q;i++){
    fastRead(&x);
    fastRead(&y);
    p = tree[x];
    while( p!=y && p!=-1){
      p = tree[p];
    }
    if(p == y){
      printf("1\n");
      continue;
    }
    else{
      p = tree[y];
      while(p != x && p != -1){
	p = tree[p];
      }
      if(p == x){
	printf("-1\n");
	continue;
      }
      else{
	printf("0\n");
      }
    }
  }
  return 0;
}
