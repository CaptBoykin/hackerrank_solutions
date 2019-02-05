#!/usr/bin/python

c= [0,0,1,0,0,1,0]
ctr = 0
c_len = len(c)
i = 0

while(i < c_len-2):
    print("pre: %d | %d" % (i,ctr))
    if(c[i+1] == 0):
        if(c[i+2] == 0):
            ctr+=1
            i+=2
            print("post: %d | %d" % (i,ctr))
            continue
        else:
            ctr+=1
            i+=1
            print("post: %d | %d" % (i,ctr))
            continue
    else:
        ctr+=1
        i+=1
        print("post: %d | %d" % (i,ctr))
        continue

print ctr
