float avgoflst(int lst[], int size){
  int i, sum;

  sum = 0;
  
  for(i=0;i<size;i++){
    sum +=lst[i];
  }
  
  return ((float)sum/(float)size);
}
