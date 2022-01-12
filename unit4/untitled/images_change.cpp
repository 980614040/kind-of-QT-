#include "images_change.h"

Images_change::Images_change()
{
    index=-1;
}
char* Images_change::NextImage(){
    if(index>=2)    //3张图片显示完后，就把index归0，重新开始显示第一张图片
        index=0;
    else
        index++;
    return(images[index]);  //返回图片的路径
}
