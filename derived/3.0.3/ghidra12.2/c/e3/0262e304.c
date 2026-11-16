
bool FUN_0262e304(undefined8 param_1,ushort *param_2,byte *param_3,uint param_4,uint param_5,
                 long param_6)

{
  bool bVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  undefined **local_170;
  char *local_168;
  undefined1 auStack_160 [8];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ushort local_110;
  ushort local_10c;
  undefined1 local_10a;
  undefined1 local_109;
  undefined4 local_108;
  ushort local_104;
  undefined4 uStack_102;
  undefined2 uStack_fe;
  undefined6 uStack_fc;
  undefined4 local_f4;
  undefined4 uStack_f0;
  ushort local_ec;
  undefined4 uStack_ea;
  undefined2 uStack_e6;
  undefined6 uStack_e4;
  ushort local_dc;
  ushort local_da;
  undefined4 local_d8;
  ushort local_d4;
  undefined4 uStack_d2;
  undefined2 local_ce;
  undefined6 uStack_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  ushort local_bc;
  undefined4 uStack_ba;
  undefined2 local_b6;
  undefined6 uStack_b4;
  ushort local_ac;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined4 local_a8;
  ushort local_a4;
  undefined4 uStack_a2;
  undefined2 local_9e;
  undefined6 uStack_9c;
  ushort local_94;
  undefined1 local_92;
  undefined1 local_91;
  undefined4 local_90;
  ushort local_8c;
  undefined4 uStack_8a;
  undefined2 local_86;
  undefined6 uStack_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined2 local_6c [6];
  
  if (param_4 - 0xb < 0xfffffff6) {
    return false;
  }
  local_6c[0] = FUN_0262ce50();
  if ((*(byte *)((long)local_6c + (ulong)(param_4 - 1 >> 3)) >> (ulong)(param_4 - 1 & 7) & 1) == 0)
  {
    return false;
  }
  puVar2 = param_2 + 4;
  iVar5 = FUN_0277d6c4(puVar2);
  puVar4 = PTR_DAT_04bb43c0;
  if (iVar5 == 0xfffe) {
    return false;
  }
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(puVar2);
  bVar1 = false;
  if (*(long *)puVar4 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (uVar6 < *(uint *)(lVar11 + 0x1d8)) {
      bVar1 = false;
      if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
        iVar5 = FUN_0277d6c4(puVar2);
        bVar1 = iVar5 != 0x1c2b && iVar5 != 0x142e;
      }
    }
    else {
      bVar1 = false;
    }
  }
  if ((1 < param_4) && (!bVar1)) {
    return false;
  }
  if ((((param_2[0x1e] == 0) && (param_2[0x1f] == 0)) && (*(int *)(param_2 + 0x1c) == 0)) &&
     (param_2[0x20] == 0)) {
    return false;
  }
  uVar3 = *param_2;
  if (0x7ff < uVar3) {
    return false;
  }
  if ((*(byte *)(param_6 + (ulong)(uVar3 >> 3)) >> (ulong)(uVar3 & 7) & 1) == 0) {
    return false;
  }
  local_138 = *(undefined8 *)param_2;
  local_130 = *(undefined4 *)(param_2 + 4);
  uStack_12c = *(undefined4 *)(param_2 + 6);
  local_128 = *(undefined8 *)(param_2 + 8);
  uStack_120 = *(undefined8 *)(param_2 + 0xc);
  local_118 = *(undefined8 *)(param_2 + 0x10);
  uStack_f0 = *(undefined4 *)(param_2 + 0x24);
  local_110 = param_2[0x14];
  local_10c = param_2[0x16];
  local_10a = (undefined1)param_2[0x17];
  local_109 = *(undefined1 *)((long)param_2 + 0x2f);
  local_108 = *(undefined4 *)(param_2 + 0x18);
  local_104 = (ushort)*(undefined8 *)(param_2 + 0x1a);
  uStack_102 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x1a) >> 0x10);
  uStack_fe = (undefined2)*(undefined8 *)(param_2 + 0x1d);
  uStack_fc = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x1d) >> 0x10);
  local_f4 = *(undefined4 *)(param_2 + 0x22);
  local_ec = (ushort)*(undefined8 *)(param_2 + 0x26);
  uStack_ea = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x26) >> 0x10);
  uStack_e6 = (undefined2)*(undefined8 *)(param_2 + 0x29);
  uStack_e4 = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x29) >> 0x10);
  local_dc = param_2[0x2e];
  local_da = param_2[0x2f];
  uStack_cc = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x35) >> 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x32);
  local_d4 = (ushort)uVar9;
  uStack_d2 = (undefined4)((ulong)uVar9 >> 0x10);
  local_ce = (undefined2)((ulong)uVar9 >> 0x30);
  local_c4 = *(undefined4 *)(param_2 + 0x3a);
  local_d8 = *(undefined4 *)(param_2 + 0x30);
  local_c0 = *(undefined4 *)(param_2 + 0x3c);
  uStack_b4 = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x41) >> 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x3e);
  local_bc = (ushort)uVar9;
  uStack_ba = (undefined4)((ulong)uVar9 >> 0x10);
  local_b6 = (undefined2)((ulong)uVar9 >> 0x30);
  local_ac = param_2[0x46];
  local_aa = (undefined1)param_2[0x47];
  local_a9 = *(undefined1 *)((long)param_2 + 0x8f);
  local_a8 = *(undefined4 *)(param_2 + 0x48);
  uStack_9c = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x4d) >> 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x4a);
  local_a4 = (ushort)uVar9;
  uStack_a2 = (undefined4)((ulong)uVar9 >> 0x10);
  local_9e = (undefined2)((ulong)uVar9 >> 0x30);
  local_94 = param_2[0x52];
  local_92 = (undefined1)param_2[0x53];
  local_91 = *(undefined1 *)((long)param_2 + 0xa7);
  local_90 = *(undefined4 *)(param_2 + 0x54);
  uStack_84 = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x59) >> 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x56);
  local_8c = (ushort)uVar9;
  uStack_8a = (undefined4)((ulong)uVar9 >> 0x10);
  local_86 = (undefined2)((ulong)uVar9 >> 0x30);
  local_7c = *(undefined8 *)(param_2 + 0x5e);
  local_74 = *(undefined8 *)(param_2 + 0x62);
  uVar6 = local_104 * param_4;
  local_104 = (ushort)uVar6;
  if (param_2[0x20] == 0) {
    FUN_02628c90(param_1,&local_138,param_3,0);
  }
  else if ((uVar6 & 0xffff) != 0) {
    FUN_0267f470(param_3,&local_10c,-(uVar6 & 0xffff));
  }
  uVar6 = local_ec * param_4;
  local_ec = (ushort)uVar6;
  if (param_2[0x2c] == 0) {
    FUN_02628c90(param_1,&local_138,param_3,1);
  }
  else if ((uVar6 & 0xffff) != 0) {
    FUN_0267f470(param_3,&local_f4,-(uVar6 & 0xffff));
  }
  uVar6 = local_d4 * param_4;
  local_d4 = (ushort)uVar6;
  if (param_2[0x38] == 0) {
    FUN_02628c90(param_1,&local_138,param_3,2);
  }
  else if ((uVar6 & 0xffff) != 0) {
    FUN_0267f470(param_3,&local_dc,-(uVar6 & 0xffff));
  }
  uVar6 = local_bc * param_4;
  local_bc = (ushort)uVar6;
  if (param_2[0x44] == 0) {
    FUN_02628c90(param_1,&local_138,param_3,3);
  }
  else if ((uVar6 & 0xffff) != 0) {
    FUN_0267f470(param_3,&local_c4,-(uVar6 & 0xffff));
  }
  uVar6 = local_a4 * param_4;
  local_a4 = (ushort)uVar6;
  if (param_2[0x50] == 0) {
    FUN_02628c90(param_1,&local_138,param_3,4);
  }
  else if ((uVar6 & 0xffff) != 0) {
    FUN_0267f470(param_3,&local_ac,-(uVar6 & 0xffff));
  }
  uVar6 = local_8c * param_4;
  local_8c = (ushort)uVar6;
  if (param_2[0x5c] == 0) {
    FUN_02628c90(param_1,&local_138,param_3,5);
  }
  else if ((uVar6 & 0xffff) != 0) {
    FUN_0267f470(param_3,&local_94,-(uVar6 & 0xffff));
  }
  uVar8 = FUN_0277d9a8(param_2 + 0x16);
  if ((uVar8 & 1) != 0) {
    local_140 = *(undefined4 *)(param_2 + 0x16);
    uStack_13c = *(undefined4 *)(param_2 + 0x18);
    if ((*param_3 < 8) && (uVar8 = FUN_0277d9a8(&local_140), (uVar8 & 1) != 0)) {
      FUN_026770e0(param_3,&local_140);
    }
  }
  uVar8 = FUN_0277d9a8(param_2 + 0x22);
  if ((uVar8 & 1) != 0) {
    local_140 = *(undefined4 *)(param_2 + 0x22);
    uStack_13c = *(undefined4 *)(param_2 + 0x24);
    if ((*param_3 < 8) && (uVar8 = FUN_0277d9a8(&local_140), (uVar8 & 1) != 0)) {
      FUN_026770e0(param_3,&local_140);
    }
  }
  uVar8 = FUN_0277d9a8(param_2 + 0x2e);
  if ((uVar8 & 1) != 0) {
    local_140 = *(undefined4 *)(param_2 + 0x2e);
    uStack_13c = *(undefined4 *)(param_2 + 0x30);
    if ((*param_3 < 8) && (uVar8 = FUN_0277d9a8(&local_140), (uVar8 & 1) != 0)) {
      FUN_026770e0(param_3,&local_140);
    }
  }
  uVar8 = FUN_0277d9a8(param_2 + 0x3a);
  if ((uVar8 & 1) != 0) {
    local_140 = *(undefined4 *)(param_2 + 0x3a);
    uStack_13c = *(undefined4 *)(param_2 + 0x3c);
    if ((*param_3 < 8) && (uVar8 = FUN_0277d9a8(&local_140), (uVar8 & 1) != 0)) {
      FUN_026770e0(param_3,&local_140);
    }
  }
  uVar8 = FUN_0277d9a8(param_2 + 0x46);
  if ((uVar8 & 1) != 0) {
    local_140 = *(undefined4 *)(param_2 + 0x46);
    uStack_13c = *(undefined4 *)(param_2 + 0x48);
    if ((*param_3 < 8) && (uVar8 = FUN_0277d9a8(&local_140), (uVar8 & 1) != 0)) {
      FUN_026770e0(param_3,&local_140);
    }
  }
  uVar8 = FUN_0277d9a8(param_2 + 0x52);
  if ((uVar8 & 1) != 0) {
    local_140 = *(undefined4 *)(param_2 + 0x52);
    uStack_13c = *(undefined4 *)(param_2 + 0x54);
    if ((*param_3 < 8) && (uVar8 = FUN_0277d9a8(&local_140), (uVar8 & 1) != 0)) {
      FUN_026770e0(param_3,&local_140);
    }
  }
  local_148 = *(undefined4 *)(param_2 + 4);
  uStack_144 = *(undefined4 *)(param_2 + 6);
  FUN_01ad5d04(auStack_160,&local_148);
  uVar8 = FUN_01af0020(auStack_160);
  if ((uVar8 & 1) != 0) {
    uVar7 = FUN_02626b24(&local_148);
    FUN_01af2bc0(auStack_160,uVar7);
    local_148 = local_158;
    uStack_144 = uStack_154;
  }
  uVar8 = FUN_026738b0(param_3,&local_148,1,0);
  if ((uVar8 & 1) == 0) {
    return false;
  }
  uVar6 = 1;
  while (uVar10 = uVar6, param_4 != uVar10) {
    uVar8 = FUN_026738b0(param_3,&local_148,1,0);
    uVar6 = uVar10 + 1;
    if ((uVar8 & 1) == 0) {
      return (int)param_4 <= (int)uVar10;
    }
  }
  if ((param_5 & 1) == 0) goto LAB_0262ea6c;
  local_170 = &PTR_LAB_048f9770;
  local_168 = "DIYItem";
  FUN_0279b044(param_3,&local_170,param_4);
  uVar8 = FUN_01ad6a30(auStack_160,0);
  if (((uVar8 & 1) == 0) && (uVar8 = FUN_01ad6a30(auStack_160,0x77), (uVar8 & 1) == 0)) {
    uVar8 = FUN_01adba10(auStack_160,1);
    if ((uVar8 & 1) != 0) {
      local_168 = "DIYTool";
      goto LAB_0262e9a0;
    }
  }
  else {
    local_168 = "DIYFurniture";
LAB_0262e9a0:
    local_170 = &PTR_LAB_048f9770;
    FUN_0279a9f0(param_3,&local_170,param_4);
  }
  uVar8 = FUN_0261dc78();
  if ((uVar8 & 1) != 0) {
    local_170 = &PTR_LAB_048f9770;
    local_168 = "DiyCount";
    FUN_0212944c(&local_170,1,param_3);
  }
  uVar8 = FUN_01ad6a30(auStack_160,0x78);
  if ((uVar8 & 1) != 0) {
    local_170 = &PTR_LAB_048f9770;
    local_168 = "EDDIYFence";
    FUN_0279b044(param_3,&local_170,param_4);
  }
  iVar5 = FUN_01b16bb4(auStack_160);
  if (iVar5 == 2) {
    local_170 = &PTR_LAB_048f9770;
    local_168 = "EDDIYFlowerWreath";
    FUN_0279b044(param_3,&local_170,param_4);
  }
  iVar5 = FUN_01b16bb4(auStack_160);
  if (iVar5 == 1) {
    local_170 = &PTR_LAB_048f9770;
    local_168 = "EDDIYCorolla";
    FUN_0279b044(param_3,&local_170,param_4);
  }
LAB_0262ea6c:
  FUN_0261eae4(*param_2,param_3);
  local_170 = &PTR_LAB_048f9770;
  local_168 = "DoneDIYCountNum";
  FUN_0274ca70(param_3,&local_170,1);
  local_170 = &PTR_LAB_048f9770;
  local_168 = "DiyCountUpdatedVer3_0";
  FUN_0274ca70(param_3,&local_170,1);
  local_170 = &PTR_LAB_048f9770;
  local_168 = "DiyCountMultiMake";
  FUN_0274ca70(param_3,&local_170,1);
  return true;
}

