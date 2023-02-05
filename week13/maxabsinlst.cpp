int maxabsinlst(int lst[], int size){
  int max_abs, i, temp;

  if(lst[0]<0){
    max_abs = -1*lst[0];
  }else{
    max_abs = lst[0];
  }

  for(i=1;i<size;i++){

    if(lst[i]<0){
      temp = -1*lst[i];
    }else{
      temp = lst[i];
    }

    if(temp>max_abs){
      max_abs = temp;
    }
  }
  return max_abs;
}
