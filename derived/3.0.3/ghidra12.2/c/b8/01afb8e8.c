
byte FUN_01afb8e8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_01ae59b0();
  puVar1 = PTR_DAT_04bb43c0;
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(param_1 + 8);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        iVar3 = FUN_01af93e8(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        uVar4 = FUN_01ae59b0(param_1);
        if ((uVar4 & 1) == 0) {
          FUN_01ae59b0(param_1);
          return 0;
        }
      }
    }
  }
  else {
    uVar4 = FUN_01ae7a70(param_1);
    if ((uVar4 & 1) != 0) {
      return *(byte *)(param_1 + 10) >> 3 & 1;
    }
    uVar2 = FUN_01ae7550(param_1);
    if (9 < uVar2) {
      iVar3 = FUN_01ae7550(param_1);
      if (((iVar3 == 10) || (iVar3 = FUN_01ae7550(param_1), iVar3 == 0xb)) ||
         (iVar3 = FUN_01ae7550(param_1), iVar3 == 0xc)) {
        return 1;
      }
      iVar3 = FUN_01ae7550(param_1);
      if (iVar3 == 0xd) {
        return 3;
      }
      iVar3 = FUN_01ae7550(param_1);
      return (iVar3 == 0xe) << 1;
    }
  }
  return 0;
}

