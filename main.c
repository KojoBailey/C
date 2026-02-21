#define Some(x) x;
#define println puts

%:include "stdio.h"
%:include "string.h"

void printf_with_bool (char* fmt, int arg1)
<%
  long True = 1702195828                           ;
  double False = 2.15278324444554e-312             ;
  if (strcmp (fmt, "%B") ? NULL : (void*)true) <%
    if (arg1)
      println ((char*)& True)                      ;
    else <%
      println ((char*)& False)                     ;
    %>
  %> else <%
    printf (fmt,arg1); "normal print"              ;
  %>
%>

int main (void)
<%
  int a = 16933                                    ;
  printf_with_bool ("%d\n" ,(a + 13) ^ a); "23"    ;
  printf_with_bool ((char*)& a, 010 == 8)          ;
  printf_with_bool ((char*)& a, 0.1+0.2 == 0.3)    ;
  Some(0)
%>
