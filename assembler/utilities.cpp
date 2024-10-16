#include "utilities.hpp"
#include <iostream>

//Anna Waltz
//Project Three
//file for conversions on postfix, prefix, and assembly
String expression(std:: istream& in , std::ostream& out){
    String x;
    String expressions="";
    out << "Standard Infix::" << std::endl;

    in >> x;
    while(!(in.eof())){
        
        if( x!=";" && x!="(" && x!=")"){
            out << x << " ";
            expressions+=x + " ";
        }
        else if(x==";"){
            out <<" \n";
            expressions+= "\n ";
        }
        in >> x;
    }
    out << std::endl;
    return expressions;
}




String infixToPostfix(std:: istream& in, std::ostream& out){

    String expression;
    String x;

    stack<String> stk;
    
    while(in >> x && !(in.eof())){

        while(x!= ";" ){
            if(x == ")" ){
                String rhs = stk.pop();
                String op = stk.pop();
                String lhs = stk.pop();
                stk.push(lhs + rhs + op ); //pre stk.push(op + lhs + rhs );
            }
            else if(x != "("){
                stk.push(x + " ");
            }
            in >> x;
        }
        expression+=stk.top() + "\n";
        //out << stk.pop() + " " << std::endl;

    }
    out << "PostFix:: \n" << expression << std::endl;
    return expression;

}

//same as postfix except for order of push to stack, operator first instead of last
String infixToPrefix(std:: istream& in, std:: ostream& out){
 
    String expression;
    String x;

    stack<String> stk;
    
    while(in >> x && !(in.eof())){

        while(x!= ";" ){
            if(x == ")" ){
                String rhs = stk.pop();
                String op = stk.pop();
                String lhs = stk.pop();
                stk.push(op + lhs + rhs); //pre stk.push(op + lhs + rhs );
            }
            else if(x != "("){
                stk.push(x + " ");
            }
            in >> x;
        }
        expression+=stk.pop() + "\n";
        //out << stk.pop() + " " << std::endl;

    }
    out << "PreFix:: \n" <<expression << std::endl;
    return expression;

}




char* charCount(int num){ //int to char array
    int number=num;
    int size=0;
    char *counter= new char[55];
    while(number>0){
        number/=10;
        size++;
    }
    for(int i=size-1; i >=0; i--){
        counter[i]='0'+num%10;
        num/=10;
    }

    return counter;

}
String postfixToAs(const String& postfixExpress){

    int count=1;
    String tmp("TMP");

    stack<String> s;
    std::vector<String> vec = postfixExpress.split(' ');

    String assembly;

    for(int i=0; i < (int)vec.size()-1; i++){//iterate over vec
        if((vec[i]!="*") && (vec[i]!="/") && (vec[i]!="+") && (vec[i]!="-")){// token is not operator
            s.push(vec[i]);
            //std::cout << "work";
        }
        else{ //token is operator
            String right= s.pop();
            String left= s.pop();

            String subAssem = evaluate(left, right, vec[i],tmp+charCount(count) );  //may result in error for concatination
            s.push(tmp+charCount(count));
            assembly += subAssem;
            count++;
        }
    }
    //out << assembly << std::endl;
    return assembly+"\n";
    
}



String evaluate(const String& left , const String& right, const String& op, const String& tmp){


    String eval;
    eval= "LD \t" + left + "\n";

    if(op=="*")
        eval+=  "MU \t" + right+ "\n";
    else if(op=="+")
        eval+= "AD \t" + right + "\n";
    else if(op=="/")
        eval+= "DV \t" +right+ "\n";
    else if(op=="-")
        eval+= "SB \t" +right+ "\n";


    eval+= "ST \t" + tmp + "\n";

    return eval;

}