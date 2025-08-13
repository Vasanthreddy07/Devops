#include<stdio.h>
int n;
int v[10]={0};
int adj[10][10];
void bfs(int start)
{
int q[10],f=-1,r=-1,i;
q[++r]=start;
v[start]=1;
while(r!=f)
{
start=q[++f];
if(start==n)
printf("%d\t",n);
else
printf("%d\t",start);
for(i=0;i<n;i++)
{
if(adj[start][i]==1&&v[i]==0)
{
q[++r]=i;
v[i]=1;
}
}
}
}
int main()
{
int i,j,vt;
printf("Enter No. of vertices");
scanf("%d",&n);
printf("enter the adjacency matrix");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&adj[i][j]);
printf("Enter the initial vertex no");
scanf("%d",&vt);
bfs(vt);
return 0;
}

