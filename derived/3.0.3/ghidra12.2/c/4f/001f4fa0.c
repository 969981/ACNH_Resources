
undefined8 FUN_001f4fa0(long param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *__s;
  void *__dest;
  long lVar4;
  ulong __n;
  void *__src;
  
  if (*(char *)(param_1 + 0x21) == '\0') {
    return 0xfffffed2;
  }
  if ((*(byte *)(param_1 + 0x11) >> 1 & 1) != 0) {
    return 0xfffffed2;
  }
  bVar1 = *param_2;
  __n = *(ulong *)(param_2 + 0x10);
  if (((bVar1 >> 3 & 1) == 0) || (__n < 0x7e)) {
    __src = *(void **)(param_2 + 8);
    __s = (undefined1 *)FUN_001f4e40(0x28);
    if (__s == (undefined1 *)0x0) {
      return 0xfffffe0c;
    }
    memset(__s,0,0x28);
    __s[1] = bVar1;
    *(undefined4 *)(__s + 4) = 0;
    *__s = 1;
    if (__n != 0) {
      __dest = (void *)FUN_001f4e40(__n);
      *(void **)(__s + 8) = __dest;
      if (__dest == (void *)0x0) {
        FUN_001f4e60(__s);
        return 0xfffffe0c;
      }
      memcpy(__dest,__src,__n);
      *(ulong *)(__s + 0x10) = __n;
    }
    if ((*param_2 >> 3 & 1) == 0) {
      uVar3 = FUN_001f6460(*(undefined8 *)(param_1 + 0x80),__s);
      iVar2 = (int)uVar3;
    }
    else {
      uVar3 = FUN_001f6460(*(undefined8 *)(param_1 + 0x88),__s);
      iVar2 = (int)uVar3;
    }
    if (iVar2 == 0) {
      lVar4 = *(long *)(param_2 + 0x10);
      *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + lVar4;
      return 0;
    }
  }
  else {
    uVar3 = 0xfffffed4;
  }
  return uVar3;
}

