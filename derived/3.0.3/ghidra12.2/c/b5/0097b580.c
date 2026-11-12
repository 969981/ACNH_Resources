
ulong FUN_0097b580(undefined4 *param_1,long param_2,long param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  int local_44;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_50 = 0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  local_58 = *param_1;
  uStack_54 = param_1[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar4 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_1);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8), lVar9 != 0)) {
        local_50 = lVar9;
      }
    }
  }
  local_78 = 0;
  local_88 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_80 = PTR_DAT_04bb2010 + 0x10;
  local_68 = 0;
  local_70 = puStack_80;
  FUN_01afb480(&local_60,&local_88);
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    uVar5 = 0;
  }
  else {
    local_44 = 4;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar5 = *puVar1 >> 4 & 1;
  }
  uVar5 = uVar5 & param_4;
  uVar7 = FUN_0277ebd0(param_1);
  if ((uVar5 == 0) && ((int)uVar7 == 0)) {
    return uVar7;
  }
  local_44 = FUN_0277ebd0(param_1);
  uVar2 = uVar5 ^ 1;
  if (local_44 == 0) {
    uVar2 = 1;
  }
  if (uVar2 == 0) {
    if (local_68._4_4_ == local_78._4_4_) {
      return 1;
    }
  }
  iVar6 = FUN_0277ebd0(param_1);
  if (iVar6 == 1) {
    uVar5 = 1;
  }
  if (uVar5 != 0) {
    return 1;
  }
  iVar6 = FUN_0277ebd0(param_1);
  if (iVar6 == 3) {
    if ((int)local_68 - (int)local_78 == 5) {
      iVar6 = *(int *)(param_2 + 8);
      iVar8 = *(int *)(param_3 + 8);
      if (iVar6 + 2 == iVar8) {
        return 0;
      }
      goto LAB_0097b7f8;
    }
    if (local_68._4_4_ - local_78._4_4_ != 5) {
      return 1;
    }
  }
  else {
    iVar6 = FUN_0277ebd0(param_1);
    if (iVar6 != 4) {
      return 1;
    }
    if ((int)local_68 - (int)local_78 != 5) {
      return 1;
    }
    if (local_68._4_4_ - local_78._4_4_ != 5) {
      return 1;
    }
    if (*(int *)(param_2 + 8) + 2 == *(int *)(param_3 + 8)) {
      return 0;
    }
    if (*(int *)(param_2 + 8) + 3 == *(int *)(param_3 + 8)) {
      return 0;
    }
  }
  iVar6 = *(int *)(param_2 + 0xc);
  iVar8 = *(int *)(param_3 + 0xc);
  if (iVar6 + 2 == iVar8) {
    return 0;
  }
LAB_0097b7f8:
  return (ulong)(iVar6 + 3 != iVar8);
}

