
## TEST PLAN

|Test_id  | Description|Expected input|Expected Output|
|---------|------------|--------------|---------------|
|LLR_1 _ Arithmetic Operations|It contains all the basic arithmetic operations|            |               |
|                             | Addition:1)The user input must   be validated. The sign of the user input must also be validated.| Integer, integer|Integer, integer|           
|                             | 2) The floating  point input must provide a floating point results.|Float, Float|Float  |
|                             |3) A combination of floating point input and integer input must provide a floating point output.|Float, integer Or Integer, float|Float|
|                             |4) If result exceeds by 14 digits|Input 1=10 digits Input 2=6 digits |Out of range |                                                             |                             | then display unit must give the result as out of bound or out of range.|OrInput1=6 digits Input 2=10 digits|Or Out of bound.|
|                             | 5) If the first input is a negative number and second input is positive number or vice-versa.|Input1= -ve greater Input2= +ve smaller|Negative|
|                             | If the negative input is greater than the positive input then the output must be negative.|Or Input1= +ve smaller Input2= -ve greater|Negative |
|                             |Subtraction: 1)The user input must be validated. The sign of the user input must be validated.|Integer or floating point input.|pass|
|                             |                                                                                              |Alphanumeric|Error|
|                             |2) If both the input is of integer type or floating type then the output must be  integer or floating type.|Integer, integer|Integer|
|                             | |Or Float, float|Float|
|                             |3)If both the input sign is negative then the output must be the additive of both the values.|Input1= -ve Input2= -ve|Output=-(input1+input2)|
|                             |4)If the result exceeds 14 digits then the display unit must show out of bound or out of range|Input1=more than 14 digits|Output= result out|  |                             |                                                                                             |Input2= more than 14 digits|of bound.|
|                             |Multiplication:1) The user input must be validated. The sign of the user input must be validated.|Integer or floating point input.|Pass|
|                             |                                                                                                 |Alphanumeric input|Error|
|                            |2) If both the input is of integer type or floating type then the output must be integer or floating type.|Integer, integer|Integer|
|                            |                                                                                                               |Or Float, float|float|
|                            |3)If both the values are negative the output must have a positive sign.|Input1=-ve Input2=-ve|Output=+ve|
|                            |If one input is positive and other one is negative then the resultant must have negative sign.|Input1=+ve Input2=-ve	|Output=-ve
|                            |Division:1)  The user input must be validated. The sign of the user input must be validated.|Integer or floating point input.|Pass|
|                            |                                                                                            |Alphanumeric input	| Error|
|                            |2)  If both the input is of integer type or floating type then the output must be integer or floating type.|Integer, integer|Integer|
|                            |                                                                                                          |Or Float, float|	float|
|                            |3) If both the values are negative the output must have a positive sign.|Input1=-ve Input2=-ve|Output=+ve|
|                            |If one input is positive and other one is negative then the resultant must have negative sign.|Input1=+ve Input2=-ve|Output=-ve|
|                            |4) If the denominator is zero then the display unit must show error.|Input1 = digit Input2 = zero|Error|
|                            |If the numerator is zero it must display infinite|Input1=zero Input2= digit|infinite|
|LLR_2_Memory_Storage        |1)It must display the last five results when the user hits the history button.|History|Last five results |
|                            |2) The history operation starts storing the results from first after switching on the calculator.|OFF |No result |
|                            |                                                                                                 |ON History|All the results are removed.|       
| LLR_3_Binary_To_Decimal          |To convert a binary number to decimal number.                                              |Value= 110100  |52|
| LLR_4_Square_Root  |To find the square root of the input value.|Value= 9.3|3.05|
| LLR_5_Power |To find the nth power of the given input.|Values= 12,3|1728|
| LLR_6_Math_Print | For the calculation 2 no.s should be given | inputs and output both should be displayed at one time e.g. 2,3 | 2+ 3     ----- 5 | 
| LLR_7_Complex_Number | For executing this 4 no.s should be given as input 2 for reals and 2 for imaginary | First complex no.:- Real 2, Imag 3 Second complex no.:- Real 3,Imag 4 | 5+4i |

























         

 
