/*******************************************************************************************************************************
	In this problem we'll consider a simplified model of a development project. 
  Let's suppose, that there are N source files in the project. 
	All the source files are distinct and numbered from 1 to N.

	A version control system(VCS), that is used for maintaining the project, contains two sequences of source files. 
	The first sequence contains the source files, that are ignored by the VCS. If a source file is not in the first sequence, 
	then it's considered to be unignored. The second sequence contains the source files, that are tracked by the VCS. 
	If a source file is not in the second sequence, then it's considered to be untracked. 
	A source file can either be or not be in any of these two sequences.

	Your task is to calculate two values: the number of source files of the project, that are both tracked and ignored, 
	and the number of source files of the project, that are both untracked and unignored.

	Input:
	The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.

	The first line of the test case description contains three integers N, M and K denoting the number of source files in the project, 
	the number of ignored source files and the number of tracked source files.

	The second line contains M distinct integers denoting the sequence A of ignored source files. The sequence is strictly increasing.

	The third line contains K distinct integers denoting the sequence B of tracked source files. The sequence is strictly increasing.

	Output:
	For each test case, output a single line containing two integers: 
  the number of the source files, that are both tracked and ignored, 
	and the number of the source files, that are both untracked and unignored.
	Constraints
	1 ≤ T ≤ 100
	1 ≤ M, K ≤ N ≤ 100
	1 ≤ A1 < A2 < ... < AM ≤ N
	1 ≤ B1 < B2 < ... < BK ≤ N

											- CodeChef
*******************************************************************************************************************************/

#include <stdio.h>

int main(void) {
	
	int test;
	scanf("%d", &test);
	
	while(test--) {
	    
	    // n: number of source files, m: number of ignored source files, k: number of tracked source files
	    int n, m, k;
	    scanf("%d %d %d", &n, &m, &k);
	    
	    //A[]: sequence of ignored source files, B[]: sequence of tracked source files
	    //count1: number of the source files, that are both tracked and ignored
	    //count2: number of the source files, that are both untracked and unignored
	    
	    int A[m], B[k], i, j, count1 = 0, count2;
	    
	    for(i = 0; i < m; i++)
	        scanf("%d", &A[i]);
	        
	    for(i = 0; i < k; i++)
	        scanf("%d", &B[i]);
	        
	    for(i = 0; i < m; i++) {
	        for(j = 0; j < k; j++) {
	            if(A[i] == B[j]) {
	                 count1++;         //Intersection of A & B
	                 break;
	            }
	        }
	    }
	    
	    count2 = n - (m + k - count1);   // Universal (1-n) - (Elements of A & B - Intersection of A & B)
	    
	    printf("%d %d\n", count1, count2);
	}
	
	return 0;
}

