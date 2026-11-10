
long FUN_0017b0f8(char *param_1,size_t param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_1 != (char *)0x0) {
    iVar1 = snprintf(param_1,param_2,"nn::ssl");
    lVar2 = (long)iVar1;
  }
  return lVar2;
}

