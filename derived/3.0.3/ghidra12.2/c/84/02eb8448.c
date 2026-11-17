
bool FUN_02eb8448(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *__dest;
  long lVar4;
  long local_38;
  
  local_38 = 0;
  lVar4 = *(long *)(*(long *)PTR_DAT_04bb3730 + 0x238);
  uVar3 = FUN_01df3070(&local_38);
  lVar2 = local_38;
  if ((uVar3 & 1) == 0) {
    lVar2 = 0;
  }
  if (lVar2 == lVar4) {
    __dest = *(undefined **)(param_1 + 0x2ce28);
    *(undefined1 *)(param_1 + 0x2ce10) = 1;
    if (__dest != &DAT_040e0b5c) {
      iVar1 = 4;
      if (*(int *)(param_1 + 0x2ce30) < 5) {
        iVar1 = *(int *)(param_1 + 0x2ce30) + -1;
      }
      memcpy(__dest,&DAT_040e0b5c,(long)iVar1);
      __dest[iVar1] = 0;
    }
  }
  return lVar2 == lVar4;
}

