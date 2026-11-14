
void FUN_01bc2e00(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *pvVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  long *plVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint local_1a0;
  uint local_190;
  uint local_18c [9];
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
  
  puVar4 = PTR_DAT_04bb28f8;
  uVar2 = *(ushort *)(param_2 + 0xc);
  uVar3 = *(ushort *)(param_2 + 0xe);
  local_74 = (uint)uVar2;
  uStack_70 = (uint)uVar3;
  lVar14 = *(long *)PTR_DAT_04bb28f8;
  for (lVar17 = **(long **)(lVar14 + 0x29d0); lVar17 != 0; lVar17 = *(long *)(lVar17 + 8)) {
    while( true ) {
      uVar8 = *(uint *)(lVar17 + 0x20);
      uVar15 = (uint)uVar2;
      if ((local_74 <= uVar8 && uVar8 != uVar15) ||
         (((uVar8 == uVar15 &&
           (uVar1 = *(uint *)(lVar17 + 0x24), uStack_70 <= uVar1 && uVar1 != uVar3)) &&
          (uVar1 != 0xffffffff)))) break;
      if ((uVar15 <= uVar8) && ((uint)uVar3 <= *(uint *)(lVar17 + 0x24))) {
        if (*(code **)(lVar17 + 0x58) == (code *)0x0) goto LAB_01bc2ea0;
        local_6c = (**(code **)(lVar17 + 0x58))(param_2);
        lVar14 = *(long *)puVar4;
        goto LAB_01bc2ea4;
      }
      lVar17 = *(long *)(lVar17 + 0x10);
      if (lVar17 == 0) goto LAB_01bc2ea0;
    }
  }
LAB_01bc2ea0:
  local_6c = 0;
LAB_01bc2ea4:
  lVar17 = FUN_01bc1730(lVar14 + 0x2990,param_1[0x41] + 8);
  if (lVar17 == 0) {
    return;
  }
  lVar14 = FUN_01bc06e0(lVar17,&local_74,1);
  puVar6 = PTR_DAT_04bb2e00;
  puVar4 = PTR_DAT_04bb2698;
  if (lVar14 != 0) {
    return;
  }
  local_150 = 0;
  local_14c = 0;
  local_148 = 0xffffffff;
  uStack_140 = 0xffffffff00000000;
  local_138 = 0xffffffff;
  local_128 = local_11c;
  plVar9 = *(long **)PTR_DAT_04bc08b8;
  local_120 = 0x40;
  local_dd = 0;
  local_11c[0] = 0;
  local_130 = PTR_DAT_04bb2bc0 + 0x10;
  local_c8 = 0x40;
  local_85 = 0;
  local_c4[0] = 0;
  local_d0 = local_c4;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  local_160 = PTR_DAT_04bb2e00 + 0x10;
  local_80 = (void *)0x0;
  local_158 = (void *)0x0;
  local_d8 = local_130;
  if (lVar14 == 0) {
    pvVar11 = malloc(0x1000);
    pvVar7 = local_158;
  }
  else {
    if (plVar9 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar14 + 8);
      if (lVar10 != 0) {
        plVar9 = (long *)(lVar10 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      pvVar7 = local_158;
      if (plVar9 == (long *)0x0) goto LAB_01bc2fe0;
    }
    pvVar11 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1000,8);
    pvVar7 = local_158;
  }
  local_158 = pvVar11;
  if (local_158 != (void *)0x0) {
    local_150 = 0x800;
    local_80 = local_158;
    (**(code **)(local_160 + 0x38))(&local_160);
    pvVar7 = local_158;
  }
LAB_01bc2fe0:
  local_158 = pvVar7;
  puVar5 = PTR_DAT_04bb2718;
  FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),param_3);
  lVar14 = FUN_03d53db0(*(undefined8 *)(*(long *)puVar5 + 0x408),param_3);
  if (lVar14 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = *(uint *)(lVar14 + 8);
  }
  local_1a0 = 0x100;
  if ((int)uVar8 < 0x101) {
    local_1a0 = uVar8;
  }
  local_168 = &local_74;
  local_18c[4] = 0xffffffff;
  local_18c[5] = 0xffffffff;
  local_18c[6] = 0xffffffff;
  local_18c[7] = 0xffffffff;
  local_18c[0] = 0xffffffff;
  local_18c[1] = 0xffffffff;
  local_18c[2] = 0xffffffff;
  local_18c[3] = 0xffffffff;
  local_190 = local_1a0;
  if (*(long *)(lVar17 + 0x20) != lVar17 + 0x18) {
    lVar14 = (long)*(int *)(lVar17 + 0x2c);
    plVar9 = (long *)(*(long *)(lVar17 + 0x20) - lVar14);
    do {
      if (*(uint *)(plVar9 + 3) == *local_168 &&
          ((*(uint *)((long)plVar9 + 0x1c) == 0xffffffff ||
           *(uint *)((long)plVar9 + 0x1c) == local_168[1]) || local_168[1] == 0xffffffff)) {
        plVar12 = (long *)(**(code **)(*plVar9 + 0x20))(plVar9);
        uVar8 = (**(code **)(*plVar12 + 0x58))();
        if (-1 < (int)uVar8) {
          uVar15 = 1 << (ulong)(uVar8 & 0x1f);
          if ((local_18c[uVar8 >> 5] & uVar15) != 0) {
            local_18c[uVar8 >> 5] = local_18c[uVar8 >> 5] & (uVar15 ^ 0xffffffff);
            local_190 = local_190 - 1;
          }
        }
      }
      plVar9 = (long *)(*(long *)((long)plVar9 + lVar14 + 8) - lVar14);
    } while (plVar9 != (long *)((lVar17 + 0x18) - (long)*(int *)(lVar17 + 0x2c)));
  }
  puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar15 = puVar13[3];
  uVar8 = *puVar13 ^ *puVar13 << 0xb;
  *puVar13 = puVar13[1];
  puVar13[1] = puVar13[2];
  uVar8 = uVar8 >> 8 ^ uVar15 >> 0x13 ^ uVar8 ^ uVar15;
  puVar13[2] = uVar15;
  puVar13[3] = uVar8;
  if ((int)local_1a0 < 1) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar15 = 0;
    uVar16 = (ulong)local_190 * (ulong)uVar8 >> 0x20;
    do {
      if ((local_18c[uVar15 >> 5] >> (ulong)(uVar15 & 0x1f) & 1) != 0) {
        if ((int)uVar16 == 0) goto LAB_01bc31e4;
        uVar16 = (ulong)((int)uVar16 - 1);
      }
      uVar15 = uVar15 + 1;
    } while (local_1a0 != uVar15);
    uVar15 = 0xffffffff;
  }
LAB_01bc31e4:
  (**(code **)(*param_1 + 0x68))(param_1,&local_160,param_3,uVar15);
  local_148 = CONCAT44(local_148._4_4_,uVar15);
  FUN_01bc09d8(lVar17,&local_74,&local_160);
  (**(code **)(*param_1 + 0x48))(param_1,&local_160,param_1[0x41],param_1 + 0x43);
  local_160 = puVar6 + 0x10;
  if (local_80 != (void *)0x0) {
    local_158 = (void *)0x0;
    local_150 = 0;
    local_14c = 0;
    local_138 = 0xffffffff;
    local_148 = 0xffffffff;
    uStack_140 = 0xffffffff00000000;
    *local_128 = 0;
    *local_d0 = 0;
    pvVar7 = local_80;
    if (local_80 != (void *)0x0) {
      if (*(long *)puVar4 == 0) {
        free(local_80);
      }
      else {
        plVar9 = (long *)FUN_038cb610(*(long *)puVar4,local_80);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x38))(plVar9,pvVar7);
        }
      }
    }
  }
  return;
}

