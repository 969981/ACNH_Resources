
void FUN_0043a360(char *param_1,undefined8 param_2)

{
  size_t sVar1;
  void *__dest;
  ulong __n;
  
  sVar1 = strlen(param_1);
  __n = (ulong)((int)sVar1 + 1);
  __dest = (void *)FUN_00438a70(param_2,__n);
  memcpy(__dest,param_1,__n);
  return;
}

