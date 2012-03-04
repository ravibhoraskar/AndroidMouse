#!/usr/bin/python

import sys,os

scale=1

while(1):
    #line=sys.stdin.readline();
    line =raw_input().strip();
    #print line;
    words=line.split(' ');
    #print words
    if("accel" in line):
        #print words[-3]+" "+words[-2]+" ";
        x=1.5*float(words[-3])*abs(float(words[-3]))+float(words[-3])
        y=1.5*float(words[-2])*abs(float(words[-2]))+float(words[-2])
        os.system("xdotool mousemove_relative -- "+str(scale*y)+" "+str(scale*x));
    elif("leftclick" in line):
        os.system("xdotool click 1");
    elif("rightclick" in line):
        os.system("xdotool click 3");
