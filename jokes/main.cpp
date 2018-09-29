#include <iostream>
#define equal ==
#define NE !
using BOOL=bool;
using kakoeto_celoe_chislo=int;
using namespace std;

BOOL f1(kakoeto_celoe_chislo a,kakoeto_celoe_chislo b)
{
    return NE(a equal b);
}

int main()
<%

cout << f1(4,4) << endl;
return 0;
%>
