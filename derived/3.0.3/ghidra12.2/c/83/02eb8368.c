
undefined8 FUN_02eb8368(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *__src;
  int iVar4;
  undefined *__dest;
  long local_28;
  
  local_28 = 0;
  uVar3 = FUN_01df3070(&local_28);
  if (*(long *)(param_1 + 0x1720) == 0) {
    __dest = *(undefined **)(param_1 + 0x2ce28);
    *(undefined1 *)(param_1 + 0x2ce10) = 1;
    if (__dest == &DAT_040db8a5) {
      return 1;
    }
    iVar4 = *(int *)(param_1 + 0x2ce30);
    __src = &DAT_040db8a5;
  }
  else {
    lVar2 = local_28;
    if ((uVar3 & 1) == 0) {
      lVar2 = 0;
    }
    if (lVar2 != *(long *)(param_1 + 0x1728)) {
      return 0;
    }
    __dest = *(undefined **)(param_1 + 0x2ce28);
    *(undefined1 *)(param_1 + 0x2ce10) = 1;
    if (__dest == &DAT_040e0b5c) {
      return 1;
    }
    iVar4 = *(int *)(param_1 + 0x2ce30);
    __src = &DAT_040e0b5c;
  }
  iVar1 = 4;
  if (iVar4 < 5) {
    iVar1 = iVar4 + -1;
  }
  memcpy(__dest,__src,(long)iVar1);
  __dest[iVar1] = 0;
  return 1;
}

