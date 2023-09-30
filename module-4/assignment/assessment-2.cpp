{\rtf1\ansi\ansicpg1252\cocoartf2709
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;\red255\green255\blue255;\red184\green111\blue179;
\red194\green125\blue100;\red193\green193\blue193;\red72\green139\blue206;\red67\green192\blue160;\red212\green213\blue153;
\red142\green213\blue255;\red167\green197\blue151;\red203\green203\blue202;\red189\green189\blue188;\red204\green172\blue105;
}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;\cssrgb\c100000\c100000\c100000\c0;\cssrgb\c77483\c52772\c75312;
\cssrgb\c80765\c56762\c46655;\cssrgb\c80264\c80263\c79963;\cssrgb\c34356\c61927\c84545;\cssrgb\c30653\c78980\c69024;\cssrgb\c86232\c86184\c66253;
\cssrgb\c61729\c86919\c100000;\cssrgb\c71061\c80852\c65647;\cssrgb\c83411\c83411\c83099;\cssrgb\c78690\c78689\c78395;\cssrgb\c84135\c72677\c48439;
}
\paperw11900\paperh16840\margl1440\margr1440\vieww28600\viewh18000\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs48 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec4 #include\strokec5 <iostream>\strokec6 \
\strokec4 using\strokec6  \strokec7 namespace\strokec6  \strokec8 std\strokec6 ;\
\pard\pardeftab720\partightenfactor0
\cf2 \strokec7 int\strokec6  \strokec9 main\strokec6 ()\
\{\
    \strokec7 char\strokec6  \strokec10 name\strokec6 [\strokec11 50\strokec6 ]; \
    \strokec7 char\strokec6  \strokec10 bir1\strokec6 []\strokec12 =\strokec5 "cheese"\strokec6  ,\strokec10 bir2\strokec6 []\strokec12 =\strokec5 "Vegetable"\strokec6  ,\strokec10 bir3\strokec6 []\strokec12 =\strokec5 "Paneer"\strokec6  ,\strokec10 bir4\strokec6 []\strokec12 =\strokec5 "cheese"\strokec6 ;\
    \strokec7 char\strokec6  \strokec10 pizza1\strokec6 []\strokec12 =\strokec5 "margerita"\strokec6 ,\strokec10 pizza2\strokec6 []\strokec12 =\strokec5 "italian"\strokec6 ,\strokec10 pizza3\strokec6 []\strokec12 =\strokec5 "delight"\strokec6 ,\strokec10 pizza4\strokec6 []\strokec12 =\strokec5 "cheese"\strokec6 ;\
    \strokec7 char\strokec6  \strokec10 sand1\strokec6 []\strokec12 =\strokec5 "Veg"\strokec6 ,\strokec10 sand2\strokec6 []\strokec12 =\strokec5 "Masala"\strokec6 ,\strokec10 sand3\strokec6 []\strokec12 =\strokec5 "Noodle"\strokec6 ,\strokec10 sandw\strokec6 []\strokec12 =\strokec5 "corn"\strokec6 ;\
    \strokec7 char\strokec6  \strokec10 bur1\strokec6 []\strokec12 =\strokec5 "BBQ"\strokec6 , \strokec10 bur2\strokec6 []\strokec12 =\strokec5 "Double Cheese"\strokec6 , \strokec10 bur3\strokec6 []\strokec12 =\strokec5 "Vegetable"\strokec6 ,\strokec10 bur4\strokec6 []\strokec12 =\strokec5 "Paneer"\strokec6 ;\
    \strokec7 char\strokec6  \strokec10 roll1\strokec6 []\strokec12 =\strokec5 "Veg"\strokec6 ,\strokec10 sandw2\strokec6 []\strokec12 =\strokec5 "Cheese"\strokec6 ,\strokec10 roll3\strokec6 []\strokec12 =\strokec5 "Mexican"\strokec6 ,\strokec10 roll4\strokec6 []\strokec12 =\strokec5 "Aloo tikki"\strokec6 ;\
    \strokec7 char\strokec6  \strokec10 gotobeginning\strokec6  ;\
    \strokec7 int\strokec6  \strokec10 choice\strokec12 =\strokec11 0\strokec6 ,\strokec10 b\strokec6 ,\strokec10 pizzaoption1\strokec6 , \strokec10 qty\strokec6 ;\
    \strokec13 starting\strokec6 :\
    \strokec9 system\strokec6 (\strokec5 "cls"\strokec6 );\
    \strokec10 cout\strokec9 <<\strokec5 "Welcome to Food Court Restaurant"\strokec9 <<endl\strokec6 ;;\
    \strokec10 cout\strokec9 <<\strokec5 "May I know your good name please: "\strokec6 ;\
    \strokec10 cin\strokec6 .\strokec9 getline\strokec6 (\strokec10 name\strokec6 , \strokec11 50\strokec6 );\
    \strokec10 cout\strokec9 <<\strokec5 "Nice to meet you "\strokec9 <<\strokec10 name\strokec9 <<endl<<\strokec5 "What would you like to order?"\strokec9 <<endl\strokec6 ;\
    \strokec10 cout\strokec9 <<\strokec5 "1.Biryani\strokec14 \\t\strokec5 "\strokec6  \strokec5 "2.Pizza\strokec14 \\t\strokec5 "\strokec6  \strokec5 "3.Sandwich\strokec14 \\t\strokec5 "\strokec6  \strokec5 "4.Burger\strokec14 \\t\strokec5 "\strokec6  \strokec5 "5.Rolls\strokec14 \\t\strokec5 "\strokec6 ;\
    \strokec10 cout\strokec9 <<\strokec5 "\strokec14 \\n\strokec5 Please select your prefered dish: "\strokec6 ;\
    \strokec10 cin\strokec9 >>\strokec10 choice\strokec6 ;\
    \strokec4 if\strokec6 (\strokec10 choice\strokec12 ==\strokec11 1\strokec6 )\
     \{\
        \strokec10 cout\strokec9 <<\strokec5 "1) "\strokec9 <<\strokec10 bir1\strokec9 <<\strokec5 "\strokec14 \\n\strokec5 "\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "2) "\strokec9 <<\strokec10 bir2\strokec9 <<\strokec5 "\strokec14 \\n\strokec5 "\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "3) "\strokec9 <<\strokec10 bir3\strokec9 <<\strokec5 "\strokec14 \\n\strokec5 "\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "4) "\strokec9 <<\strokec10 bir4\strokec9 <<\strokec5 "\strokec14 \\n\strokec5 "\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "Please choose your biryani: "\strokec9 <<endl\strokec6 ;\
        \strokec10 cin\strokec9 >>\strokec10 b\strokec6 ;\
        \strokec4 if\strokec6 (\strokec10 b\strokec12 >=\strokec11 1\strokec6  \strokec12 &&\strokec6  \strokec10 b\strokec12 <=\strokec11 4\strokec6 )\
        \{\
            \strokec10 cout\strokec9 <<\strokec5 "Please Enter Quantity: "\strokec6 ;\
            \strokec10 cin\strokec9 >>\strokec10 qty\strokec6 ;\
            \strokec4 switch\strokec6 (\strokec10 b\strokec6 )\
            \{\
            \strokec4 case\strokec6  \strokec11 1\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 600.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 2\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 300.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 3\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 500.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 4\strokec6 : \strokec10 choice\strokec12 =\strokec11 450.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
                  \}\
            \strokec9 system\strokec6 (\strokec5 "cls"\strokec6 );\
            \strokec4 switch\strokec6  (\strokec10 b\strokec6 )\
            \{\
             \strokec4 case\strokec6  \strokec11 1\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 bir1\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is:  "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant "\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 2\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 bir2\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant "\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 3\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 ""\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 bir3\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant "\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 4\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 ""\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 bir4\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant "\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
            \}\
            \strokec10 cout\strokec9 <<\strokec5 "Do you want to continue?Press Y / N:"\strokec9 <<endl\strokec6 ;\
            \strokec10 cin\strokec9 >>\strokec10 gotobeginning\strokec6 ;\
            \strokec4 if\strokec6 (\strokec10 gotobeginning\strokec12 ==\strokec5 'Y'\strokec6  \strokec12 ||\strokec6  \strokec10 gotobeginning\strokec12 ==\strokec5 'y'\strokec6 )\
            \{\
              \strokec4 goto\strokec6  \strokec13 starting\strokec6 ;\
              \
            \}\
        \}\
     \}\
     \strokec4 else\strokec6  \strokec4 if\strokec6 (\strokec10 choice\strokec12 ==\strokec11 2\strokec6 )\
     \{\
        \strokec10 cout\strokec9 <<\strokec5 "1) "\strokec9 <<\strokec10 pizza1\strokec9 <<endl\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "2) "\strokec9 <<\strokec10 pizza2\strokec9 <<endl\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "3) "\strokec9 <<\strokec10 pizza3\strokec9 <<endl\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "4) "\strokec9 <<\strokec10 pizza4\strokec9 <<endl\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "Please choose your pizza: "\strokec6 ;\
        \strokec10 cin\strokec9 >>\strokec10 b\strokec6 ;\
        \strokec4 if\strokec6 (\strokec10 b\strokec12 >=\strokec11 1\strokec6  \strokec12 &&\strokec6  \strokec10 b\strokec12 <=\strokec11 4\strokec6 )\
        \{\
            \strokec10 cout\strokec9 <<\strokec5 "Please Enter Quantity: "\strokec6 ;\
            \strokec10 cin\strokec9 >>\strokec10 qty\strokec6 ;\
            \strokec4 switch\strokec6 (\strokec10 b\strokec6 )\
            \{\
            \strokec4 case\strokec6  \strokec11 1\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 200.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 2\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 300.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 3\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 250.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 4\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 400.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \}\
            \strokec9 system\strokec6 (\strokec5 "cls"\strokec6 );\
            \strokec4 switch\strokec6  (\strokec10 b\strokec6 )\
            \{\
             \strokec4 case\strokec6  \strokec11 1\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 pizza1\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 2\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 "  "\strokec9 <<\strokec10 pizza2\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 3\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 pizza3\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 4\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 pizza4\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
            \}\
            \strokec10 cout\strokec9 <<\strokec5 "Would you like to order anything else? Y / N:"\strokec6 ;\
            \strokec10 cin\strokec9 >>\strokec10 gotobeginning\strokec6 ;\
            \strokec4 if\strokec6 (\strokec10 gotobeginning\strokec12 ==\strokec5 'Y'\strokec6  \strokec12 ||\strokec6  \strokec10 gotobeginning\strokec12 ==\strokec5 'y'\strokec6 )\
            \{\
              \strokec4 goto\strokec6  \strokec13 starting\strokec6 ;\
              \
            \}\
 \}\
\}\
\pard\pardeftab720\partightenfactor0
\cf2 \strokec4 else\strokec6  \strokec4 if\strokec6 (\strokec10 choice\strokec12 ==\strokec11 3\strokec6 )\
     \{\
        \strokec10 cout\strokec9 <<\strokec5 "1) "\strokec9 <<\strokec10 sand1\strokec9 <<endl\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "2) "\strokec9 <<\strokec10 sand2\strokec9 <<endl\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "3) "\strokec9 <<\strokec10 sand3\strokec9 <<endl\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "4) "\strokec12 <<\strokec6 sand4\strokec12 <<\strokec9 endl\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "Please choose your sandwich: "\strokec6 ;\
        \strokec10 cin\strokec9 >>\strokec10 b\strokec6 ;\
        \strokec4 if\strokec6 (\strokec10 b\strokec12 >=\strokec11 1\strokec6  \strokec12 &&\strokec6  \strokec10 b\strokec12 <=\strokec11 4\strokec6 )\
        \{\
            \strokec10 cout\strokec9 <<\strokec5 "Please Enter Quantity: "\strokec6 ;\
            \strokec10 cin\strokec9 >>\strokec10 qty\strokec6 ;\
            \strokec4 switch\strokec6 (\strokec10 b\strokec6 )\
            \{\
            \strokec4 case\strokec6  \strokec11 1\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 200.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 2\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 250.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 3\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 100.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 4\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 300.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \}\
            \strokec9 system\strokec6 (\strokec5 "cls"\strokec6 );\
            \strokec4 switch\strokec6  (\strokec10 b\strokec6 )\
            \{\
             \strokec4 case\strokec6  \strokec11 1\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 sand1\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 2\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 "  "\strokec9 <<\strokec10 sand2\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \
             \strokec4 case\strokec6  \strokec11 3\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 sand3\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 4\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec12 <<\strokec6 sand4\strokec12 <<\strokec5 " "\strokec12 <<\strokec9 endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
\
            \}\
            \strokec10 cout\strokec9 <<\strokec5 "Would you like to order anything else? Y / N:"\strokec6 ;\
            \strokec10 cin\strokec9 >>\strokec10 gotobeginning\strokec6 ;\
            \strokec4 if\strokec6 (\strokec10 gotobeginning\strokec12 ==\strokec5 'Y'\strokec6  \strokec12 ||\strokec6  \strokec10 gotobeginning\strokec12 ==\strokec5 'y'\strokec6 )\
            \{\
              \strokec4 goto\strokec6  \strokec13 starting\strokec6 ;\
             \
            \}\
 \}\
\}\
    \strokec4 else\strokec6  \strokec4 if\strokec6 (\strokec10 choice\strokec12 ==\strokec11 4\strokec6 )\
     \{\
        \strokec10 cout\strokec9 <<\strokec5 "1)  "\strokec9 <<\strokec10 bur1\strokec9 <<endl\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "2)  "\strokec9 <<\strokec10 bur2\strokec9 <<endl\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "3)  "\strokec9 <<\strokec10 bur3\strokec9 <<endl\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "4)  "\strokec9 <<\strokec10 bur4\strokec9 <<endl\strokec6 ;\
        \strokec10 cout\strokec9 <<\strokec5 "Please chooose your burger: "\strokec9 <<endl\strokec6 ;\
        \strokec10 cin\strokec9 >>\strokec10 b\strokec6 ;\
        \strokec4 if\strokec6 (\strokec10 b\strokec12 >=\strokec11 1\strokec6  \strokec12 &&\strokec6  \strokec10 b\strokec12 <=\strokec11 4\strokec6 )\
        \{\
            \strokec10 cout\strokec9 <<\strokec5 "Please Enter Quantity: "\strokec6 ;\
            \strokec10 cin\strokec9 >>\strokec10 qty\strokec6 ;\
            \strokec4 switch\strokec6 (\strokec10 b\strokec6 )\
            \{\
            \strokec4 case\strokec6  \strokec11 1\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 160.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 2\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 200.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 3\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 100.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 4\strokec6 : \strokec10 choice\strokec6  \strokec12 =\strokec6  \strokec11 250.00\strokec12 *\strokec10 qty\strokec6 ;\
            \strokec4 break\strokec6 ;\
\
            \}\
            \strokec9 system\strokec6 (\strokec5 "cls"\strokec6 );\
            \strokec4 switch\strokec6  (\strokec10 b\strokec6 )\
            \{\
             \strokec4 case\strokec6  \strokec11 1\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 bur1\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your total bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 2\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 "  "\strokec9 <<\strokec10 bur2\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 3\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 ""\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 bur3\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 4\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 ""\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 bur4\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
            \}\
            \strokec10 cout\strokec9 <<\strokec5 "Would you like to order anything else? Y / N:"\strokec6 ;\
            \strokec10 cin\strokec9 >>\strokec10 gotobeginning\strokec6 ;\
            \strokec4 if\strokec6 (\strokec10 gotobeginning\strokec12 ==\strokec5 'Y'\strokec6  \strokec12 ||\strokec6  \strokec10 gotobeginning\strokec12 ==\strokec5 'y'\strokec6 )\
            \{\
              \strokec4 goto\strokec6  \strokec13 starting\strokec6 ;\
            \}\
            \}\
            \}\
            \strokec4 else\strokec6 \
            \{\
                \strokec9 system\strokec6 (\strokec5 "cls"\strokec6 );\
                \strokec10 cout\strokec9 <<\strokec5 "Please choose proper choice"\strokec6 ;\
                \strokec10 cout\strokec9 <<\strokec5 "Do you want to continue? Y / N: "\strokec6  ;\
                \strokec10 cin\strokec9 >>\strokec10 gotobeginning\strokec6 ;\
                \strokec4 if\strokec6 (\strokec10 gotobeginning\strokec12 ==\strokec5 'Y'\strokec6  \strokec12 ||\strokec6  \strokec10 gotobeginning\strokec12 ==\strokec5 'y'\strokec6 )\
                \{\
                  \strokec4 goto\strokec6  \strokec13 starting\strokec6 ;\
                \}     \
            \}\
        \strokec4 else\strokec6  \strokec4 if\strokec6 (choice\strokec12 ==\strokec11 5\strokec6 )\
     \{\
        cout\strokec12 <<\strokec5 "1) "\strokec12 <<\strokec6 roll1\strokec12 <<\strokec6 endl;\
        cout\strokec12 <<\strokec5 "2) "\strokec12 <<\strokec6 roll2\strokec12 <<\strokec6 endl;\
        cout\strokec12 <<\strokec5 "3) "\strokec12 <<\strokec6 roll3\strokec12 <<\strokec6 endl;\
        cout\strokec12 <<\strokec5 "4) "\strokec12 <<\strokec6 roll4\strokec12 <<\strokec6 endl;\
        cout\strokec12 <<\strokec5 "Please choose your rolls: "\strokec6 ;\
        cin\strokec12 >>\strokec6 b;\
        \strokec4 if\strokec6 (b\strokec12 >=\strokec11 1\strokec6  \strokec12 &&\strokec6  b\strokec12 <=\strokec11 4\strokec6 )\
        \{\
            cout\strokec12 <<\strokec5 "Please Enter Quantity: "\strokec6 ;\
            cin\strokec12 >>\strokec6 qty;\
            \strokec4 switch\strokec6 (b)\
            \{\
            \strokec4 case\strokec6  \strokec11 1\strokec6 : choice \strokec12 =\strokec6  \strokec11 50.00\strokec12 *\strokec6 qty;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 2\strokec6 : choice \strokec12 =\strokec6  \strokec11 150.00\strokec12 *\strokec6 qty;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 3\strokec6 : choice \strokec12 =\strokec6  \strokec11 100.00\strokec12 *\strokec6 qty;\
            \strokec4 break\strokec6 ;\
            \strokec4 case\strokec6  \strokec11 4\strokec6 : choice \strokec12 =\strokec6  \strokec11 200.00\strokec12 *\strokec6 qty;\
            \strokec4 break\strokec6 ;\
            \}\
            \strokec9 system\strokec6 (\strokec5 "cls"\strokec6 );\
            \strokec4 switch\strokec6  (\strokec10 b\strokec6 )\
            \{\
             \strokec4 case\strokec6  \strokec11 1\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 roll1\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 2\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 "  "\strokec12 <<\strokec6 roll2\strokec12 <<\strokec5 " "\strokec12 <<\strokec9 endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 3\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 roll3\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
             \strokec4 case\strokec6  \strokec11 4\strokec6 :\
             \strokec10 cout\strokec9 <<\strokec5 "Your Bill: "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 qty\strokec9 <<\strokec5 " "\strokec9 <<\strokec10 roll4\strokec9 <<\strokec5 " "\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Your Total Bill is: "\strokec9 <<\strokec10 choice\strokec9 <<endl\strokec6 ;\
             \strokec10 cout\strokec9 <<\strokec5 "Thank you for choosing food court restaurant"\strokec9 <<endl\strokec6 ;\
             \strokec4 break\strokec6 ;\
            \}\
            \strokec10 cout\strokec9 <<\strokec5 "Would you like to order anything else? Y / N:"\strokec6 ;\
            \strokec10 cin\strokec9 >>\strokec10 gotobeginning\strokec6 ;\
            \strokec4 if\strokec6 (\strokec10 gotobeginning\strokec12 ==\strokec5 'Y'\strokec6  \strokec12 ||\strokec6  \strokec10 gotobeginning\strokec12 ==\strokec5 'y'\strokec6 )\
            \{\
              \strokec4 goto\strokec6  \strokec13 starting\strokec6 ;\
            \}\
 \}\
\}\
     \strokec4 return\strokec6  \strokec11 0\strokec6 ;\
\}\
\
}