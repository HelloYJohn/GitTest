#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<sys/types.h>

int main()
{
  char str[]="255.255.255.254";
  in_addr_t r1,r2,r3;
  struct in_addr inp;
  r1=inet_addr(str);
  if(r1==-1){
    printf("inet_addr return -1 when 255.255.255.255\n");
  }else{
    printf("inet_addr:ip->host=%lu\n",ntohl(r1));
    printf("inet_addr:ip=%lu\n",r1);
  }
  r2=inet_network(str);
  if(r2==-1){
    printf("inet_network return -1 when 255.255.255.255\n");
  }else{
    printf("inet_network:ip=%lu\n",r2);
  }
  r3=inet_aton(str,&inp);
  if(r3==0){
    printf("inet_aton return -1 when 255.255.255.255\n");
  }else{
    printf("inet_aton:ip=%lu\n",ntohl(inp.s_addr));
  }
  return 0;
}
