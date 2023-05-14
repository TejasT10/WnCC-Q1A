#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#include <cstring>

using namespace std;

#define MAX 10000

int roles(int a, int* phtml, int* ppython, int* pdsa, int* pjava, int* psql) {
    int count = 0;
    if(phtml[a]==0) count++;
    if(ppython[a]==0) count++;
    if(pdsa[a]==0) count++;
    if(pjava[a]==0) count++;
    if(psql[a]==0) count++;
    return 5 - count;
}

int allote() {
    
}

int allotment() {
    /*I plan to first allot at least someone to each project, without considering the opportunity of mentorship*/
    int count=0;
    int i=0, j=0;
    //while(i++<=n) allote(allot, i, shtml[i], spython[i], sdsa[i], sjava[i], ssql[i], m, phtml, ppython, pdsa, pjava, psql)
    //i=0;
    while (i++<=m) {
        j=0;
        if(phtml[i]!=0) {
            while(j++<=n) {
                if ((shtml[j] == phtml[i]) && (allot[j]==0)) {
                allot[j] = i; break;
                }
            }
            if(j==n+1) {
                j=0;
                if(pthml[i]+1<=5) {    
                    while(j++<=n) {
                        if ((shtml[j] == phtml[i] + 1) && (allot[j]==0)) {
                            allot[j] = i; break;
                        }
                    }
                }
            }
            if(j==n+1) {
                j=0;
                if(pthml[i]+2<=5) {    
                    while(j++<=n) {
                        if ((shtml[j] == phtml[i] + 2) && (allot[j]==0)) {
                            allot[j] = i; break;
                        }
                    }
                }
            }
            if(j==n+1) {
                j=0;
                if(pthml[i]+3<=5) {    
                    while(j++<=n) {
                        if ((shtml[j] == phtml[i] + 3) && (allot[j]==0)) {
                            allot[j] = i; break;
                        }
                    }
                }    
            }
            if(j==n+1) {
                j=0;
                if(pthml[i]+4<=5) {    
                    while(j++<=n) {
                        if ((shtml[j] == phtml[i] + 4) && (allot[j]==0)) {
                            allot[j] = i; break;
                        }
                    }
                }    
            }
        }
    
        j=0;
        if(ppython[i]!=0) {
            while(j++<=n) {
                if ((spython[j] == ppython[i]) && (allot[j]==0)) {
                allot[j] = i; break;
                }
            }
            if(j==n+1) {
                j=0;
                if(ppython[i]+1<=5) {    
                    while(j++<=n) {
                        if ((spython[j] == ppython[i] + 1) && (allot[j]==0)) {
                            allot[j] = i; break;
                        }
                    }
                }
            }
            if(j==n+1) {
                j=0;
                if(ppython[i]+2<=5) {    
                    while(j++<=n) {
                        if ((spython[j] == ppython[i] + 2) && (allot[j]==0)) {
                            allot[j] = i; break;
                        }
                    }
                }
            }
            if(j==n+1) {
                j=0;
                if(ppython[i]+3<=5) {    
                    while(j++<=n) {
                        if ((spython[j] == ppython[i] + 3) && (allot[j]==0)) {
                            allot[j] = i; break;
                        }
                    }
                }
            }
            if(j==n+1) {
                j=0;
                if(ppython[i]+4<=5) {    
                    while(j++<=n) {
                        if ((spython[j] == ppython[i] + 4) && (allot[j]==0)) {
                            allot[j] = i; break;
                        }
                    }
                }
            }
        }
        
        j=0;
        if(pdsa[i]!=0) {
            while(j++<=n) {
                if ((sdsa[j] == pdsa[i]) && (allot[j]==0)) {
                allot[j] = i; break;
                }
            }
            if(j==n+1) {
                j=0;
                if(pdsa[i]+1<=5) {    
                    while(j++<=n) {
                        if ((sdsa[j] == pdsa[i] + 1) && (allot[j]==0)) {
                            allot[j] = i; break;
                        }
                    }
                }
            }
            if(j==n+1) {
                j=0;
                if(pdsa[i]+2<=5) {    
                    while(j++<=n) {
                        if ((sdsa[j] == pdsa[i] + 2) && (allot[j]==0)) {
                            allot[j] = i; break;
                        }
                    }
                }
            }
            if(j==n+1) {
                j=0;
                if(pdsa[i]+3<=5) {    
                    while(j++<=n) {
                        if ((sdsa[j] == pdsa[i] + 3) && (allot[j]==0)) {
                            allot[j] = i; break;
                        }
                    }
                }
            }
            if(j==n+1) {
                j=0;
                if(pdsa[i]+4<=5) {    
                    while(j++<=n) {
                        if ((sdsa[j] == pdsa[i] + 4) && (allot[j]==0)) {
                            allot[j] = i; break;
                        }
                    }
                }
            }
        }
    
    while(i++<=n) {if(allot[i]!=0) count++;}
    return count;
}

int optimise() {
    int count=0;
    /*I now optimise the initial allotment by swapping people who would have a chance to mentor someone if switched*/
    return count;
}

int main() {
    int i=0, n=0;
    cin>>n; n++; //Creating a database of students and their skillsets via input
        int sroll[n];
        int shtml[n];
        int spython[n];
        int sdsa[n];
        int sjava[n];
        int ssql[n];
    while(i++<=n) {
        cin>>sroll[i]>>shtml[i]>>spython[i]>>sdsa[i]>>sjava[i]>>ssql[i];
    }
        int m=0;
        cin>>m; m++; //Creating a database of projects and their requirements via input
    //Not taking the name of project as an input as it is very inconvenient to take it in a stringed array, in addition to being immaterial on the whole
        int phtml[m];
        int ppython[m];
        int pdsa[m];
        int pjava[m];
        int psql[m];
        i=0;
    while(i++<=n) {
        cin>>phtml[i]>>ppython[i]>>pdsa[i]>>pjava[i]>>psql[i];
    }

    int allot[n]; i=0;
    while (i++<=n) allot[i] = 0;
    cout<<endl<<allotment(allot, n, shtml, spython, sdsa, ssql, m, phtml, ppython, pdsa, pjava, psql);
    cout<<endl<<optimise(allot, n, shtml, spython, sdsa, ssql, m, phtml, ppython, pdsa, pjava, psql);
}
