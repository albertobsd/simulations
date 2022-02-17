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