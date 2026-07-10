class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>r,d;
        for(int i=0;i<senate.size();i++){
            if(senate[i] == 'R'){
                 r.push(i);
            }
            else{
                 d.push(i);
            }
        }
        int n = senate.size(); 
        while(!r.empty() && !d.empty()){
            cout<<r.front()<<" "<<d.front()<<endl;
            if(r.front()<d.front()){
                d.pop();
                r.push(n++);
                r.pop();
            }else{
                r.pop();
                d.push(n++);
                d.pop();
            }
        }
      return r.empty() ? "Dire" : "Radiant";
    }
};