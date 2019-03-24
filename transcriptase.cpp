//Jerome Maniago
//Project2A
//transcript
//DNA to mRNA
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char DNAbase_to_mRNAbase(char base)
{
	if(toupper(base) == 'A')
		return 'U';
	
	else if(toupper(base) == 'T')//
		return 'A';
	
	else if(toupper(base) == 'C')
		return 'G';
	
	else if(toupper(base) == 'G')
		return 'C';
		
	return 'n';
}

string DNA_to_mRNA(string strand)
{
	string mRNAstrand = "";
	for ( int i = 0; i < strand.length(); i++ )
	{
		mRNAstrand += DNAbase_to_mRNAbase(strand[i]);
	}
	
	return mRNAstrand;
}
			

int main()
{
	
	ifstream fin("dna.txt");
	if (fin.fail())
	{
		cout << "File cannot be read, opened, or dne. \n"; //end if no file
		exit(1);
	}
	
	string strand;
	while (getline(fin, strand))
	{
		cout << DNA_to_mRNA(strand) << endl;
	}
	fin.close();
	return 0;
	
}
