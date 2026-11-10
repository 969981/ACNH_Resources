
void FUN_00152ab4(long param_1)

{
  size_t sVar1;
  char *__s;
  
  if ((((param_1 != 0) && (__s = *(char **)(param_1 + 0x10), __s != (char *)0x0)) &&
      (sVar1 = strlen(__s), sVar1 != 0)) && (__s[sVar1 - 1] == '.')) {
    __s[sVar1 - 1] = '\0';
  }
  return;
}

