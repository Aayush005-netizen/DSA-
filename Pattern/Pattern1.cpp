#include <iostream>
using namespace std;

void pattern1(int n){
   int i = 1;
   while(i<=n){
       int j=1;
       while(j<=n){
           cout<<"*";
           j++;
       }
       cout<<endl;
       i++;
   }
}

void pattern2(int n){
    int i = 1;
    while(i<=n){
        int j = i;
        while (j<=n){
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern3(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern4(int n){
    int i=n;
    while(i>0){
        int j = n;
        while (j>0){
            cout<<j;
            j--;
        }
        cout<<endl;
        i--;
    }
}

void pattern5(int n){
    int i = 1;
    while (i<=n){
        int j = 1;
        while(j <= n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern6(int n){
    int i = 1;
    int j = 1;
    while(i<=n){
        int k = 1;
        while(k<=n){
            cout<<j;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern7(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<"*"<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern8(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }
}

void pattern9(int n){
    int i = 1;
    int count = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}

void pattern10(int n){
    int i = 1;
    /*while(i<=n){
        int j = 1;
        int count = i;
        while(j<=i){
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }*/
    while(i<=n){
        int j =i;
        while(j < i+i){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern11(int n){
    int i = 1;
    while (i<=n){
        int j = i;
        while (j>0){
            cout<<j<<" ";
            j--;
        }
        i++;
        cout<<endl;
    }
}

void pattern12(int n){
    int i = 0;
    while(i<n){
        char print = 'A' + i;
        int j=0;
        while(j<n){
            cout<<print;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern13(int n){
    int i = 0;
    while(i<n){
        int j=0;
        while(j<n){
            char print = 'A' +j;
            cout<<print;
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern14(int n){
    int i = 0;
    char value = 'A';
    while(i<n){
        int j = 0;
        while(j<n){
            cout<<char(value+i+j);
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern15(int n){
    int i = 0;
    char value = 'A';
    while(i<n){
        int j = 0;
        while(j<n){
            cout<<char(value);
            j++;
            value++;
        }
        cout<<endl;
        i++;
    }
}

void pattern16(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=i){
            cout<<char('A'+ i -1);
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern17(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<char('A' + i + j - 2);
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern18(int n){
    int i = 1;
    char value ='A';
    while(i<=n){
        int j = 1;
        while (j<=i)
        {
            cout<<char(value);
            j++;
            value++;
        }
        cout<<endl;
        i++;
    }
}

void pattern19(int n){
    int i = 0;
    char value = 'D';
    while (i<n)
    {
        int j = 0;
        while (j<=i)
        {
            cout<<char(value - i + j);
            j++;
        }
        cout<<endl;
        i++;
    }
    
}

void pattern20(int n){
    int i = 1;
    while(i<=n){
        int j = n-i;
        int k = 1;
        while(j){
            cout<<" ";
            j--;
        }
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
}

void pattern21(int n){
    int i = 0;
    while(i<n){
        int j = 1;
        while(j <= n - i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}

void pattern22(int n){
    int i = 0;
    while (i < n){
        int j = 0;
        int k = n-i;
        while(j<=i){
            cout<<" ";
            j++;
        }
        while(k>0){
            cout<<"*";
            k--;
        }
        cout<<endl;
        i++;
    }
}

void pattern23(int n){
    int i = 0;
    while (i < n){
        int j = 0;
        int k = n-i;
        while(j<=i){
            cout<<" ";
            j++;
        }
        while(k>0){
            cout<<i+1;
            k--;
        }
        cout<<endl;
        i++;
    }
}

void pattern24(int n){
    int i = 0;
    while(i<n){
        int j = n-i;
        int k = 0;
        while(j>0){
            cout<<" ";
            j--;
        }
        while(k<=i){
            cout<<i+1;
            k++;
        }
        i++;
        cout<<endl;
    }
}

void pattern25(int n){
    int i = 0;
    while(i<n){
        int j = 0;
        int k = n-i;
        while(j<=i){
            cout<<" ";
            j++;
        }
        int l = j;
        while(k>0){
            cout<<l;
            k--;
            l++;
        }
        i++;
        cout<<endl;
    }
}

void pattern26(int n){
    int i =0;
    int value = 1;
    while(i<n){
        int j = n-i;
        int k = 0;
        while(j>0){
            cout<<" ";
            j--;
        }
        while(k<=i){
            cout<<value;
            value++;
            k++;
        }
        i++;
        cout<<endl;
    }
}

void pattern27(int n){
    int i = 0;
    while (i < n){
        int j = n-i;
        while (j>0){
            cout<<" ";
            j--;
        }
        int k = 0;
        while(k <=i){
            cout<<k+1;
            k++;
        }
        int l = i;
        while(l>0){
            cout<<l;
            l--;
        }
        i++;
        cout<<endl;
    }
}

void pattern28(int n){
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        int k = 2*(i-1);
        while(k>0){
            cout<<"*";
            k--;
        }
        int l = n-i+1;
        while(l>0){
            cout<<l;
            l--;
        }
        i++;
        cout<<endl;
    }
    
}

int main(){
    int n;
     cin>>n;
    //  pattern1(n);
    //  pattern2(n);
    //  pattern3(n);
    //  pattern4(n);
    //  pattern5(n);
    //  pattern6(n);
    //  pattern7(n);
    //  pattern8(n);
    //  pattern9(n);
    //  pattern10(n);
    //  pattern11(n);
    //  pattern12(n);
    //  pattern13(n);
    //  pattern14(n);
    //  pattern15(n);
    //  pattern16(n);
    //  pattern17(n);
    //  pattern18(n);
    //  pattern19(n);
    //  pattern20(n);
    //  pattern21(n);
    //  pattern22(n);
    //  pattern23(n);
    //  pattern24(n);
    //  pattern25(n);
    //  pattern26(n);
    //  pattern27(n);
    //  pattern28(n);
    return 0;
}