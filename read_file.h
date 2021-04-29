#ifndef READ_FILE_GUARD__H 
#define READ_FILE_GUARD__H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>



struct _GRAPH{
	int vexs[6666];
	double arcs[6666][6666];
	double lat[4000];
	double lon[4000];
	int node1[3000];
	int node2[3000];
	int vexnum, arcnum;
	int node_id[4000];
	double length[3000];
}Graph;


int LocateVex(int input_id);
int read_file(FILE *fp);
int store_data();

#endif
