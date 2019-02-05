"""
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
"""
#!/bin/python

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    uniq = set(ar)
    pairnum = 0
    pairs = {}
    for v in uniq:
        pairs[str(v)] = 0
    for v in ar:
        pairs[str(v)] += 1
    for v in pairs:
        pairnum += int(math.floor((pairs[str(v)] /2)))
    return pairnum