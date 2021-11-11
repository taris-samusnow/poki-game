#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
/\ /\    (\ (\
( ･ᴥ)━━━─(×･ )
ｻｸｻｸ…
/\ /\ (\ (\
( ･ᴥ)━(×･ )
ｻｸｻｸ…
/) /) (\ (\
( ･ᴥ)♡(×･ )
*/
int main(void){

  const int SLTIME = 1000000;

  char *pt1;
  char *pt2;
  char *pt3;

  /**/
  char *str1 = "/\\ /\\    (\\ (\\ \n";
  char *str2 = "( ･ᴥ)━━━─(×･ ) \n";
  char *str3 = " \n";

  system("clear");   /* 画面をクリア */

  for(int i=0; i<=0; i++) {

    pt1 = str1;
    pt2 = str2;
    pt3 = str3;

    while(*pt1) {
      printf("%c",*pt1);
      pt1++;
    }
    while(*pt2) {
      printf("%c",*pt2);
      pt2++;
    }
    while(*pt3) {
      printf("%c",*pt3);
      pt3++;
    }
  }

  usleep(SLTIME);
  system("clear");   /* 画面をクリア */

  /**/
  str1 = "/\\ /\\   (\\ (\\ \n";
  str2 = "( ･ᴥ)━━─(×･ ) \n";
  str3 = "ｻｸｻｸ… \n";

  for(int i=0; i<=0; i++) {
  
    pt1 = str1;
    pt2 = str2;
    pt3 = str3;

    while(*pt1) {
      printf("%c",*pt1);
      pt1++;
    }
    while(*pt2) {
      printf("%c",*pt2);
      pt2++;
    }
    while(*pt3) {
      printf("%c",*pt3);
      pt3++;
    }
  }

  usleep(SLTIME);
  system("clear");   /* 画面をクリア */

  /**/
  str1 = "/\\ /\\  (\\ (\\ \n";
  str2 = "( ･ᴥ)━─(×･ ) \n";
  str3 = "ｻｸｻｸ… \n";

  for(int i=0; i<=0; i++) {
  
    pt1 = str1;
    pt2 = str2;
    pt3 = str3;

    while(*pt1) {
      printf("%c",*pt1);
      pt1++;
    }
    while(*pt2) {
      printf("%c",*pt2);
      pt2++;
    }
    while(*pt3) {
      printf("%c",*pt3);
      pt3++;
    }
  }

  usleep(SLTIME);
  system("clear");   /* 画面をクリア */

  /**/
  str1 = "/\\ /\\ (\\ (\\ \n";
  str2 = "( ･ᴥ)─(×･ ) \n";
  str3 = "ｻｸｻｸ… \n";

  for(int i=0; i<=0; i++) {
  
    pt1 = str1;
    pt2 = str2;
    pt3 = str3;

    while(*pt1) {
      printf("%c",*pt1);
      pt1++;
    }
    while(*pt2) {
      printf("%c",*pt2);
      pt2++;
    }
    while(*pt3) {
      printf("%c",*pt3);
      pt3++;
    }
  }

  usleep(SLTIME);
  system("clear");   /* 画面をクリア */

  /**/
  str1 = "/\\ /\\ (\\ (\\ \n";
  str2 = "( >ᴥ)♡(×< ) \n";
  str3 = "ﾁｭ… \n";

  for(int i=0; i<=0; i++) {
  
    pt1 = str1;
    pt2 = str2;
    pt3 = str3;

    while(*pt1) {
      printf("%c",*pt1);
      pt1++;
    }
    while(*pt2) {
      printf("%c",*pt2);
      pt2++;
    }
    while(*pt3) {
      printf("%c",*pt3);
      pt3++;
    }
  }

  usleep(SLTIME);
  system("clear");   /* 画面をクリア */

  /**/
  str1 = " \n  \n 💜 Their love was ended with a happy kiss.♡ \n ";

  for(int i=0; i<=0; i++) {
  
    pt1 = str1;

    while(*pt1) {
      printf("%c",*pt1);
      pt1++;
    }
  }
  printf("\n");
}
