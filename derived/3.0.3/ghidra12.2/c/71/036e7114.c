
undefined8 FUN_036e7114(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  puVar6 = PTR_DAT_04bb43c0;
  local_58 = 0;
  puVar3 = PTR_DAT_04bbc1a0 + 0x10;
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  puVar5 = PTR_DAT_04bc0510 + 0x10;
  local_98 = (undefined *)*param_1;
  local_68 = 0;
  local_90 = 0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  local_a0 = puVar5;
  local_78 = puVar3;
  puStack_70 = puVar4;
  puStack_60 = puVar4;
  uVar7 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar6 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(param_1);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8), lVar9 != 0)) {
        local_90 = lVar9;
      }
    }
  }
  FUN_01afb480(&local_a0,&local_78);
  lVar9 = *(long *)puVar6;
  local_90 = 0;
  local_b0 = *param_2;
  uStack_ac = param_2[1];
  local_a8 = 0;
  local_80 = 0;
  local_b8 = puVar5;
  local_a0 = puVar3;
  local_98 = puVar4;
  local_88 = puVar4;
  uVar7 = FUN_0277d6c4(&local_b0);
  if (*(long *)puVar6 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(param_2);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8), lVar9 != 0)) {
        local_a8 = lVar9;
      }
    }
  }
  FUN_01afb480(&local_b8,&local_a0);
  iVar1 = ((int)local_58 - (int)local_68) + 1;
  iVar2 = ((int)local_80 - (int)local_90) + 1;
  if (iVar2 < iVar1) {
LAB_036e72e4:
    uVar8 = 0xffffffff;
  }
  else {
    if (iVar1 == iVar2) {
      iVar1 = (local_58._4_4_ - local_68._4_4_) + 1;
      iVar2 = (local_80._4_4_ - local_90._4_4_) + 1;
      if (iVar2 < iVar1) goto LAB_036e72e4;
      if (iVar1 == iVar2) {
        return 0;
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}

