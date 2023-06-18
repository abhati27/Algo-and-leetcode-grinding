class Solution {
public:
    int compress(vector<char>& chars) {
   vector<char>change;
        int n=chars.size(),sz=0;
        for(int i=0;i<n;++i){
            cout<<i<<endl;
            change.push_back(chars[i]);
            int ct=1;
            for(int j=i+1;j<n;++j){
                if(chars[j]==chars[i]){
                    i=j;
                    ct++;
                }
                else{
                    break;
                }
            }
            if(ct==1)continue;
            string z=to_string(ct);
            for(int k=0;k<z.size();++k){
                change.push_back(z[k]);
            }

        }
        chars=change;
        return change.size();
        
    }
};