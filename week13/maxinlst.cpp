int maxinlst(int lst[], int size){
  int num, i;
  num = lst[0];

  for(i=1;i<size;i++){
    if(num<lst[i]){
      num = lst[i];
    }
  }
  return num;
}
