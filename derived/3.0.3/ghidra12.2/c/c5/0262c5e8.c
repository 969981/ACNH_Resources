
undefined8 FUN_0262c5e8(undefined8 param_1,ushort *param_2,byte *param_3,ulong param_4,long param_5)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined *local_68;
  char *local_60;
  int local_34;
  
  local_70 = 0xfffe;
  FUN_0277d4ac(&local_70);
  uVar6 = FUN_02672fb0(param_3);
  if ((uVar6 & 1) == 0) {
    FUN_02628760(uVar6,&local_70,param_2,param_3);
  }
  if (*(char *)((long)param_2 + 0x25) == '\0') {
    return 0;
  }
  iVar4 = FUN_0277d6c4(param_2 + 4);
  if (iVar4 == 0xfffe) {
    return 0;
  }
  if ((((param_2[0x1e] == 0) && (param_2[0x1f] == 0)) && (*(int *)(param_2 + 0x1c) == 0)) &&
     (param_2[0x20] == 0)) {
    return 0;
  }
  uVar1 = *param_2;
  if (0x7ff < uVar1) {
    return 0;
  }
  if ((*(byte *)(param_5 + (ulong)(uVar1 >> 3)) >> (ulong)(uVar1 & 7) & 1) == 0) {
    return 0;
  }
  if (param_2[0x20] == 0) {
    FUN_02628c90(param_1,param_2,param_3,0);
  }
  else if (param_2[0x1a] != 0) {
    FUN_0267f470(param_3,param_2 + 0x16,-(uint)param_2[0x1a]);
  }
  if (param_2[0x2c] == 0) {
    FUN_02628c90(param_1,param_2,param_3,1);
  }
  else if (param_2[0x26] != 0) {
    FUN_0267f470(param_3,param_2 + 0x22,-(uint)param_2[0x26]);
  }
  if (param_2[0x38] == 0) {
    FUN_02628c90(param_1,param_2,param_3,2);
  }
  else if (param_2[0x32] != 0) {
    FUN_0267f470(param_3,param_2 + 0x2e,-(uint)param_2[0x32]);
  }
  if (param_2[0x44] == 0) {
    FUN_02628c90(param_1,param_2,param_3,3);
  }
  else if (param_2[0x3e] != 0) {
    FUN_0267f470(param_3,param_2 + 0x3a,-(uint)param_2[0x3e]);
  }
  if (param_2[0x50] == 0) {
    FUN_02628c90(param_1,param_2,param_3,4);
  }
  else if (param_2[0x4a] != 0) {
    FUN_0267f470(param_3,param_2 + 0x46,-(uint)param_2[0x4a]);
  }
  if (param_2[0x5c] == 0) {
    FUN_02628c90(param_1,param_2,param_3,5);
  }
  else if (param_2[0x56] != 0) {
    FUN_0267f470(param_3,param_2 + 0x52,-(uint)param_2[0x56]);
  }
  if ((uVar6 & 1) == 0) {
    local_78 = (undefined4)local_70;
    uStack_74 = local_70._4_4_;
    if ((*param_3 < 8) && (uVar6 = FUN_0277d9a8(&local_78), (uVar6 & 1) != 0)) {
      FUN_026770e0(param_3,&local_78);
    }
  }
  uVar6 = FUN_02672fb0(param_3);
  if (((uVar6 & 1) == 0) && (uVar6 = FUN_0277d7b4(&local_70,param_2 + 4), (uVar6 & 1) == 0)) {
    return 0;
  }
  puVar3 = PTR_DAT_04bb43c0;
  local_98 = PTR_DAT_04bc0510 + 0x10;
  local_8c = *(undefined4 *)(param_2 + 6);
  local_90 = *(undefined4 *)(param_2 + 4);
  local_80 = *(undefined4 *)(param_2 + 4);
  local_88 = 0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  local_7c = local_8c;
  uVar5 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(&local_80);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (uVar5 < *(uint *)(lVar8 + 0x1d8)) {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar8 != 0) {
          local_88 = lVar8;
        }
      }
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  if ((param_4 & 1) == 0) goto LAB_0262ca84;
  local_68 = PTR_DAT_04bb2020 + 0x10;
  local_60 = "DIYItem";
  FUN_0279b044(param_3,&local_68,1);
  uVar6 = FUN_01ad6a30(&local_98,0);
  if (((uVar6 & 1) == 0) && (uVar6 = FUN_01ad6a30(&local_98,0x77), (uVar6 & 1) == 0)) {
    uVar6 = FUN_01adba10(&local_98,1);
    if ((uVar6 & 1) != 0) {
      local_60 = "DIYTool";
      goto LAB_0262c96c;
    }
  }
  else {
    local_60 = "DIYFurniture";
LAB_0262c96c:
    local_68 = puVar2 + 0x10;
    FUN_0279a9f0(param_3,&local_68,1);
  }
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x57d4aeba) ||
     (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x1693a871)) {
LAB_0262c9d4:
    local_68 = puVar2 + 0x10;
    local_60 = "DiyCount";
    FUN_0212944c(&local_68,1,param_3);
  }
  else {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
    uVar6 = FUN_0290cbcc(&local_68);
    if ((uVar6 & 1) != 0) goto LAB_0262c9d4;
    local_34 = 7;
    uVar6 = FUN_0290cbcc(&local_34);
    if ((uVar6 & 1) != 0) goto LAB_0262c9d4;
  }
  uVar6 = FUN_01ad6a30(&local_98,0x78);
  if ((uVar6 & 1) != 0) {
    local_68 = puVar2 + 0x10;
    local_60 = "EDDIYFence";
    FUN_0279b044(param_3,&local_68,1);
  }
  iVar4 = FUN_01b16bb4(&local_98);
  if (iVar4 == 2) {
    local_68 = puVar2 + 0x10;
    local_60 = "EDDIYFlowerWreath";
    FUN_0279b044(param_3,&local_68,1);
  }
  iVar4 = FUN_01b16bb4(&local_98);
  if (iVar4 == 1) {
    local_68 = puVar2 + 0x10;
    local_60 = "EDDIYCorolla";
    FUN_0279b044(param_3,&local_68,1);
  }
