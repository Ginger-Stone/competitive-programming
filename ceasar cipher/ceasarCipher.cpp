#include <iostream>
#include <vector>
#include <cstdio>
// #include <regex>

using namespace std;

char alphabets[52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


// char regex_str[]="[a-zA-Z]";
// vector <char> value;
char str[1000];
int shift, value_length;

void cipher();
void cipher(){
    char v;
    for(int i=0; i<value_length;i++){
        v=str[i];
        cout<<v;
        if(v<=alphabets[52/2]){
            cout<<v<<"less than "<<alphabets[52/2-1]; 
        }
    }
    
}
void decipher();
void decipher(){
    cout<<"decipher";
}

int main(){
    int option,count=0;
    char input;    

    cout<<"Enter string\n";
    do{
        
        input=getchar();
        str[count]=input;
        count+=count;
    }while(input!='\n');
    value_length=count;

    cout<<"Enter shift\n";
    cin>>shift;
    cout<<"Enter 1 to cipher, 2 to decipher \n";
    cin>>option;
    if(option==1){
        cout<<"cipher\n";
        // cout<<value[1];
        cipher();
    }else if(option==2){
        cout<<"decipher\n";
        // decipher(value[],shift);
    }else{
        cout<<"Please select option 1 or 2\n";
    }

    // cout<<regex_str[0]<<endl;

    return 0;
    
}