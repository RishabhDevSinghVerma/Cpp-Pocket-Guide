                                        ______                    
                                       /      \    __       __    
                                       |  ▓▓▓▓▓▓\  |  \     |  \   
                                       | ▓▓   \▓▓__| ▓▓__ __| ▓▓__ 
                                       | ▓▓     |    ▓▓  \    ▓▓  \
                                       | ▓▓   __ \▓▓▓▓▓▓▓▓\▓▓▓▓▓▓▓▓
                                       | ▓▓__/  \  | ▓▓     | ▓▓   
                                        \▓▓    ▓▓   \▓▓      \▓▓   
                                         \▓▓▓▓▓▓                   
                            
◙  𝐀𝐛𝐨𝐮𝐭 𝐂++

C++ is a high-level programming language created by Danish computer scientist Bjarne Stroustrup. 
First released in 1985 as an extension of the C programming language.We make fast program using c++.
We have more control over system resources and memory management.C++ language is a superset of C language.

  C++ Join three seprate programming traditions:-
  - the procedural language tradition,represented by C;
  - the Object Oriented language tradition ,represented by the class enhancements C++ adds to C;
  - Generic programming,supported by C++ templates

◙  𝐏𝐫𝐨𝐜𝐞𝐝𝐮𝐫𝐚𝐥 𝐏𝐫𝐨𝐠𝐫𝐚𝐦𝐦𝐢𝐧𝐠 𝐋𝐚𝐧𝐠𝐮𝐚𝐠𝐞: A procedural language is a sort of computer programming language that has a set of functions, instructions and 
                                  statements that must be executed in a certain order to accomplish a job or program. 

                                                                          OR 

Procedural Programming Language as per name mean emphasis procedurure. Procedure means step by step tasks which we want to perform.
In high level language this procedure called Function .Function is group of task which perform particular task.In this type of language we divide functions into smaller parts.


◙  𝐂𝐡𝐚𝐫𝐚𝐜𝐭𝐞𝐫𝐬𝐭𝐢𝐜𝐬 𝐨𝐟 𝐏𝐫𝐨𝐜𝐞𝐝𝐮𝐫𝐚𝐥 𝐏𝐫𝐢𝐠𝐫𝐚𝐦𝐦𝐢𝐧𝐠 𝐋𝐚𝐧𝐠𝐮𝐚𝐠𝐞

1)Its emphasis on algorithm(doing task) rather than data.
2)Large programs are divide into samaller parts called functions.
3)Its follows Top down approachs.Ex-C,Fortan,Cobol etc.

 𝐓𝐨𝐩 𝐃𝐨𝐰𝐧 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡:-

                         ______________
                        |     Main     |      Main Program
                        |______________|
                               /\
                              /  \
                             /    \
                            /      \ 
                 ______________    ______________
                |   Function1  |  |   Function2  |     Modules 
                |______________|  |______________|
                       /\                /\
                      /  \              /  \
                     /    \            /    \
                    /      \          /      \
                _____       _____  _____     _____
               |  F  |     |  F  ||  F  |   |  F  |        SubModules
               |_____|     |_____||_____|   |_____|   

The basic task of a top-down approach is to divide the problem into tasks and then divide tasks into smaller sub-tasks and so on. In this approach, first we develop the main module and then the next level modules are developed. This procedure is continued until all the modules are developed.


                          ______________________________________________________
                          |                                                     |
                          |      𝐁𝐚𝐬𝐢𝐜 𝐒𝐭𝐫𝐮𝐜𝐭𝐮𝐫𝐞 𝐨𝐟 𝐂++ 𝐏𝐫𝐨𝐠𝐫𝐚𝐦                  |
                          |                                                     | 
                          |      #include<iostream>                             |
                          |       using namespace std;                          |
                          |                                                     |
                          |       int main(){                                   |
                          |       cout<<"Welcome To My C++ Repository";         |
                          |       return 0;                                     |
                          |       }                                             |
                          |                                                     |
                          |   Output of Code:Welcome To My C++ Repository       |
                          |_____________________________________________________|

◙ 𝐕𝐚𝐫𝐢𝐚𝐛𝐥𝐞𝐬 :A variable is a container which stores our data. 
                       or
            A variable is a name of a memory location.             

𝐒𝐲𝐧𝐭𝐚𝐱 𝐟𝐨𝐫 𝐃𝐞𝐜𝐥𝐚𝐫𝐢𝐧𝐠 𝐕𝐚𝐫𝐢𝐚𝐛𝐥𝐞𝐬 𝐢𝐧 𝐂++  

Data_type Variable_name=Value

______________________________________________________
|                                                     |
|      Example of  Variable Declaration               |
|                                                     | 
|      #include<iostream>                             |
|       using namespace std;                          |
|                                                     |
|       int main()                                    |
|       {                                             |
|         int num1=2; //Data_type Variable_name=Value |
|         int num2=3;                                 |
|                                                     |
|       cout<<"The Sum of Numbers is:"<<num1+num2;    |
|       return 0;                                     |
|       }                                             |
|                                                     |
| Output of Code:The Sum of Numbers is:5              |
|_____________________________________________________|
                           

◙ 𝐕𝐚𝐫𝐢𝐚𝐛𝐥𝐞 𝐒𝐜𝐨𝐩𝐞

What is Scope of Variable??

Scope of a variable is the region in code where the existence of variable is valid

