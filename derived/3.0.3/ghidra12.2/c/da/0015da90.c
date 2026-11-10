
ushort FUN_0015da90(long *param_1)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  
  uVar2 = 0;
  lVar3 = *param_1;
  if (((*(byte *)(lVar3 + 0xf62) & 1) != 0) && (iVar1 = *(int *)(lVar3 + 0x180), 399 < iVar1)) {
    if (iVar1 == 0x197) {
      if ((*(byte *)((long)param_1 + 0x41d) & 1) == 0) {
        return 1;
      }
    }
    else if ((iVar1 != 0x191) || (-1 < *(char *)((long)param_1 + 0x41c))) {
      return 1;
    }
    uVar2 = *(ushort *)(lVar3 + 0x15c4) >> 5 & 1;
  }
  return uVar2;
}

