
bool FUN_03459610(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_28 [8];
  
  if (0x7ff < (param_1 & 0xffff)) {
    return false;
  }
  if ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + 0xe99e0 + ((ulong)(param_1 >> 3) & 0x1fff)) >>
       (ulong)(param_1 & 7) & 1) == 0) {
    return false;
  }
  FUN_0262eb00(auStack_28);
  puVar1 = PTR_DAT_04bb43c0;
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(auStack_28);
  if (*(long *)puVar1 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      iVar3 = FUN_02626b24(auStack_28);
      return 9 < iVar3;
    }
  }
  return false;
}

