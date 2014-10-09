#include <stdio.h>
#include "BinarySearch.h"

int binarySearch(int target,int array[],int startIndex,int endIndex){
	int halfIndex;
	
	halfIndex=((endIndex-startIndex)/2)+startIndex;
	
	if(halfIndex==startIndex || halfIndex==endIndex){
		if(target==array[halfIndex]){
			return halfIndex;
		}else if(target==array[halfIndex+1]){
			return halfIndex+1;
		}else{
			return -1;
		}
	}
	if(target<array[halfIndex]){
		binarySearch(target,array,startIndex,halfIndex-1);
	}else if(target>array[halfIndex]){
		binarySearch(target,array,halfIndex+1,endIndex);
	}
}
