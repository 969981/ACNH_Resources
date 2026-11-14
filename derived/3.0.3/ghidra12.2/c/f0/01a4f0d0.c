
int FUN_01a4f0d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_48 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  local_58 = puVar1;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8), lVar7 != 0)) {
        local_48 = lVar7;
      }
    }
  }
  iVar5 = FUN_01af8e80(&local_58);
  local_50 = *param_2;
  uStack_4c = param_2[1];
  lVar7 = *(long *)puVar3;
  local_48 = 0;
  local_58 = puVar1;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8), lVar7 != 0)) {
        local_48 = lVar7;
      }
    }
  }
  iVar6 = FUN_01af8e80(&local_58);
  iVar2 = -(uint)(iVar5 < iVar6);
  if (iVar6 < iVar5) {
    iVar2 = 1;
  }
  return iVar2;
}

