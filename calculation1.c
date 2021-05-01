#include "read_file.h"
#include "calculation.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define max 99999999




int prev[4000];
double dis[4000];
void disjstla(int v0, int end) 
{
	v0 = LocateVex(v0);
	end = LocateVex(end);
	int n = Graph.vexnum;
//	printf("%d", n);
	int visit[n];
//	printf("%lf", dis[7]); 
//	int prev[n];
//printf("%lf\n", Graph.arcs[2][3]);
	int v=0;
	int i,j;
	double min;
	for(v=0; v<n; v++){
		visit[v] = 0;
		dis[v] = Graph.arcs[v0][v];
//		printf("%lf\n", dis[v]);
		if(dis[v]<max)
		{
			prev[v]=v0;
		}
		else
		{
			prev[v]=-1;
		}
		
	}
	visit[v0] = 1;
	dis[v0] = 0;
	for(i=1; i<n; ++i){
		min = max;
		for(j=0; j<n; ++j){
			if(visit[j] == 0 && dis[j]<min)
			{
				v=j;
				min=dis[j];
			}
		}
		visit[v] = 1;
		for(j=0; j<n; ++j){
			if(visit[j] == 0 && dis[v]+Graph.arcs[v][j]<dis[j]){
				dis[j] = dis[v]+Graph.arcs[v][j];
				prev[j] = v;
			}
		}
		visit[v]=1;
	}
//	printf("%lf", dis[4]);
}
