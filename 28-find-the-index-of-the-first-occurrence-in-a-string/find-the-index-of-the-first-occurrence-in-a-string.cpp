class Solution {
public:
    int strStr(string s, string s1) {
        int flag =0;
        int index =-1;
        int l;
        for(int i=0;s[i]!='\0' ; i++){
            l = i;
            if(s[i] ==  s1[0]){
                for(int j=0; s1[j]!='\0'; j++){
                    if(s[l] == s1[j]){
                        flag = 1;
                        l++;
                    }
                    else{
                        flag =0;
                        break;
                    }
                }
                if (flag == 1){
                    index =i;
                    return index;
                }
                
            }
        } 
        return -1;

         

    }      
};