LAB_0262ca84:
  uVar6 = FUN_01af0020(&local_98);
  if ((uVar6 & 1) != 0) {
    uVar6 = FUN_0277d9a8(&local_80);
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    else {
      FUN_01ad5d04(&local_68,&local_80);
      uVar6 = FUN_01af0020(&local_68);
      if ((uVar6 & 1) == 0) {
        uVar7 = 1;
      }
      else {
        local_34 = FUN_01ad9fd0(&local_68);
        uVar7 = 10;
        if (local_34 != 3 && local_34 != 0x78) {
          uVar7 = 1;
        }
      }
    }
    FUN_01af2bc0(&local_98,uVar7);
    local_80 = local_90;
    local_7c = local_8c;
  }
  FUN_026738b0(param_3,&local_80,1,0);
  FUN_0261eae4(*param_2,param_3);
  lVar8 = *(long *)puVar3;
  uVar5 = FUN_0277d6c4(param_2 + 0x16);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_a0 = *(undefined4 *)(param_2 + 0x16);
      uStack_9c = *(undefined4 *)(param_2 + 0x18);
      if ((*param_3 < 8) && (uVar6 = FUN_0277d9a8(&local_a0), (uVar6 & 1) != 0)) {
        FUN_026770e0(param_3,&local_a0);
      }
    }
  }
  lVar8 = *(long *)puVar3;
  uVar5 = FUN_0277d6c4(param_2 + 0x22);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_a0 = *(undefined4 *)(param_2 + 0x22);
      uStack_9c = *(undefined4 *)(param_2 + 0x24);
      if ((*param_3 < 8) && (uVar6 = FUN_0277d9a8(&local_a0), (uVar6 & 1) != 0)) {
        FUN_026770e0(param_3,&local_a0);
      }
    }
  }
  lVar8 = *(long *)puVar3;
  uVar5 = FUN_0277d6c4(param_2 + 0x2e);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_a0 = *(undefined4 *)(param_2 + 0x2e);
      uStack_9c = *(undefined4 *)(param_2 + 0x30);
      if ((*param_3 < 8) && (uVar6 = FUN_0277d9a8(&local_a0), (uVar6 & 1) != 0)) {
        FUN_026770e0(param_3,&local_a0);
      }
    }
  }
  lVar8 = *(long *)puVar3;
  uVar5 = FUN_0277d6c4(param_2 + 0x3a);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_a0 = *(undefined4 *)(param_2 + 0x3a);
      uStack_9c = *(undefined4 *)(param_2 + 0x3c);
      if ((*param_3 < 8) && (uVar6 = FUN_0277d9a8(&local_a0), (uVar6 & 1) != 0)) {
        FUN_026770e0(param_3,&local_a0);
      }
    }
  }
  lVar8 = *(long *)puVar3;
  uVar5 = FUN_0277d6c4(param_2 + 0x46);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_a0 = *(undefined4 *)(param_2 + 0x46);
      uStack_9c = *(undefined4 *)(param_2 + 0x48);
      if ((*param_3 < 8) && (uVar6 = FUN_0277d9a8(&local_a0), (uVar6 & 1) != 0)) {
        FUN_026770e0(param_3,&local_a0);
      }
    }
  }
  lVar8 = *(long *)puVar3;
  uVar5 = FUN_0277d6c4(param_2 + 0x52);
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_a0 = *(undefined4 *)(param_2 + 0x52);
      uStack_9c = *(undefined4 *)(param_2 + 0x54);
      if ((*param_3 < 8) && (uVar6 = FUN_0277d9a8(&local_a0), (uVar6 & 1) != 0)) {
        FUN_026770e0(param_3,&local_a0);
      }
    }
  }
  local_60 = "DoneDIYCountNum";
  local_68 = puVar2 + 0x10;
  FUN_0274ca70(param_3,&local_68,1);
  local_60 = "DiyCountUpdatedVer3_0";
  local_68 = puVar2 + 0x10;
  FUN_0274ca70(param_3,&local_68,1);
  return 1;
}

