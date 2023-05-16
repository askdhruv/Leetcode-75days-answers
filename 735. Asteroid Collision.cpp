class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        
        bool changed = false;
        
        do{
            changed = false;
            for(int& cur : asteroids){
                if(!stk.empty() && stk.top() > 0 && cur < 0){
                    int prev = stk.top();
                    if(abs(prev) > abs(cur)){
                        //do nothing
                    }else if(abs(prev) == abs(cur)){
                        stk.pop();
                    }else{
                        //abs(prev) < abs(cur)
                        stk.pop();
                        stk.push(cur);
                    }
                }else{
                    stk.push(cur);
                }
            }

            if(stk.size() < asteroids.size()){
                changed = true;
            }
            
            asteroids.clear();

            while(!stk.empty()){
                asteroids.insert(asteroids.begin(), stk.top());
                stk.pop();
            }
        }while(changed);
        
        return asteroids;
    }
};
