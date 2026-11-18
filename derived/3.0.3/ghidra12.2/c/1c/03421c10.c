
bool FUN_03421c10(short *param_1)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined **local_48;
  short local_40;
  short local_3e;
  undefined4 local_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_40 = *param_1;
  if (local_40 == -2) {
    return false;
  }
  local_3e = param_1[1];
  local_38 = 0;
  local_3c = *(undefined4 *)(param_1 + 2);
  local_48 = &PTR_FUN_04a36b50;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_1);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0)) {
        local_38 = lVar6;
      }
    }
  }
  uVar5 = FUN_01af0020(&local_48);
  if ((uVar5 & 1) == 0) {
    bVar2 = false;
  }
  else {
    iVar4 = FUN_01af02d0(&local_48);
    bVar2 = 1 < iVar4;
  }
  return bVar2;
}

