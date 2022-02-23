# Simulations

This is a small collection of C or C++ files to simulate or test some cases
just to proof something.

## bits_average
	
This program fill "rounds" times a 32 bytes buffer (256 bits) with random data
from `/dev/urandom` in each round the program count the amount of bit that are in
1 or ON inside the buffer.
The output is the sumary  of times that each number of bit was filled and its 
percentage value.
In general the amount of times that the program fill 128 bits in 1 is near of 
the 5% The other bits are also near of that percentage but in a decending way.

random output:

```
1 times 89 bits in 1,  this is 0.000001 
1 times 91 bits in 1,  this is 0.000001 
2 times 92 bits in 1,  this is 0.000002 
1 times 93 bits in 1,  this is 0.000001 
4 times 94 bits in 1,  this is 0.000004 
10 times 95 bits in 1,  this is 0.000010 
20 times 96 bits in 1,  this is 0.000020 
28 times 97 bits in 1,  this is 0.000028 
44 times 98 bits in 1,  this is 0.000044 
70 times 99 bits in 1,  this is 0.000070 
100 times 100 bits in 1,  this is 0.000100 
160 times 101 bits in 1,  this is 0.000160 
258 times 102 bits in 1,  this is 0.000258 
401 times 103 bits in 1,  this is 0.000401 
536 times 104 bits in 1,  this is 0.000536 
781 times 105 bits in 1,  this is 0.000781 
1110 times 106 bits in 1,  this is 0.001110 
1592 times 107 bits in 1,  this is 0.001592 
2210 times 108 bits in 1,  this is 0.002210 
3048 times 109 bits in 1,  this is 0.003048 
3962 times 110 bits in 1,  this is 0.003962 
5228 times 111 bits in 1,  this is 0.005228 
6649 times 112 bits in 1,  this is 0.006649 
8464 times 113 bits in 1,  this is 0.008464 
10657 times 114 bits in 1,  this is 0.010657 
13435 times 115 bits in 1,  this is 0.013435 
16253 times 116 bits in 1,  this is 0.016253 
19617 times 117 bits in 1,  this is 0.019617 
22757 times 118 bits in 1,  this is 0.022757 
26323 times 119 bits in 1,  this is 0.026323 
30232 times 120 bits in 1,  this is 0.030232 
34341 times 121 bits in 1,  this is 0.034341 
37466 times 122 bits in 1,  this is 0.037466 
41056 times 123 bits in 1,  this is 0.041056 
43881 times 124 bits in 1,  this is 0.043881 
46526 times 125 bits in 1,  this is 0.046526 
48003 times 126 bits in 1,  this is 0.048003 
49020 times 127 bits in 1,  this is 0.049020 
49739 times 128 bits in 1,  this is 0.049739 
49627 times 129 bits in 1,  this is 0.049627 
48637 times 130 bits in 1,  this is 0.048637 
46451 times 131 bits in 1,  this is 0.046451 
44107 times 132 bits in 1,  this is 0.044107 
40986 times 133 bits in 1,  this is 0.040986 
37788 times 134 bits in 1,  this is 0.037788 
33934 times 135 bits in 1,  this is 0.033934 
30094 times 136 bits in 1,  this is 0.030094 
26496 times 137 bits in 1,  this is 0.026496 
22826 times 138 bits in 1,  this is 0.022826 
19493 times 139 bits in 1,  this is 0.019493 
16368 times 140 bits in 1,  this is 0.016368 
13389 times 141 bits in 1,  this is 0.013389 
10764 times 142 bits in 1,  this is 0.010764 
8764 times 143 bits in 1,  this is 0.008764 
6833 times 144 bits in 1,  this is 0.006833 
5293 times 145 bits in 1,  this is 0.005293 
3940 times 146 bits in 1,  this is 0.003940 
2973 times 147 bits in 1,  this is 0.002973 
2115 times 148 bits in 1,  this is 0.002115 
1594 times 149 bits in 1,  this is 0.001594 
1089 times 150 bits in 1,  this is 0.001089 
830 times 151 bits in 1,  this is 0.000830 
525 times 152 bits in 1,  this is 0.000525 
381 times 153 bits in 1,  this is 0.000381 
254 times 154 bits in 1,  this is 0.000254 
179 times 155 bits in 1,  this is 0.000179 
105 times 156 bits in 1,  this is 0.000105 
69 times 157 bits in 1,  this is 0.000069 
38 times 158 bits in 1,  this is 0.000038 
32 times 159 bits in 1,  this is 0.000032 
20 times 160 bits in 1,  this is 0.000020 
9 times 161 bits in 1,  this is 0.000009 
5 times 162 bits in 1,  this is 0.000005 
3 times 163 bits in 1,  this is 0.000003 
2 times 164 bits in 1,  this is 0.000002 
1 times 166 bits in 1,  this is 0.000001 
```

