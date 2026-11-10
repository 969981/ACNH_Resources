
bool FUN_00220038(long param_1)

{
  char *__s1;
  bool bVar1;
  int iVar2;
  
  __s1 = (char *)(param_1 + 8);
  iVar2 = memcmp(__s1,&DAT_0410d274,0x10);
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = memcmp(__s1,&DAT_0410d274,0x10);
    if ((iVar2 == 0) || (iVar2 = memcmp((void *)(param_1 + 0xc),&DAT_0410d274,0xc), iVar2 == 0)) {
      if (*(char *)(param_1 + 0xb) != '\x7f') {
        return false;
      }
      if (*(char *)(param_1 + 10) != '\0') {
        return false;
      }
      if (*(char *)(param_1 + 9) != '\0') {
        return false;
      }
      bVar1 = *__s1 == '\x01';
    }
    else {
      iVar2 = memcmp(__s1,&DAT_0410d284,0x10);
      bVar1 = iVar2 == 0;
    }
  }
  return bVar1;
}

