
void FUN_0038d250(char *param_1)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (char *)FUN_00367b30(sVar1 + 1);
  strncpy(__dest,param_1,sVar1 + 1);
  return;
}

