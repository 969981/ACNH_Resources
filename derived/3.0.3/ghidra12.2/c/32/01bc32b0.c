
void FUN_01bc32b0(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  long *plVar14;
  uint *puVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  undefined *local_240;
  undefined1 *puStack_238;
  undefined4 local_230;
  undefined1 local_22c [127];
  undefined1 local_1ad;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  uint local_190;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined8 local_17c;
  undefined8 uStack_174;
  uint *local_168;
  undefined *local_160;
  void *local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined *local_130;
  undefined1 *local_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  void *local_80;
  uint local_74;
  uint uStack_70;
  undefined4 local_6c;
  
  puVar5 = PTR_DAT_04bb28f8;
  uVar2 = *(ushort *)(param_2 + 0xc);
  uVar3 = *(ushort *)(param_2 + 0xe);
  local_74 = (uint)uVar2;
  uStack_70 = (uint)uVar3;
  lVar16 = *(long *)PTR_DAT_04bb28f8;
  for (lVar18 = **(long **)(lVar16 + 0x29d0); lVar18 != 0; lVar18 = *(long *)(lVar18 + 8)) {
    while( true ) {
      uVar9 = *(uint *)(lVar18 + 0x20);
      uVar17 = (uint)uVar2;
      if ((local_74 <= uVar9 && uVar9 != uVar17) ||
         (((uVar9 == uVar17 &&
           (uVar1 = *(uint *)(lVar18 + 0x24), uStack_70 <= uVar1 && uVar1 != uVar3)) &&
          (uVar1 != 0xffffffff)))) break;
      if ((uVar17 <= uVar9) && ((uint)uVar3 <= *(uint *)(lVar18 + 0x24))) {
        if (*(code **)(lVar18 + 0x58) == (code *)0x0) goto LAB_01bc3354;
        local_6c = (**(code **)(lVar18 + 0x58))(param_2);
        lVar16 = *(long *)puVar5;
        goto LAB_01bc3358;
      }
      lVar18 = *(long *)(lVar18 + 0x10);
      if (lVar18 == 0) goto LAB_01bc3354;
    }
  }
LAB_01bc3354:
  local_6c = 0;
LAB_01bc3358:
  lVar18 = FUN_01bc1730(lVar16 + 0x2990,param_1[0x41] + 8);
  if (lVar18 == 0) {
    return;
  }
  lVar16 = FUN_01bc06e0(lVar18,&local_74,1);
  puVar7 = PTR_DAT_04bb2e00;
  puVar5 = PTR_DAT_04bb2698;
  if (lVar16 != 0) {
    return;
  }
  local_150 = 0;
  local_14c = 0;
  local_148 = 0xffffffff;
  uStack_140 = 0xffffffff00000000;
  local_138 = 0xffffffff;
  local_128 = local_11c;
  plVar10 = *(long **)PTR_DAT_04bc08b8;
  local_120 = 0x40;
  local_dd = 0;
  local_11c[0] = 0;
  local_130 = PTR_DAT_04bb2bc0 + 0x10;
  local_c8 = 0x40;
  local_85 = 0;
  local_c4[0] = 0;
  local_d0 = local_c4;
  lVar16 = *(long *)PTR_DAT_04bb2698;
  local_160 = PTR_DAT_04bb2e00 + 0x10;
  local_80 = (void *)0x0;
  local_158 = (void *)0x0;
  local_d8 = local_130;
  if (lVar16 == 0) {
    pvVar12 = malloc(0x1000);
    pvVar8 = local_158;
  }
  else {
    if (plVar10 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar16 + 8);
      if (lVar11 != 0) {
        plVar10 = (long *)(lVar11 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      pvVar8 = local_158;
      if (plVar10 == (long *)0x0) goto LAB_01bc3494;
    }
    pvVar12 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1000,8);
    pvVar8 = local_158;
  }
  local_158 = pvVar12;
  if (local_158 != (void *)0x0) {
    local_150 = 0x800;
    local_80 = local_158;
    (**(code **)(local_160 + 0x38))(&local_160);
    pvVar8 = local_158;
  }
LAB_01bc3494:
  local_158 = pvVar8;
  puVar6 = PTR_DAT_04bb2718;
  FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),param_3);
  lVar16 = FUN_03d53db0(*(undefined8 *)(*(long *)puVar6 + 0x408),param_3);
  if (lVar16 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = *(uint *)(lVar16 + 8);
  }
  local_198 = &local_18c;
  local_1a8 = PTR_DAT_04bc0b38 + 0x10;
  local_1a0 = 0x800000100;
  if ((int)uVar9 < 0x101) {
    local_1a0 = CONCAT44(8,uVar9);
    local_190 = uVar9;
  }
  else {
    local_190 = 0x100;
  }
  local_168 = &local_74;
  local_18c = 0xffffffffffffffff;
  uStack_184 = 0xffffffffffffffff;
  local_230 = 0x80;
  local_1ad = 0;
  local_22c[0] = 0;
  local_17c = 0xffffffffffffffff;
  uStack_174 = 0xffffffffffffffff;
  puStack_238 = local_22c;
  local_240 = PTR_DAT_04bb2d88 + 0x10;
  if (0 < (int)uVar9) {
    uVar17 = 0;
    do {
      FUN_01be94e0(&local_240,param_3,uVar17);
      uVar13 = (**(code **)*param_4)(param_4,&local_240);
      if ((uVar13 & 1) == 0) {
        uVar4 = 1 << (ulong)(uVar17 & 0x1f);
        uVar1 = *(uint *)((long)local_198 + (ulong)(uVar17 >> 5) * 4);
        if ((uVar1 & uVar4) != 0) {
          *(uint *)((long)local_198 + (ulong)(uVar17 >> 5) * 4) = uVar1 & (uVar4 ^ 0xffffffff);
          local_190 = local_190 - 1;
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar9 != uVar17);
  }
  if (*(long *)(lVar18 + 0x20) != lVar18 + 0x18) {
    lVar16 = (long)*(int *)(lVar18 + 0x2c);
    plVar10 = (long *)(*(long *)(lVar18 + 0x20) - lVar16);
    do {
      if (*(uint *)(plVar10 + 3) == *local_168 &&
          ((*(uint *)((long)plVar10 + 0x1c) == 0xffffffff ||
           *(uint *)((long)plVar10 + 0x1c) == local_168[1]) || local_168[1] == 0xffffffff)) {
        plVar14 = (long *)(**(code **)(*plVar10 + 0x20))(plVar10);
        uVar9 = (**(code **)(*plVar14 + 0x58))();
        if (-1 < (int)uVar9) {
          uVar1 = 1 << (ulong)(uVar9 & 0x1f);
          uVar17 = *(uint *)((long)local_198 + (ulong)(uVar9 >> 5) * 4);
          if ((uVar17 & uVar1) != 0) {
            *(uint *)((long)local_198 + (ulong)(uVar9 >> 5) * 4) = uVar17 & (uVar1 ^ 0xffffffff);
            local_190 = local_190 - 1;
          }
        }
      }
      plVar10 = (long *)(*(long *)((long)plVar10 + lVar16 + 8) - lVar16);
    } while (plVar10 != (long *)((lVar18 + 0x18) - (long)*(int *)(lVar18 + 0x2c)));
  }
  puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar17 = puVar15[3];
  uVar9 = *puVar15 ^ *puVar15 << 0xb;
  *puVar15 = puVar15[1];
  puVar15[1] = puVar15[2];
  uVar9 = uVar9 >> 8 ^ uVar17 >> 0x13 ^ uVar9 ^ uVar17;
  puVar15[2] = uVar17;
  puVar15[3] = uVar9;
  if ((int)(uint)local_1a0 < 1) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = 0;
    uVar13 = (ulong)local_190 * (ulong)uVar9 >> 0x20;
    do {
      if ((*(uint *)((long)local_198 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0
         ) {
        if ((int)uVar13 == 0) goto LAB_01bc3738;
        uVar13 = (ulong)((int)uVar13 - 1);
      }
      uVar17 = uVar17 + 1;
    } while ((uint)local_1a0 != uVar17);
    uVar17 = 0xffffffff;
  }
LAB_01bc3738:
  (**(code **)(*param_1 + 0x68))(param_1,&local_160,param_3,uVar17);
  local_148 = CONCAT44(local_148._4_4_,uVar17);
  FUN_01bc09d8(lVar18,&local_74,&local_160);
  (**(code **)(*param_1 + 0x48))(param_1,&local_160,param_1[0x41],param_1 + 0x43);
  local_160 = puVar7 + 0x10;
  if (local_80 != (void *)0x0) {
    local_158 = (void *)0x0;
    local_150 = 0;
    local_14c = 0;
    local_138 = 0xffffffff;
    local_148 = 0xffffffff;
    uStack_140 = 0xffffffff00000000;
    *local_128 = 0;
    *local_d0 = 0;
    pvVar8 = local_80;
    if (local_80 != (void *)0x0) {
      if (*(long *)puVar5 == 0) {
        free(local_80);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)puVar5,local_80);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar8);
        }
      }
    }
  }
  return;
}

