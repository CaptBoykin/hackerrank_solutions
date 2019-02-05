/*
John works at a clothing store. He has a large pile of socks that he must pair by color for sale. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

For example, there are  socks with colors . There is one pair of color  and one of color . There are three odd socks left, one of each color. The number of pairs is .

Function Description

Complete the sockMerchant function in the editor below. It must return an integer representing the number of matching pairs of socks that are available.

sockMerchant has the following parameter(s):

n: the number of socks in the pile
ar: the colors of each sock
Input Format

The first line contains an integer , the number of socks represented in . 
The second line contains  space-separated integers describing the colors  of the socks in the pile.

Constraints

 where 
Output Format

Print the total number of matching pairs of socks that John can sell.
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int sockpairs(int n, int *ar)
{
	int ctr, *uniq, i, ii, c=0, pairnum=0;

	// Initialize first dimension of 2D array
	uniq = malloc(n * sizeof(int *));
	memset(uniq,0,n);
	bool dupe;

	//create array of uniq's
	for(i=0;i<n;i++)
	{
		dupe = false;
		for(ii=0;ii<n;ii++)
		{
			if(uniq[ii] == ar[i])
			{
				dupe = true;
				break;
			}
		}
		if(!dupe)
		{
			uniq[c] = ar[i];
			c++;
		}
	}

	// tally uniq's
	for(i=0;i<n;i++)
	{
		ctr=0;
		for(ii=0;ii<n;ii++)
		{
			if(uniq[i] == ar[ii])
			{
				ctr++;
			}
		}
		pairnum += floor(ctr/2);
	}
	
	// free b/c
	free(uniq);
	return pairnum;
}