## bits_landing

This program fill "rounds" times a 32 bytes buffer (256 bits) with random data
from the RNG of libgmp in each round the program count the size in bits that 
are needed for each number The output is the sumary  of times that each number
landing in some bit range and its percentage.
In general the amount of times that the key lands in 256 bits is near of the
50% all decrementing bits are the half of the previous value

random output:
```
1 times with lengt 237 bits,  this is 0.000001
1 times with lengt 238 bits,  this is 0.000001
3 times with lengt 239 bits,  this is 0.000003
9 times with lengt 240 bits,  this is 0.000009
18 times with lengt 241 bits,  this is 0.000018
30 times with lengt 242 bits,  this is 0.000030
67 times with lengt 243 bits,  this is 0.000067
128 times with lengt 244 bits,  this is 0.000128
258 times with lengt 245 bits,  this is 0.000258
484 times with lengt 246 bits,  this is 0.000484
996 times with lengt 247 bits,  this is 0.000996
1921 times with lengt 248 bits,  this is 0.001921
3869 times with lengt 249 bits,  this is 0.003869
7935 times with lengt 250 bits,  this is 0.007935
15762 times with lengt 251 bits,  this is 0.015762
31212 times with lengt 252 bits,  this is 0.031212
62354 times with lengt 253 bits,  this is 0.062354
124899 times with lengt 254 bits,  this is 0.124899
249131 times with lengt 255 bits,  this is 0.249131
500922 times with lengt 256 bits,  this is 0.500922
```

## speeds

This program show the amount of time need to crack a specific bit range acording
to some predefined speeds.

This program was made to know the amount of time needed to scan a bit range for 
the bitcoin puzzles.

output:

```
Puzzle 64 @ 1 Megakeys/s  (10^6):       292471 years
Puzzle 64 @ 1 Gigakeys/s  (10^9):       292 years
Puzzle 64 @ 1 Terakeys/s  (10^12):      0 years
Puzzle 64 @ 1 Petakeys/s  (10^15):      0 years
Puzzle 64 @ 1 Exakeys/s  (10^18):       0 years
Puzzle 64 @ 1 Zettakeys/s  (10^21):     0 years
Puzzle 64 @ 1 Yottakeys/s  (10^24):     0 years
Puzzle 68 @ 1 Megakeys/s  (10^6):       9359078 years
Puzzle 68 @ 1 Gigakeys/s  (10^9):       9359 years
Puzzle 68 @ 1 Terakeys/s  (10^12):      9 years
Puzzle 68 @ 1 Petakeys/s  (10^15):      0 years
Puzzle 68 @ 1 Exakeys/s  (10^18):       0 years
Puzzle 68 @ 1 Zettakeys/s  (10^21):     0 years
Puzzle 68 @ 1 Yottakeys/s  (10^24):     0 years
Puzzle 120 @ 1 Megakeys/s  (10^6):      21074771622667996462833 years
Puzzle 120 @ 1 Gigakeys/s  (10^9):      21074771622667996462 years
Puzzle 120 @ 1 Terakeys/s  (10^12):     21074771622667996 years
Puzzle 120 @ 1 Petakeys/s  (10^15):     21074771622667 years
Puzzle 120 @ 1 Exakeys/s  (10^18):      21074771622 years
Puzzle 120 @ 1 Zettakeys/s  (10^21):    21074771 years
Puzzle 120 @ 1 Yottakeys/s  (10^24):    21074 years
Puzzle 125 @ 1 Megakeys/s  (10^6):      674392691925375886810658 years
Puzzle 125 @ 1 Gigakeys/s  (10^9):      674392691925375886810 years
Puzzle 125 @ 1 Terakeys/s  (10^12):     674392691925375886 years
Puzzle 125 @ 1 Petakeys/s  (10^15):     674392691925375 years
Puzzle 125 @ 1 Exakeys/s  (10^18):      674392691925 years
Puzzle 125 @ 1 Zettakeys/s  (10^21):    674392691 years
Puzzle 125 @ 1 Yottakeys/s  (10^24):    674392 years
Puzzle 130 @ 1 Megakeys/s  (10^6):      21580566141612028377941058 years
Puzzle 130 @ 1 Gigakeys/s  (10^9):      21580566141612028377941 years
Puzzle 130 @ 1 Terakeys/s  (10^12):     21580566141612028377 years
Puzzle 130 @ 1 Petakeys/s  (10^15):     21580566141612028 years
Puzzle 130 @ 1 Exakeys/s  (10^18):      21580566141612 years
Puzzle 130 @ 1 Zettakeys/s  (10^21):    21580566141 years
Puzzle 130 @ 1 Yottakeys/s  (10^24):    21580566 years
Puzzle 135 @ 1 Megakeys/s  (10^6):      690578116531584908094113865 years
Puzzle 135 @ 1 Gigakeys/s  (10^9):      690578116531584908094113 years
Puzzle 135 @ 1 Terakeys/s  (10^12):     690578116531584908094 years
Puzzle 135 @ 1 Petakeys/s  (10^15):     690578116531584908 years
Puzzle 135 @ 1 Exakeys/s  (10^18):      690578116531584 years
Puzzle 135 @ 1 Zettakeys/s  (10^21):    690578116531 years
Puzzle 135 @ 1 Yottakeys/s  (10^24):    690578116 years
Puzzle 140 @ 1 Megakeys/s  (10^6):      22098499729010717059011643709 years
Puzzle 140 @ 1 Gigakeys/s  (10^9):      22098499729010717059011643 years
Puzzle 140 @ 1 Terakeys/s  (10^12):     22098499729010717059011 years
Puzzle 140 @ 1 Petakeys/s  (10^15):     22098499729010717059 years
Puzzle 140 @ 1 Exakeys/s  (10^18):      22098499729010717 years
Puzzle 140 @ 1 Zettakeys/s  (10^21):    22098499729010 years
Puzzle 140 @ 1 Yottakeys/s  (10^24):    22098499729 years
Puzzle 145 @ 1 Megakeys/s  (10^6):      707151991328342945888372598701 years
Puzzle 145 @ 1 Gigakeys/s  (10^9):      707151991328342945888372598 years
Puzzle 145 @ 1 Terakeys/s  (10^12):     707151991328342945888372 years
Puzzle 145 @ 1 Petakeys/s  (10^15):     707151991328342945888 years
Puzzle 145 @ 1 Exakeys/s  (10^18):      707151991328342945 years
Puzzle 145 @ 1 Zettakeys/s  (10^21):    707151991328342 years
Puzzle 145 @ 1 Yottakeys/s  (10^24):    707151991328 years
Puzzle 150 @ 1 Megakeys/s  (10^6):      22628863722506974268427923158445 years
Puzzle 150 @ 1 Gigakeys/s  (10^9):      22628863722506974268427923158 years
Puzzle 150 @ 1 Terakeys/s  (10^12):     22628863722506974268427923 years
Puzzle 150 @ 1 Petakeys/s  (10^15):     22628863722506974268427 years
Puzzle 150 @ 1 Exakeys/s  (10^18):      22628863722506974268 years
Puzzle 150 @ 1 Zettakeys/s  (10^21):    22628863722506974 years
Puzzle 150 @ 1 Yottakeys/s  (10^24):    22628863722506 years
Puzzle 155 @ 1 Megakeys/s  (10^6):      724123639120223176589693541070266 years
Puzzle 155 @ 1 Gigakeys/s  (10^9):      724123639120223176589693541070 years
Puzzle 155 @ 1 Terakeys/s  (10^12):     724123639120223176589693541 years
Puzzle 155 @ 1 Petakeys/s  (10^15):     724123639120223176589693 years
Puzzle 155 @ 1 Exakeys/s  (10^18):      724123639120223176589 years
Puzzle 155 @ 1 Zettakeys/s  (10^21):    724123639120223176 years
Puzzle 155 @ 1 Yottakeys/s  (10^24):    724123639120223 years
Puzzle 160 @ 1 Megakeys/s  (10^6):      23171956451847141650870193314248525 years
Puzzle 160 @ 1 Gigakeys/s  (10^9):      23171956451847141650870193314248 years
Puzzle 160 @ 1 Terakeys/s  (10^12):     23171956451847141650870193314 years
Puzzle 160 @ 1 Petakeys/s  (10^15):     23171956451847141650870193 years
Puzzle 160 @ 1 Exakeys/s  (10^18):      23171956451847141650870 years
Puzzle 160 @ 1 Zettakeys/s  (10^21):    23171956451847141650 years
Puzzle 160 @ 1 Yottakeys/s  (10^24):    23171956451847141 years
Puzzle 256 @ 1 Megakeys/s  (10^6):      1835871531540401373407708412745559168131740612197318060720331403 years
Puzzle 256 @ 1 Gigakeys/s  (10^9):      1835871531540401373407708412745559168131740612197318060720331 years
Puzzle 256 @ 1 Terakeys/s  (10^12):     1835871531540401373407708412745559168131740612197318060720 years
Puzzle 256 @ 1 Petakeys/s  (10^15):     1835871531540401373407708412745559168131740612197318060 years
Puzzle 256 @ 1 Exakeys/s  (10^18):      1835871531540401373407708412745559168131740612197318 years
Puzzle 256 @ 1 Zettakeys/s  (10^21):    1835871531540401373407708412745559168131740612197 years
Puzzle 256 @ 1 Yottakeys/s  (10^24):    1835871531540401373407708412745559168131740612 years
```

There is no puzzle 256, but it show the time to scan the 256 bit space.

