#!/usr/bin/python

# postprocesses profiling data - builds call tree with elapsed times based on the input file


import sys
import operator

class Node:
      name = ''
      child = ''
      child_full=''
      parent = ''
      time = 0.0
      type=0
      listchilds=[]
      values=None
def prCyan(prt,newline=True):
        if (newline):
                print("\033[96m{}\033[00m" .format(prt))
        else:
                print("\033[96m{}\033[00m" .format(prt)),
                
def printchilds(node,depth):
    sum=0.0
    for child in node.listchilds:
        sum+=float(child.time)

    if (node.type==2):
        str = ':'+node.parent+ ' - '+node.child_full
    else:
        str = node.child_full      
    if (len(node.listchilds) > 0 and abs(sum-float(node.time))>1):
        string='    '*depth+str+' '+node.time+' s'+' --- check sum : '+"{:.3f}".format(sum) +' s'
        prCyan (string)
    else:
        print '    '*depth,str,' ',node.time,' s'
        
    for child in node.listchilds:
        printchilds(child,depth+1)
    
fname=sys.argv[1]
if (len(sys.argv)>2):
    mode=sys.argv[2]
else:
    mode = 0

with open(fname) as f:
    lines = f.readlines()

data=[]
for line in lines:
    if not line.startswith("Elapsed:"):
        continue
    list = line.split()
    time = list[-2];
    str = " ".join(list[1:-2])
    s=Node()
    s.name=str
    s.time=time
    s.type=0
    s.listchilds=[]
    data.append(s)

times={}
for node in data:
    if node.name[0:2]=="::":
        list=node.name[2:].split(':')
        node.parent=list[0].strip()
        node.child_full=":".join(list[1:]).strip()
        node.type=1
    elif node.name[0:1]==":":
        list=node.name[1:].split(':')
        node.parent=list[0].strip()
        node.child_full=":".join(list[1:]).strip()
        node.type=2
    else:
        list=node.name.split(':')
        node.parent=list[0].strip()
        node.child_full=":".join(list[1:]).strip()
        if (node.child_full == ""):
            node.child_full=node.parent
            node.parent = ""
        node.type=0   
    node.child=node.child_full.split(' ')[0].strip()

for i, node in enumerate(data):
    parent=node.parent
    for j in range(i+1, len(data)):
        if data[j].child==parent:
            data[j].listchilds.append(node)
            node.type=1
#            print 'append ', node.child, 'to ',parent,' ',j
            break
        if (node.type==2 and data[j].type==0):
            data[j].listchilds.append(node)
#            print 'append ', node.child, 'to ',parent            
            break
for node in data:
        if (node.child in times):
            times[node.child]+=float(node.time)
        else:
            times[node.child]=float(node.time)

        
if (mode == 0):        
    printchilds(data[-1],0)
else:
     sorted_times = sorted(times.items(), key=lambda value: value[1],reverse=True)
     for key in sorted_times:
        print "%60s %.1f s"%(key[0],key[1])    
