
int FUN_00429a30(long *param_1,char param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  do {
    if (*param_1 == lVar2) {
      return -1;
    }
    lVar3 = lVar2 + -1;
    pcVar1 = (char *)(lVar2 + -1);
    lVar2 = lVar3;
  } while (*pcVar1 != param_2);
  return (int)lVar3 - (int)*param_1;
}

