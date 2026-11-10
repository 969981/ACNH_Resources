
char * FUN_0014c728(void)

{
  char *pcVar1;
  size_t __n;
  size_t sVar2;
  
  pcVar1 = (char *)FUN_00143320();
  if (pcVar1 != (char *)0x0) {
    __n = strlen(pcVar1);
    if (*pcVar1 == '\"') {
      memmove(pcVar1,pcVar1 + 1,__n);
      __n = __n - 1;
    }
    if (__n == 0) {
      if (*pcVar1 != '/') goto LAB_0014c7cc;
    }
    else {
      sVar2 = __n - 1;
      if (pcVar1[sVar2] == '\"') {
        pcVar1[sVar2] = '\0';
        __n = sVar2;
      }
      if (*pcVar1 != '/') {
LAB_0014c7cc:
        FUN_00143300(pcVar1);
        pcVar1 = (char *)FUN_00143320(&DAT_04079e84);
        return pcVar1;
      }
      if ((__n != 0) && (pcVar1[__n - 1] == '/')) {
        pcVar1[__n - 1] = '\0';
      }
    }
  }
  return pcVar1;
}

