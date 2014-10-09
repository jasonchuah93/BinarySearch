#include "unity.h"
#include "BinarySearch.h"

void setUp(void){}

void tearDown(void){}

void test_binarySearch_for_target_in_odd_array(){
	int array[]={1,10,45,65,78,79,123,456,741};
	int index; // The array of the target
	index=binarySearch(741,array,0,8);
	TEST_ASSERT_EQUAL(8,index);
}

void test_binarySearch_for_target_in_even_array(){
	int array[]={1,10,45,65,78,79,123,456,741,999};
	int index; // The array of the target
	index=binarySearch(79,array,0,8);
	TEST_ASSERT_EQUAL(5,index);
}

void test_binarySearch_for_target_in_start_index(){
	int array[]={10,45,65,78,79,123,456,741,1001,1234,2014};
	int index; // The array of the target
	index=binarySearch(10,array,0,10);
	TEST_ASSERT_EQUAL(0,index);
}

void test_binarySearch_for_target_in_end_index(){
	int array[]={10,45,65,78,79,123,456,741,1001,1234};
	int index; // The array of the target
	index=binarySearch(1234,array,0,9);
	TEST_ASSERT_EQUAL(9,index);
}

void test_binarySearch_should_return_negative_1_if_target_not_inside_array(){
	int array[]={10,45,65,78,79,123,456,741,1001};
	int index; // The array of the target
	index=binarySearch(50,array,0,8);
	TEST_ASSERT_EQUAL(-1,index);
}


