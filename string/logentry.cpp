//
//
// File:        logentry.cpp  
//       
// Version:     Milestone 4 project 2
// Date:        
// Author:      Anna Waltz
// Class:       23001-002
// Description: Class implementation for a log entry.
// 
//
 
#include "string.hpp"
#include "logentry.hpp"
#include <iostream>
#include <vector>

// REQUIRES:
// ENSURES:
LogEntry::LogEntry(const String& line) {
    //Use split to create LogEntry
    std::vector<String> logEntryParts = line.split(' ');
// {ip,"-","-",[date:time], "-0400", "GET",request, "HTTP" , status, byte}
    host=logEntryParts[0]; //ip adress

    //[00/00/0000:00:00:00]
    date= logEntryParts[3].substr(1,11);
    time= logEntryParts[3].substr(13,20);
    
    request = logEntryParts[5] + logEntryParts[6] + logEntryParts[7]; 
    status = logEntryParts[8]; 
    if(logEntryParts[9]=="-")
        number_of_bytes=0;
    else{
    String BYTES= logEntryParts[9];
    //number_of_bytes = logEntryParts[9]; 
    int place=1;
    number_of_bytes=0;
    for(int i =BYTES.length()-1; i >=0; i--){
        number_of_bytes+= place*(BYTES[i]-'0');
        place*=10;
    }
    }
}

// REQUIRES: file open
// ENSURES:
std::vector<LogEntry> parse(std::istream& in) { //read in log entries, each line new entry
    std::vector<LogEntry> result;
    int max=200;
    String tempp;
    char temp[max];
    int index=0;
    while(in.getline(temp,max)){
        result.resize(index+1);
        tempp=temp;
        result[index]=tempp;
        index++;
    }

    return result;
}

// REQUIRES:
// ENSURES:
void output_all(std::ostream& out, const std::vector<LogEntry>& logs) {
    for(int i=0; i < (int)logs.size(); i++){
        out << logs[i] << std::endl;
    }
}

// REQUIRES:
// ENSURES:
void by_host(std::ostream& out, const std::vector<LogEntry>& logs) {
    for(int i=0; i < (int)logs.size(); i++){
        out << logs[i].getHost() << std:: endl;
    }
}

// REQUIRES:
// ENSURES:
int byte_count(const std::vector<LogEntry>& logs) {
    int byteTotal=0;
    for(int i=0; i<(int)logs.size(); i++){
        byteTotal+=logs[i].getBytes();
    }
    return byteTotal;
}

