
void FUN_0043a3e0(char *param_1)

{
  undefined *puVar1;
  size_t sVar2;
  void *__dest;
  ulong __n;
  
  puVar1 = PTR_DAT_048607b8;
  sVar2 = strlen(param_1);
  __n = (ulong)((int)sVar2 + 1);
  __dest = (void *)FUN_00438a70(puVar1,__n);
  memcpy(__dest,param_1,__n);
  return;
}

