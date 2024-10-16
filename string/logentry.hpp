//
// File:        logentry.hpp
//
// Version:     Milestone 4 project 2
// Date:        
// Author:      Anna Waltz
// Class:       23001-002
// Description: Class definition for a log entry.
//
//
//
 
#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

#include "string.hpp"
#include <iostream>
#include <vector>


class Date {
public:
            Date() {};
            Date(String listOf) {
                //         00/00/0000
                day =listOf.substr(0,1);
                month=listOf.substr(3,4);
                year= listOf.substr(6,9);

            };
            const String getDate()const {
                return day +"/"+ month +"/"+ year;
            };
private:
    String  day, month, year;
};

//
class Time {
  public:
            Time() {};
            Time(String listOf) {
                // hour:min:sec
                hour=listOf.substr(0,1);
                minute=listOf.substr(3,4);
                second=listOf.substr(6,7);
            };
            const String getTime() const{
                return hour +":"+ minute +":"+ second;
            };
  private:
    String  hour, minute, second;
};


// A single log entry
class LogEntry {
public:
            LogEntry() {};
            LogEntry(const String&);
            const String getHost()const {
                return host;
            };
            int getBytes()const {
                return number_of_bytes;
            };
            const String getRequest() const{
                return request;
            };
            const String getStatus() const{
                return status;
            };
    friend  std::ostream& operator<<(std::ostream& out, const LogEntry& log){
        out << log.host << " "<< log.date.getDate()<< " "<< log.time.getTime()<< " " << log.request << " "<< log.status << " "<<log.number_of_bytes ;
        return out;
    }

private:
    String  host; //ip adress
    Date    date; 
    Time    time;
    String  request; //"GET..."
    String  status; //second to last num
    int     number_of_bytes; //last number, total all lines
};


//
// Free functions
//

std::vector<LogEntry>   parse  (std::istream&);
void output_all  (std::ostream&, const std::vector<LogEntry>&);
void  by_host     (std::ostream&, const std::vector<LogEntry>&);
int  byte_count  (const std::vector<LogEntry>&);

#endif
