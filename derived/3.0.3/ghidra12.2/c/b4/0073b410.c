
void FUN_0073b410(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  undefined *local_150;
  char *local_148;
  undefined8 local_140;
  long local_138;
  long *local_130;
  long local_128;
  undefined8 uStack_120;
  long local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  long local_f0;
  
  puVar11 = PTR_DAT_04bb2698;
  lVar10 = *(long *)(param_1[0x22a] + 0x50);
  if ((lVar10 == 0) ||
     (((((*(int *)(lVar10 + 0x80) == 0 && (*(short *)(lVar10 + 0xa0) == 0)) &&
        (*(short *)(lVar10 + 0xa2) == 0)) &&
       ((*(short *)(lVar10 + 0xa4) == 0 && (*(short *)(lVar10 + 0xa6) == 0)))) &&
      ((*(short *)(lVar10 + 0xa8) == 0 &&
       ((*(short *)(lVar10 + 0xaa) == 0 && (*(char *)((long)param_1 + 0x11dc) == '\0')))))))) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      plVar8 = malloc(0x180);
    }
    else {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar10 + 8);
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x180,8);
      }
    }
    *plVar8 = (long)(PTR_DAT_04bcb448 + 0x10);
    puVar2 = PTR_DAT_04bcb420;
    plVar8[0x2c] = 0;
    plVar8[0x2d] = 0;
    *(undefined4 *)(plVar8 + 1) = 0;
    *(undefined4 *)((long)plVar8 + 0x174) = 0;
    plVar8[0x2b] = 0;
    puVar2 = puVar2 + 0x10;
    plVar8[2] = 0;
    plVar8[3] = (long)puVar2;
    plVar8[7] = (long)puVar2;
    plVar8[0xb] = (long)puVar2;
    plVar8[0xf] = (long)puVar2;
    plVar8[0x13] = (long)puVar2;
    plVar8[0x17] = (long)puVar2;
    plVar8[0x1b] = (long)puVar2;
    plVar8[0x1f] = (long)puVar2;
    plVar8[0x23] = (long)puVar2;
    plVar8[0x27] = (long)puVar2;
    *(undefined4 *)((long)plVar8 + 0x16f) = 0;
    *(undefined4 *)(plVar8 + 0x2f) = 0x1010101;
    lVar15 = param_1[0x22a];
    param_1[0x229] = (long)plVar8;
    lVar9 = *(long *)puVar11;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar9 + 8);
    if (lVar10 != 0) {
      plVar4 = (long *)(lVar10 + 0xa8);
    }
    lVar10 = *plVar4;
    plVar8[0x2b] = param_2;
    plVar8[0x2c] = lVar15;
    plVar8[0x2d] = lVar10;
    *(long **)(lVar15 + 0x58) = plVar8;
    FUN_038555d0(plVar8);
    return;
  }
  uVar6 = (**(code **)(*param_1 + 0xf8))(param_1);
  puVar2 = PTR_DAT_04bb2220;
  puVar11 = PTR_DAT_04bb2020;
  if (uVar6 < 2) {
    if (*(char *)param_1[0x205] == '\0') {
      lVar10 = param_1[0x226];
    }
    else {
      lVar10 = FUN_007c95d0(*(undefined8 *)PTR_DAT_04bb2220,param_1 + 0x204,0);
      param_1[0x226] = lVar10;
    }
    if (lVar10 == 0) {
      local_150 = puVar11 + 0x10;
      local_148 = "ParkDefault";
      lVar10 = FUN_007c95d0(*(undefined8 *)puVar2,&local_150,0);
      param_1[0x226] = lVar10;
    }
  }
  else {
    iVar13 = 0;
    uVar14 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar12 = *(uint *)(param_1 + 0x217);
      lVar10 = param_1[0x218];
      uVar3 = uVar14;
      if (uVar12 <= uVar14) {
        uVar3 = 0;
      }
      lVar9 = lVar10 + (long)(int)uVar3 * 0x98;
      if (**(char **)(lVar9 + 8) == '\0') {
LAB_0073b518:
        uVar3 = uVar14;
        if (uVar12 <= uVar14) {
          uVar3 = 0;
        }
        if (**(char **)(lVar10 + (long)(int)uVar3 * 0x98 + 8) != '\0') {
          local_148 = "ParkDefault";
          local_150 = puVar1;
          lVar10 = FUN_007c95d0(*(undefined8 *)puVar2,&local_150,0);
          if (lVar10 != 0) goto LAB_0073b548;
        }
      }
      else {
        lVar10 = FUN_007c95d0(*(undefined8 *)puVar2,lVar9,0);
        if (lVar10 == 0) {
          uVar12 = *(uint *)(param_1 + 0x217);
          lVar10 = param_1[0x218];
          goto LAB_0073b518;
        }
LAB_0073b548:
        if ((int)param_1[0x219] < *(int *)((long)param_1 + 0x10cc)) {
          *(long *)(param_1[0x21a] + (long)(int)param_1[0x219] * 8) = lVar10 + 8;
          *(int *)(param_1 + 0x219) = (int)param_1[0x219] + 1;
        }
        iVar13 = iVar13 + 1;
      }
      uVar14 = uVar14 + 1;
    } while (uVar6 != uVar14);
    if (iVar13 == 0) {
      local_150 = puVar11 + 0x10;
      local_148 = "ParkDefault";
      lVar10 = FUN_007c95d0(*(undefined8 *)puVar2,&local_150,0);
      if ((lVar10 != 0) && ((int)param_1[0x219] < *(int *)((long)param_1 + 0x10cc))) {
        *(long *)(param_1[0x21a] + (long)(int)param_1[0x219] * 8) = lVar10 + 8;
        *(int *)(param_1 + 0x219) = (int)param_1[0x219] + 1;
      }
    }
  }
  puVar1 = PTR_DAT_04bb2698;
  lVar15 = param_1[0x226];
  lVar9 = *(long *)puVar2;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    plVar8 = malloc(0x2c8);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar10 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2c8,8);
    }
  }
  *(undefined1 *)((long)plVar8 + 0x5b) = 0;
  *(undefined1 *)((long)plVar8 + 0x1c) = 0;
  *(undefined4 *)(plVar8 + 3) = 0x40;
  puVar5 = PTR_DAT_04bcb418;
  plVar8[2] = (long)plVar8 + 0x1c;
  puVar2 = PTR_DAT_04bb2bc0;
  plVar8[0x11] = 0;
  *(undefined4 *)(plVar8 + 0x12) = 0;
  plVar8[0xc] = 0;
  plVar8[0xd] = 0;
  *(undefined4 *)(plVar8 + 0x10) = 0;
  *(undefined2 *)((long)plVar8 + 0xac) = 0;
  *(undefined1 *)((long)plVar8 + 0xae) = 0;
  *(undefined4 *)(plVar8 + 0x16) = 0;
  *(undefined2 *)((long)plVar8 + 0xb4) = 0;
  *(undefined4 *)(plVar8 + 0x17) = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  plVar8[1] = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar8 + 0x15) = 0x3f800000;
  plVar8[0xe] = 0;
  plVar8[0xf] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 0;
  FUN_038516c8(&local_150);
  FUN_0384f010(plVar8 + 0x10,&local_150);
  *(undefined4 *)(plVar8 + 0x19) = 0;
  puVar2 = PTR_DAT_04bcb420;
  plVar8[0x45] = 0;
  *(undefined4 *)((long)plVar8 + 0x22f) = 0;
  *(undefined8 *)((long)plVar8 + 0x234) = 0x101010100000000;
  plVar8[0x43] = 0;
  puVar2 = puVar2 + 0x10;
  plVar8[0x44] = 0;
  *(undefined2 *)(plVar8 + 0x58) = 0;
  plVar8[0x1f] = (long)puVar2;
  plVar8[0x23] = (long)puVar2;
  plVar8[0x27] = (long)puVar2;
  plVar8[0x2b] = (long)puVar2;
  plVar8[0x2f] = (long)puVar2;
  plVar8[0x33] = (long)puVar2;
  plVar8[0x37] = (long)puVar2;
  plVar8[0x3b] = (long)puVar2;
  plVar8[0x3f] = (long)puVar2;
  plVar8[0x48] = (long)puVar2;
  plVar8[0x4c] = (long)puVar2;
  plVar8[0x50] = (long)puVar2;
  plVar8[0x54] = (long)puVar2;
  plVar8[0x1a] = 0;
  plVar8[0x1b] = (long)puVar2;
  *plVar8 = (long)&PTR_FUN_04903998;
  plVar8[0x18] = (long)&PTR_FUN_049039e8;
  local_148 = puVar11 + 0x10;
  param_1[0x227] = (long)plVar8;
  local_f8 = 0x20;
  local_108 = 0x2000000010;
  uStack_100 = 0x1000000008;
  local_138 = 0;
  local_130 = (long *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_110 = 0;
  if ((*(uint *)(param_1[9] + 0x15c) < 0xec) &&
     ((int *)(&DAT_04c969c8)[*(uint *)(param_1[9] + 0x15c)] != (int *)0x0)) {
    puVar11 = PTR_DAT_04bb3840 + (long)*(int *)(&DAT_04c969c8)[*(uint *)(param_1[9] + 0x15c)] * 0x10
    ;
  }
  else {
    puVar11 = PTR_PTR_04bb2238;
  }
  local_140 = *(undefined8 *)(puVar11 + 8);
  local_150 = (undefined *)param_1[0x22a];
  if (uVar6 < 2) {
    local_138 = 0;
    if (lVar15 != 0) {
      local_138 = lVar15 + 8;
    }
  }
  else {
    local_130 = param_1 + 0x219;
  }
  local_118 = lVar9 + 0x28;
  local_f0 = param_2;
  local_128 = (**(code **)(*param_1 + 0x1b0))(param_1);
  (**(code **)(*param_1 + 0x1a8))(param_1,&local_150);
  lVar10 = local_f0;
  puVar11 = local_150;
  lVar15 = param_1[0x227];
  lVar9 = local_128;
  if (local_128 == 0) {
    lVar7 = *(long *)puVar1;
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar7 + 8);
    if (lVar9 != 0) {
      plVar8 = (long *)(lVar9 + 0xa8);
    }
    lVar9 = *plVar8;
  }
  *(long *)(lVar15 + 0x228) = lVar9;
  *(long *)(lVar15 + 0x218) = lVar10;
  *(undefined **)(lVar15 + 0x220) = puVar11;
  *(long *)(puVar11 + 0x58) = lVar15 + 0xc0;
  FUN_038555d0();
  FUN_0384e6e0(lVar15,&local_150);
  (**(code **)(*param_1 + 0x1b8))(param_1);
  return;
}