Based on Scope Variable can be classified into two types:-
1)Local Variable:-Local Variable are declared inside the braces of any funtion and can be accessed only from there.
2)Global Variable:-Global Variable are declared outside any function and can be accessed from anywhere.


◙ 𝐂𝐚𝐧 𝐆𝐥𝐨𝐛𝐚𝐥 𝐚𝐧𝐝 𝐋𝐨𝐜𝐚𝐥 𝐕𝐚𝐫𝐢𝐚𝐛𝐥𝐞 𝐡𝐚𝐯𝐞 𝐬𝐚𝐦𝐞 𝐧𝐚𝐦𝐞 𝐢𝐧 𝐂++??

______________________________________________________
|                                                     |
| Example of Local and Global Variable                |
|                                                     | 
|      #include<iostream>                             |
|       using namespace std;                          |
|       int num1=6;    //Global Variable              |
|       int main()                                    |
|       {                                             |
|         int num1=2;    //Local Variable             |
|         int num2=3;                                 |
|                                                     |
|       cout<<"The Sum of Numbers is:"<<num1+num2;    |
|       return 0;                                     |
|       }                                             |
|                                                     |
| Output of Code:The Sum of Numbers is:5              |
|_____________________________________________________|

Explanation Of Code:Within the body of a function, a local variable takes precedence over a global variable with the same name.So thats why output of code is still remain 5.

◙ 𝐑𝐮𝐥𝐞𝐬 𝐭𝐨 𝐃𝐞𝐜𝐥𝐚𝐫𝐞 𝐕𝐚𝐫𝐢𝐚𝐛𝐥𝐞 𝐢𝐧 𝐂++

·Variable names in C++ can range from 1 to 255 characters.
·All variable names must begin with a letter of the alphabet or an Underscore(_).
·After the first intial letter,variable names can also contain letters and numbers.
·Variables names are case sensitive.
·No Character or Special characters are allowed.
·You cannot use a C++ keyword as a variable name.

◙ 𝐃𝐚𝐭𝐚 𝐓𝐲𝐩𝐞𝐬 𝐈𝐧 𝐂++

Data type define the type of data a varible can hold , For Example:An Integer variable can hold integer data.
Data types in C++ are categorized in three groups:-

                                                   𝐃𝐚𝐭𝐚𝐭𝐲𝐩𝐞𝐬
                                                      |
______________________________________________________|___________________________                                    |                                                     |                           |
Built-in                                             User Defined                 Derived 
|                                                     |                           |
|-int (Integer)                                       |-struct(Structure)         |-Array
|                                                     |                           |
|-float(Store Decimal Number of Low Precision)        |-union(Union)              |-Function 
|                                                     |                           |
|-char(Character)                                     |-enum(Enumerator)          |-Pointer
|                                                     |
|-double(Store Decimal Number of High Precision)      |-Class
|
|-bool(True/False)

◙ 𝐁𝐢𝐭𝐰𝐢𝐬𝐞 𝐨𝐩𝐞𝐫𝐚𝐭𝐨𝐫

(Truth Table Of And Operator [&] ) 

X  Y   X&Y
0  1    0
1  0    0
1  1    1
0  0    0

(Truth Table Of OR Operator [|] ) 

X  Y   X|Y
0  1    1
1  0    1
1  1    1
0  0    0

(Truth Table Of  ~ Not Operator [~] ) 

X     ~X
0      1
1      0



(Truth Table Of XOR Operator [|] ) 

X  Y   X|Y
0  1    1
1  0    1
1  1    0
0  0    0

_______________________________________________________________________________________________________________________
|                                              Code for Bitwise operator                                               |
|                                                                                                                      |
|                                                                                                                      |
|  #include<iostream>                                                                                                  |
|                                                                                                                      |
| using namespace std;                                                                                                 |
|                                                                                                                      |
| int main()                                                                                                           |
|  {                                                                                                                   |
|    int a=4;                          //   100   Binary Coversition of 4                                              |
|    int b=6;                          //   110   Binary Coversition of 6                                              |
|                                      //  ______                                                                      |
| cout<<"A & B :"<<(a&b)<<endl;       //[&] 100   And Operation of Both Numbers:4 (Output Printed)                     |
| cout<<"A | B :"<<(a|b)<<endl;       //[|] 110   OR Operation  of Both Numbers:6 (Output Printed)                     |
| cout<<"A ^ B :"<<(a^b)<<endl;       //[^] 010   XOR Operation of Both Numbers:2 (Output Printed)                     | 
| cout<<"~A :"<<(~a)<<endl;           // Binary Converstion of A is :100                                               |
|                                     // Step 1: Compilers Complement the Binary Coversion of Number:011               |  
|                                     // Then its convert to 1s Complement (1-->0 & 0<--1):100                         |
|                                     // Then its convert to 2s Complement (1 add to 1s Complement):101                |
|                                     // =>-5(Output Printed) [Negative Output Because in memory starting Bit is One]  |
|                                                                                                                      |
|                                                                                                                      |
| return 0;                                                                                                            |
| }                                                                                                                    |
|                                                                                                                      |
|                                                                                                                      |
|     Output of Code:A & B :4                                                                                          | 
|                    A | B :6                                                                                          | 
|                    A ^ B :2                                                                                          | 
|                       ~A :-5                                                                                         | 
|                                                                                                                      | 
|                                                                                                                      |
|______________________________________________________________________________________________________________________|


