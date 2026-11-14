
bool FUN_01ae5f4c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_1 + 8);
  if (*(long *)puVar2 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      iVar4 = FUN_01af93e8(param_1);
      if (iVar4 == 0) {
        return false;
      }
      uVar5 = FUN_01ae59b0(param_1);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_01ae59b0(param_1);
        bVar1 = *(byte *)(param_1 + 10) >> 2 & 1;
        if ((uVar5 & 1) == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 4;
        }
        return bVar1 == 0;
      }
    }
  }
  return false;
}

