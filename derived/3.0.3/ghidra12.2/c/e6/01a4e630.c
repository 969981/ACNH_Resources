
int FUN_01a4e630(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar4 = PTR_DAT_04bb43c0;
  uVar3 = **(undefined4 **)PTR_DAT_04bb3448;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  local_48 = 0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  local_58 = puVar1;
  uVar7 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar4 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(param_1);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8), lVar8 != 0)) {
        local_48 = lVar8;
      }
    }
  }
  uVar5 = FUN_01b0bac0(&local_58,uVar3);
  local_50 = *param_2;
  uStack_4c = param_2[1];
  lVar8 = *(long *)puVar4;
  local_48 = 0;
  local_58 = puVar1;
  uVar7 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar4 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(param_2);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8), lVar8 != 0)) {
        local_48 = lVar8;
      }
    }
  }
  uVar6 = FUN_01b0bac0(&local_58,uVar3);
  iVar2 = -(uint)(uVar5 < uVar6);
  if (uVar6 < uVar5) {
    iVar2 = 1;
  }
  return iVar2;
}

