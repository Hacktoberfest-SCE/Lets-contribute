/*Take an input integer n. Your task is to print an alphabet rangoli of size.
(Rangoli is a form of Indian folk art based on the creation of patterns.)*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;

	cin >> n; // Input

	//First Let's initiate the answerMatrix with all '-' characters

	//The length and breadth of the answer matrix should be (2*n+1)

	string temperoryString;
	int heightAnsMatrix= 2*n-1;

	/*Approach: First let us ignore the '-' characters which come at even places in each row of answer matrix
	So, now we will initially make the upper triangle of rangoli and later at the end, we will reflect it to lower half
	For the upper part, we will choose characters in descending order. Each time after choosing a character, we will put it in
	appropriate places present in upper triangle*/

	vector< string > AnsMatrix;

	for(int i=0;i<heightAnsMatrix;i++){
		temperoryString.push_back('-');
	}

	for(int i=0;i<heightAnsMatrix;i++){
		AnsMatrix.push_back(temperoryString);
	}

	int tip=0;
	char replaceChar='a';
	replaceChar= replaceChar+(n-1);
	int distance;

	for(tip=0;tip<=heightAnsMatrix/2;tip++){
		for(int i=tip;i<=heightAnsMatrix/2;i++){
			distance=i-tip;
			AnsMatrix[i][heightAnsMatrix/2 + distance]=replaceChar;
			AnsMatrix[i][heightAnsMatrix/2 - distance]=replaceChar;
		}
		replaceChar=replaceChar-1;
	}

	int pointer=heightAnsMatrix-1;

	//

	for(int i=0;i<pointer;i++){
		AnsMatrix[pointer]=AnsMatrix[i];
		pointer--;
	}

	//output

	for(int i=0;i<heightAnsMatrix;i++){
		for(int j=0;j<heightAnsMatrix;j++){
			cout << AnsMatrix[i][j];
			if(j<heightAnsMatrix-1)cout << "-";
		}
		cout << endl;
	}

	return 0;
}