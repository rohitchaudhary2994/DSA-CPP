#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int sofnnn(int num){
    int sum= ((num+1)*num)/2;
    return sum;  
}

bool chk_ifptriplet(int x,int y,int z){
    int a,b,c;
    a=max(x ,max(y,z));
    
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=y;
        c=x;
    }
    if(pow(a,2)==pow(b,2)+pow(c,2)){
        return true;
    }
}

int bintodec(int numa){
    int ans=0, x=1;
    while(numa>0){
        int y=numa%10;
        ans += x*y;
        x *= 2;
        numa /= 10;
    }    
    return ans;
}

int octtodec(int num){
    int ans=0,  powerc=1, temp;
    while(num>0){
        temp= num%10;
        ans += powerc*temp;
        powerc *= 8;
        
        num/=10;
    }
    return ans;
}

int hextodec(string numinchar){
    int num= numinchar.size();
    int ans=0,power_16=1;

    for(int i=num-1;i>=0;i--){
        if(numinchar[i]>='0' && numinchar[i]<='9'){
            ans+= power_16*(numinchar[i]-'0');
        }
        else if(numinchar[i]>='A'&& numinchar[i]<='F'){
            ans+=power_16*(numinchar[i]-'A'+10);
        }

        power_16*=16;
    }

    return ans;
}

int dectobin(int num){
    int x=1, ans = 0;
    while(x<=num)
      x*=2;
    x/=2;
   
    while(x>0){
        int lastDigit=num/x;
        num -= lastDigit*x;
        x/=2;
        ans=ans*10+lastDigit;
        }
    return ans;
}
int dectooctal(int num){
    int x=1, ans = 0;
    while(x<=num)
      x*=8;
    x/=8;
   
    while(x>0){
        int lastDigit=num/x;
        num -= lastDigit*x;
        x/=8;
        ans=ans*10+lastDigit;
        }
    return ans;
}


string dectohex(int num){
    int x=1;string ans = "";
    while(x<=num)
      x*=16;
    x/=16;
   
    while(x>0){
        int lastDigit=num/x;
        num -= lastDigit*x;
        x/=16;
        if(lastDigit<=9){
            ans= ans +to_string(lastDigit);
        }
        else{
            char c=lastDigit-10+'A';
            ans.push_back(c);
        }}
    return ans;
}

int reverse(int num){
    int ans=0;
    while(num>0){
        int lastDigit=num%10;
        ans=ans*10+lastDigit;
        num/=10;
    }
    return ans;

    // Note: There's a small problem with this code, if the number starts with 0, 
    // for eg. 0011 (technically it's 11 only) but sometimes if it's binary than the 0's matter.
    // There only non-zero values are recognized, hopefully I would be able to find a solution to 
    // this problem once i learn arrays.
}



int addbin(int num1, int num2){
   int ans=0, prevCarry=0;

   while(num1 >0 && num2>0){
    if(num1%2==0 && num2%2==0){
        ans = ans*10 +prevCarry;
        prevCarry=0;
    }
    else if((num1%2==1 && num2%2==0) || (num1%2==0 && num2%2==1)){
        if(prevCarry==1){
            ans=ans*10+0;
            prevCarry=1;
        }
        else{
            ans=ans*10+1;
            prevCarry=0;
        }
     }
    else{
        if(prevCarry==1){
            ans=ans*10+1;
            prevCarry=1;
        }
        else{
            ans=ans*10+0;
            prevCarry=1;
        }        
    }
    num1/=10;
    num2/=10;
   }

   while(num1>0){
    if(prevCarry==1){
        if(num1%2==1){
            ans=ans*10+0;
            prevCarry=1;
        }
        else{
            ans=ans*10+1;
            prevCarry=0;
        }
    }
    else{
        ans=ans*10+ num1%2;
    }
   }

   while(num2>0){
    if(prevCarry==1){
        if(num2%2==1){
            ans=ans*10+0;
            prevCarry=1;
        }
        else{
            ans=ans*10+1;
            prevCarry=0;
        }
    }
    else{
        ans=ans*10+ num2%2;
    }
   }


   if(prevCarry==1)
        ans=ans*10+1;
   
   
   ans= reverse(ans);
   return ans;

  
}




int main(){

    /*Question 1*/
    // cout<<sofnnn(10);     

    /*Question 2*/
    // int x,y,z;
    // cout<<"Please give three numbers: ";
    // cin>>x>>y>>z;
    // if(chk_ifptriplet(x,y,z)){
    //     cout<<"The given triplet is a pythagorean triplet.";
    // }
    // else{
    //     cout<<"The given triplet is not a pythagorean triplet.";
    // }
    

    /*Question 3*/
    // int a;
    // cout<<"Enter the number in decimal form: ";
    // cin>>a;
    // cout<<a<<" in decimal form is "<<bintodec(a);

    /*Question 4 and 5*/
    // int x;
    // string y;
    // cout<<"Lao bhyi number do. ";
    // cin>>x;
    // cout<<x<<" in decimal form is denoted as "<<octtodec(x);
    // cin>> y;
    // cout<<y<<" in decimal form is denoted as "<<hextodec(y);

    /*Question 6, 7 & 8*/
    // int  x;
    // cout<<"Lao bhyi number do. ";
    // cin>>x;
    // cout<<x<<" in binary form is "<<dectobin(x);
    // cout<<x<<" in binary form is "<<dectooctal(x);
    // cout<<x<<" in binary form is "<<dectohex(x);



    /*Question 9, Adding two binary numbers*/
    // int x,y;
    // cout<<"Give me first binary number: ";
    // cin>>x;
    // cout<<"Give me second binary number: ";
    // cin>>y;

    // cout<<"The sum of given binary numbers is: "<<addbin(x,y)<<endl;
  

    return 0;
}