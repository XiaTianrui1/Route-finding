#include "read_file.h"
#include "calculation.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define max 99999999;





void read_file() 
{	int link_id[3000];
	int node_id[4000];
	int node1[3000];
	int node2[3000];
	double length[3000];
	int count = 0;
	
	int i = 0;
	int j = 0;
	FILE *fp = fopen("Final_Map.map", "r");
	fscanf(fp, "%*[^\n]");
	if(fp == NULL)
	{
		printf("Can not open the file"); 
	} 
	else
	{
		do
		{
			char *word = (char *) malloc(sizeof(char) * 100);
			char *id_ = (char *) malloc(sizeof(char) * 100);
			char *word1 = (char *) malloc(sizeof(char) * 100);
			char *word2 = (char *) malloc(sizeof(char) * 100);
			char *word3 = (char *) malloc(sizeof(char) * 100);
			char *word4 = (char *) malloc(sizeof(char) * 100);
			fscanf(fp, "%[^=]%*c%d %[^=]%*c%d %[^=]%*c%d %[^=]%*c%d %[^=]%*c%lf %*[^\n]", word, &link_id[i], word1, &node1[i], word2, &node2[i], word3, &data, word4, &length[i] );
			i = i+1;
			if(link_id[i-1] == -2143395348)
			{
				break;
			}
		}
		while(1);
		do
		{
			char *word = (char *) malloc(sizeof(char) * 100);
			char *word1 = (char *) malloc(sizeof(char) * 100);
			char *word2 = (char *) malloc(sizeof(char) * 100);
			fscanf(fp, "%[^=]%*c%d %[^=]%*c%lf %[^=]%*c%lf %*[^\n]", word, &node_id[j], word1, &Graph.lat[j], word2, &Graph.lon[j] );
			j = j+1;
			if(node_id[j-1] == -1867901273)
			{
				break;
			}
		}
		while(1);
		fclose(fp);
		Graph.arcnum = i;
		Graph.vexnum = j;
		
	}

}








