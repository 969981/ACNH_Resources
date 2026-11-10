
long FUN_00179358(FILE *param_1)

{
  int iVar1;
  long __off;
  long lVar2;
  
  __off = ftell(param_1);
  if ((__off == -1) || (iVar1 = fseek(param_1,0,2), iVar1 != 0)) {
    lVar2 = -1;
  }
  else {
    lVar2 = ftell(param_1);
    if (lVar2 != -1) {
      fseek(param_1,__off,0);
    }
  }
  return lVar2;
}

