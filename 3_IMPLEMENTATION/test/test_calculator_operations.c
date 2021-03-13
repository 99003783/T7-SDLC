#include "unity.h"
//#include <calculator_operations.h>
//#include<amiya.h>
#include<aman.h>
#include<arithmetic_sourav.h>
/* Modify these two lines according to the project */
//#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulus(void);




//trignometric test functions

//Test Case1 For Trignometry
void test_Sin_func1(void);
void test_Cos_func1(void);
void test_Tan_func1(void);
void test_Cosec_func1(void);
void test_Sec_func1(void);
void test_Cot_func1(void);
//Test Case2 For Trignometry
void test_Sin_func2(void);
void test_Cos_func2(void);
void test_Tan_func2(void);
void test_Cosec_func2(void);
void test_Sec_func2(void);
void test_Cot_func2(void);
//Test Case3 For Trignometry
void test_Sin_func3(void);
void test_Cos_func3(void);
void test_Tan_func3(void);
void test_Cosec_func3(void);
void test_Sec_func3(void);
void test_Cot_func3(void);


//cube root test functions
void test_cube_root(void);

//void test_squareroot(void);
//void test_btod(void);
//void test_power(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_modulus);


    RUN_TEST(test_Sin_func1);
    RUN_TEST(test_Cos_func1);
    RUN_TEST(test_Cosec_func1);
    RUN_TEST(test_Sec_func1);
    RUN_TEST(test_Tan_func1);
    RUN_TEST(test_Cot_func1);

    RUN_TEST(test_Sin_func2);
    RUN_TEST(test_Cos_func2);
    RUN_TEST(test_Cosec_func2);
    RUN_TEST(test_Sec_func2);
    RUN_TEST(test_Tan_func2);
    RUN_TEST(test_Cot_func2);
    
    RUN_TEST(test_Sin_func3);
    RUN_TEST(test_Cos_func3);
    RUN_TEST(test_Cosec_func3);
    RUN_TEST(test_Sec_func3);
    RUN_TEST(test_Tan_func3);
    RUN_TEST(test_Cot_func3);
    
    RUN_TEST(test_cube_root);
  //RUN_TEST(test_squareroot);
  //RUN_TEST(test_btod);
  //RUN_TEST(test_power);



  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
}
void test_add_testcase2(void) {
 
  /* Dummy fail*/
 // TEST_ASSERT_EQUAL(1500, add(750, 7500));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(3, divide(2, 2));
}
void test_modulus(void){
  TEST_ASSERT_EQUAL(0,modulus(10,5));
}



void test_Sin_func1(void)
{
     TEST_ASSERT_EQUAL(0.5,Sin_func(30));
}

void test_Cos_func1(void)
{
     TEST_ASSERT_EQUAL(1,Cos_func(30));
}
void test_Tan_func1(void)
{
      TEST_ASSERT_EQUAL(0,Tan_func(30));
}
void test_Cosec_func1(void)
{
      TEST_ASSERT_EQUAL(-2147483648,Cosec_func(30));
}
void test_Sec_func1(void)
{
      TEST_ASSERT_EQUAL(1,Sec_func(30));
}
void test_Cot_func1(void)
{
      TEST_ASSERT_EQUAL(0,Cot_func(30));
}

void test_Sin_func2(void)
{
     TEST_ASSERT_EQUAL(0.866,Sin_func(30));
}

void test_Cos_func2(void)
{
     TEST_ASSERT_EQUAL(1,Cos_func(30));
}
void test_Tan_func2(void)
{
      TEST_ASSERT_EQUAL(0,Tan_func(30));
}
void test_Cosec_func2(void)
{
      TEST_ASSERT_EQUAL(-2147483648,Cosec_func(30));
}
void test_Sec_func2(void)
{
      TEST_ASSERT_EQUAL(1,Sec_func(30));
}
void test_Cot_func2(void)
{
      TEST_ASSERT_EQUAL(0.5,Cot_func(30));
}


void test_Sin_func3(void)
{
     TEST_ASSERT_EQUAL(0.5,Sin_func(30));
}

void test_Cos_func3(void)
{
     TEST_ASSERT_EQUAL(1,Cos_func(30));
}
void test_Tan_func3(void)
{
      TEST_ASSERT_EQUAL(0,Tan_func(30));
}
void test_Cosec_func3(void)
{
      TEST_ASSERT_EQUAL(-2147483648,Cosec_func(30));
}
void test_Sec_func3(void)
{
      TEST_ASSERT_EQUAL(1,Sec_func(30));
}
void test_Cot_func3(void)
{
      TEST_ASSERT_EQUAL(0,Cot_func(30));
}

/*void test_squareroot(void) {
  TEST_ASSERT_EQUAL(14, srt(196));
}
void test_btod(void) {
  TEST_ASSERT_EQUAL(18, btod(10010));
}
void test_power(void){
  TEST_ASSERT_EQUAL(1728, pow(12,3));
}*/
//test cases for cube root
void test_cube_root(void)
{
     TEST_ASSERT_EQUAL(1,cube_root(8));
}


