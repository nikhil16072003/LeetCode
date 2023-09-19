class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n1=name.length();
        int n2=typed.length();
        int i,j;
         if(name[0]!=typed[0]){
            return false;
        }
        j=0;
        for(i=0;i<n2;i++){
            if(name[j]==typed[i]){
                j++;
            }
            if(name[j]!=typed[i] && name[j-1]!=typed[i]){
                    return false;
            }
        }
        if(j==name.length()){
            return true;
        }
       return false;
    }
};
