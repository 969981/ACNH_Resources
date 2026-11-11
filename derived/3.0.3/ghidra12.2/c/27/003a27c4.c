
undefined8 FUN_003a27c4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  void *__s1;
  byte bVar2;
  int iVar3;
  long lVar4;
  size_t __n;
  void *__s2;
  
  plVar1 = (long *)*param_1;
  __s1 = (void *)param_1[1];
  __s2 = (void *)param_1[3];
  lVar4 = *plVar1;
  bVar2 = *(byte *)(lVar4 + 0xeb);
  __n = (ulong)bVar2 << 2;
  iVar3 = memcmp(__s1,__s2,__n);
  if (iVar3 == 0) {
    lVar4 = param_1[4];
  }
  else {
    iVar3 = FUN_003a0000(lVar4,plVar1 + 4,__s1);
    if (iVar3 == -1) {
      FUN_0039ffe0(lVar4,param_1[3]);
      param_1[4] = 0;
      return 0;
    }
    if (bVar2 != 0) {
      memmove(__s2,__s1,__n);
    }
    lVar4 = *(long *)(lVar4 + 0x88) + (long)iVar3 * 0x40;
    param_1[4] = lVar4;
  }
  FUN_0039fb88(lVar4,param_2);
  return 1;
}

