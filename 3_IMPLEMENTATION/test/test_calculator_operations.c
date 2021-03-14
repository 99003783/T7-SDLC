#include "unity.h"
//#include <calculator_operations.h>
#include <amiya.h>
#include <aman.h>
#include <arithmetic_sourav.h>
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

void add_complex1(void);
void add_complex2(void);
void sub_complex1(void);
void sub_complex2(void);
void mul_complex1(void);
void mul_complex2(void);
void div_complex1(void);
void div_complex2(void);


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
  
  RUN_TEST(add_complex1);
  RUN_TEST(add_complex2);
  RUN_TEST(sub_complex1);
  RUN_TEST(sub_complex2);
  RUN_TEST(mul_complex1);
  RUN_TEST(mul_complex2);
  RUN_TEST(div_complex1);
  RUN_TEST(div_complex2);

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
      TEST_ASSERT_EQUAL(1,Cosec_func(30));
}
void test_Sec_func1(void)
{
      TEST_ASSERT_EQUAL(0,Sec_func(30));
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
     TEST_ASSERT_EQUAL(0,Cos_func(30));
}
void test_Tan_func2(void)
{
      TEST_ASSERT_EQUAL(0,Tan_func(30));
}
void test_Cosec_func2(void)
{
      TEST_ASSERT_EQUAL(1,Cosec_func(30));
}
void test_Sec_func2(void)
{
      TEST_ASSERT_EQUAL(0,Sec_func(30));
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
     TEST_ASSERT_EQUAL(0,Cos_func(30));
}
void test_Tan_func3(void)
{
      TEST_ASSERT_EQUAL(0,Tan_func(30));
}
void test_Cosec_func3(void)
{
      TEST_ASSERT_EQUAL(1,Cosec_func(30));
}
void test_Sec_func3(void)
{
      TEST_ASSERT_EQUAL(0,Sec_func(30));
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

void add_complex1(void)
{
   complex num1,num2,res;
   num1.real = 2;
   num1.imag = 3;
   num2.real =4;
   num2.imag =6;
    res = add_C(num1,num2);
   TEST_ASSERT_EQUAL(6.0, res.real);
   TEST_ASSERT_EQUAL(9.0, res.imag);
}
void add_complex2(void)
{
   complex num1,num2,res;
   num1.real = 3;
   num1.imag = 4;
   num2.real =7;
   num2.imag =11;
    res = add_C(num1,num2);
   TEST_ASSERT_EQUAL(10.0, res.real);
   TEST_ASSERT_EQUAL(15.0, res.imag);
}
void sub_complex1(void)
{
   complex num1,num2,res;
   num1.real = 9;
   num1.imag = 2;
   num2.real =4;
   num2.imag =6;
    res = sub_C(num1,num2);
   TEST_ASSERT_EQUAL(5.0, res.real);
   TEST_ASSERT_EQUAL(-4.0, res.imag);
}
void sub_complex2(void)
{
   complex num1,num2,res;
   num1.real = 7;
   num1.imag = 12;
   num2.real =3;
   num2.imag =2;
    res = sub_C(num1,num2);
   TEST_ASSERT_EQUAL(4.0, res.real);
   TEST_ASSERT_EQUAL(10.0, res.imag);
}
void mul_complex1(void)
{
   complex num1,num2,res;
   num1.real = 2;
   num1.imag = 3;
   num2.real =4;
   num2.imag =6;
    res = mul_C(num1,num2);
   TEST_ASSERT_EQUAL(8.0, res.real);
   TEST_ASSERT_EQUAL(18.0, res.imag);
}
void mul_complex2(void)
{
   complex num1,num2,res;
   num1.real = 12;
   num1.imag = 11;
   num2.real =2;
   num2.imag =3;
    res = mul_C(num1,num2);
   TEST_ASSERT_EQUAL(24.0, res.real);
   TEST_ASSERT_EQUAL(33.0, res.imag);
}
void div_complex1(void)
{
   complex num1,num2,res;
   num1.real = 8;
   num1.imag = 10;
   num2.real =4;
   num2.imag =2;
    res = div_C(num1,num2);
   TEST_ASSERT_EQUAL(2.0, res.real);
   TEST_ASSERT_EQUAL(5.0, res.imag);
}
void div_complex2(void)
{
   complex num1,num2,res;
   num1.real = 15;
   num1.imag = 18;
   num2.real =3;
   num2.imag =6;
    res = div_C(num1,num2);
   TEST_ASSERT_EQUAL(5.0, res.real);
   TEST_ASSERT_EQUAL(3.0, res.imag);
}
