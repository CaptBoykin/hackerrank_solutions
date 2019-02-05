/*
 * You are given a string containing characters  and  only. Your task is to change it into a string such that there are no matching adjacent characters. To do this, you are allowed to delete zero or more characters in the string.

Your task is to find the minimum number of required deletions.

For example, given the string , remove an  at positions  and  to make  in  deletions.

Function Description

Complete the alternatingCharacters function in the editor below. It must return an integer representing the minimum number of deletions to make the alternating string.

alternatingCharacters has the following parameter(s):

s: a string
Input Format

The first line contains an integer , the number of queries.
The next  lines each contain a string .

Constraints

Each string  will consist only of characters  and
Output Format

For each query, print the minimum number of deletions required on a new line.
*/

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int alternatingCharacters(char *s)
{
	int ctr = 0;
	int s_len = strlen(s);
	int i;
	char *tmp = malloc(2 * sizeof(char *));

	char a[] = "AA";
	char b[] = "BB";

	for(i=0;i<s_len-1;i++)
	{
		tmp[0] = s[i];
		tmp[1] = s[i+1];
		
		if(strncmp(tmp,a,2) == 0)
		{
			printf("AA found!\n");
			ctr++;
		}
		else if(strncmp(tmp,b,2) == 0)
		{
			printf("BB found!\n");
			ctr++;
		}
	
	}

	free(tmp);
	return ctr;
}

int main(int argc, char *argv[])
{
	char s[] = "BBBBB";
	printf("%d\n",alternatingCharacters(s));

	return(0);
}
