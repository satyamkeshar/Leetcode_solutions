class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
           vector<string>sent ;
        int start =0 ;
        for(int i=0 ;i < sentence.size();i++){
            if(sentence[i] == ' '){
                sent.push_back(sentence.substr(start, i-start));
                start = i+1;
            }
        }
        sent.push_back(sentence.substr(start));
        
        for(int i =0 ;i<sent.size();i++){
            int it =0;
            if(sent[i][0] == searchWord[0]){
                while(sent[i][it] == searchWord[it]){
                    it++;
                }
                if(it >= searchWord.size()) return i+1;
            }
        }
        return -1;
        
        
    }
};