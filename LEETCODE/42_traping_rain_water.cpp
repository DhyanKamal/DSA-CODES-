class Solution {
public:
    int trap(vector<int>& height) {
        int maxheight=height[0],n=height.size(),index=0,water=0;
        // calculate maximum height
        for(int i=1;i<n;i++){
            if(maxheight<height[i]){
                maxheight=height[i];
                index=i;
            }
        }

        int leftmax=height[0],rightmax=height[n-1],start=1,end=n-2;
        while(start<index||end>index){
            if(start<index){
            if(leftmax-height[start]>0){
                water+=leftmax-height[start];
                
            }
            else
            { 
                leftmax=height[start];
               
            }
            start++;
            }
            else if(end>index){
            if(rightmax-height[end]>0){
                water+=rightmax-height[end];
                
            }
            else
            rightmax=height[end];
            end--;
            }
            else{
                break;
            }


        }
        return water;
        // for(int i=1;i<index;i++){
        //     if(leftmax-height[i]>0){
        //         water+=leftmax-height[i];
        //     }
        //     else{
        //         leftmax=height[i];
        //     }
        // }
        // for(int i=n-2;i>index;i--){
        //     if(rightmax-height[i]>0){
        //         water+=rightmax-height[i];
        //     }
        //     else{
        //         rightmax=height[i];
        //     }
        // }
        return water;


    }
};