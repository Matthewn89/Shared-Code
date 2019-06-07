#include <stdio.h>
#include <time.h>
#include <string.h>
#include "code.h"

void DisplayTime(int argc, char* argv[]) {
        int hours, minutes, seconds, day, month, year;

        time_t now;
        
        time(&now);

        printf("Today is : %s", ctime(&now));

        struct tm *local = localtime(&now);

	if (strcmp(argv[1], argv[2]) == 0) {
	  hours = local->tm_hour;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon;          
          year = local->tm_year + 1900;     

        if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
	}
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
	}

	}
	else if (strcmp(argv[1],"PDT")==0 && strcmp(argv[2],"HST")==0){
       	hours = local->tm_hour -3;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

	 if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
	}

	else if (strcmp(argv[1],"PDT")==0 && strcmp(argv[2],"AKDT")==0){
        hours = local->tm_hour -1;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }     
	}
	else if (strcmp(argv[1],"PDT")==0 && strcmp(argv[2],"MDT")==0){
        hours = local->tm_hour +1;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
	}

	else if (strcmp(argv[1],"PDT")==0 && strcmp(argv[2],"CDT")==0){
        hours = local->tm_hour +2;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
	}     

	 else if (strcmp(argv[1],"PDT")==0 && strcmp(argv[2],"EDT")==0){
        hours = local->tm_hour +3;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
	}

	else if (strcmp(argv[1],"HST")==0 && strcmp(argv[2],"AKDT")==0){
        hours = local->tm_hour +2;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }

	else if (strcmp(argv[1],"HST")==0 && strcmp(argv[2],"PDT")==0){
        hours = local->tm_hour +3;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }               

	else if (strcmp(argv[1],"HST")==0 && strcmp(argv[2],"MDT")==0){
        hours = local->tm_hour +4;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"HST")==0 && strcmp(argv[2],"CDT")==0){
        hours = local->tm_hour +5;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"HST")==0 && strcmp(argv[2],"EDT")==0){
        hours = local->tm_hour +6;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"AKDT")==0 && strcmp(argv[2],"HST")==0){
        hours = local->tm_hour -2;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"AKDT")==0 && strcmp(argv[2],"PDT")==0){
        hours = local->tm_hour +1;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"AKDT")==0 && strcmp(argv[2],"MDT")==0){
        hours = local->tm_hour +2;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"AKDT")==0 && strcmp(argv[2],"CDT")==0){
        hours = local->tm_hour +3;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"AKDT")==0 && strcmp(argv[2],"EDT")==0){
        hours = local->tm_hour +6;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }  

	else if (strcmp(argv[1],"MDT")==0 && strcmp(argv[2],"HST")==0){
        hours = local->tm_hour -4;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }        

	else if (strcmp(argv[1],"MDT")==0 && strcmp(argv[2],"AKDT")==0){
        hours = local->tm_hour -2;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"MDT")==0 && strcmp(argv[2],"PDT")==0){
        hours = local->tm_hour -1;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"MDT")==0 && strcmp(argv[2],"CDT")==0){
        hours = local->tm_hour +1;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"MDT")==0 && strcmp(argv[2],"EDT")==0){
        hours = local->tm_hour +2;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"CDT")==0 && strcmp(argv[2],"HST")==0){
        hours = local->tm_hour -5;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"CDT")==0 && strcmp(argv[2],"AKDT")==0){
        hours = local->tm_hour -3;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"CDT")==0 && strcmp(argv[2],"PDT")==0){
        hours = local->tm_hour -2;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"CDT")==0 && strcmp(argv[2],"MDT")==0){
        hours = local->tm_hour -1;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"CDT")==0 && strcmp(argv[2],"EDT")==0){
        hours = local->tm_hour +1;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        } 

	else if (strcmp(argv[1],"EDT")==0 && strcmp(argv[2],"HST")==0){
        hours = local->tm_hour -6;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }         

	else if (strcmp(argv[1],"EDT")==0 && strcmp(argv[2],"AKDT")==0){
        hours = local->tm_hour -4;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"EDT")==0 && strcmp(argv[2],"PDT")==0){
        hours = local->tm_hour -3;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"EDT")==0 && strcmp(argv[2],"MDT")==0){
        hours = local->tm_hour -2;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     

	else if (strcmp(argv[1],"EDT")==0 && strcmp(argv[2],"CDT")==0){
        hours = local->tm_hour -1;           
          minutes = local->tm_min;            
          seconds = local->tm_sec;            

          day = local->tm_mday;               
          month = local->tm_mon + 1;          
          year = local->tm_year + 1900;

         if (hours < 12) {
                printf("Time is : %02d:%02d:%02d am\n", hours, minutes, seconds);
        }
        else {
        printf("Time is : %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);

        printf("Date is : %02d/%02d/%d\n", day, month, year);
        }
        }     
}

