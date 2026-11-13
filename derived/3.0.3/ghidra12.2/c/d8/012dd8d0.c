
void FUN_012dd8d0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  long *plVar19;
  undefined2 local_e4 [2];
  undefined *local_e0;
  undefined2 local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  plVar19 = (long *)*param_2;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)((long)param_2 + 10);
  local_e0 = PTR_DAT_04bbc0a0;
  local_c8 = 0x244db4da;
  local_d0 = (long *)((ulong)local_d0 & 0xffffff0000000000);
  local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)((long)param_2 + 0xc);
  local_e0 = local_e0 + 0x10;
  lVar8 = FUN_012aa5e8(&local_e0,plVar19,&local_d0);
  *(long *)(param_1 + 0xa0) = lVar8;
  local_e0 = PTR_DAT_04bbc4e0 + 0x10;
  local_d8 = *(undefined2 *)(param_1 + 0xc);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) {
    FUN_01338160(&local_e0,plVar19,*(long *)(lVar8 + 0xa8) + 0x30);
  }
  FUN_01338ba8(&local_e0,plVar19,param_1 + 0xc0);
  if (*(long *)(param_1 + 0xa0) != 0) {
    local_e4[0] = *(undefined2 *)(param_1 + 0xe);
    uVar14 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = (undefined *)0x0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_c0 = (undefined *)0x0;
    local_b8 = 0;
    local_d0 = (long *)0x0;
    local_c8 = 0;
    do {
      lVar8 = uVar14 << 0x20;
      uVar16 = uVar14 << 1;
      uVar4 = uVar14 >> 0x1f;
      uVar15 = (int)uVar14 + 2;
      uVar14 = (ulong)uVar15;
      *(undefined2 *)((long)&local_d0 + (-uVar4 & 0xfffffffe00000000 | uVar16)) = 0;
      *(undefined2 *)((long)&local_d0 + (lVar8 + 0x100000000 >> 0x1f)) = 0;
    } while (uVar15 != 0x48);
    uVar14 = FUN_01263024(local_e4,&local_d0);
    if ((uVar14 & 1) != 0) {
      uVar9 = FUN_01263dec(local_e4,&local_d0);
      FUN_0126589c(uVar9,&local_d0);
      memcpy((void *)(param_1 + 0x10),&local_d0,0x90);
    }
    uVar16 = 9;
    iVar12 = 0;
    lVar8 = *(long *)(*(long *)(param_1 + 0xa0) + 0xb8);
    uVar15 = 0;
    uVar17 = 8;
    uVar14 = 9;
    *(undefined8 *)(lVar8 + 8) = 0x800000009;
    do {
      if (uVar14 != 0) {
        uVar14 = 0;
        do {
          if ((uVar15 < 9) && (uVar17 = (uint)uVar14, uVar17 < 10)) {
            uVar2 = iVar12 + uVar17;
            uVar16 = (ulong)uVar2;
            if (0x47 < uVar2) {
              uVar16 = 0;
            }
            uVar3 = *(undefined2 *)(param_1 + 0x10 + uVar16 * 2);
            lVar10 = lVar8 + 0x10 + (ulong)uVar2 * 0x18;
            if (0x47 < uVar2) {
              lVar10 = lVar8 + 0x10;
            }
            *(uint *)(lVar10 + 0xc) = uVar17;
            *(uint *)(lVar10 + 0x10) = uVar15;
            *(undefined2 *)(lVar10 + 8) = uVar3;
            uVar16 = (ulong)*(uint *)(lVar8 + 8);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar16);
        uVar17 = *(uint *)(lVar8 + 0xc);
        uVar14 = uVar16;
      }
      uVar15 = uVar15 + 1;
      iVar12 = iVar12 + 9;
    } while (uVar15 < uVar17);
    *(undefined4 *)(lVar8 + 0x6d0) = 0;
  }
  FUN_0095f4d0(*(undefined8 *)PTR_DAT_04bb2228,param_1 + 0x10);
  puVar5 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar11 = malloc(0xe0);
  }
  else {
    plVar11 = plVar19;
    if (plVar19 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar8 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
        goto LAB_012ddb58;
      }
    }
    plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0xe0,8);
  }
LAB_012ddb58:
  *(undefined4 *)(plVar11 + 1) = 0;
  puVar6 = PTR_DAT_04bbc5d0;
  puVar1 = PTR_DAT_04bb2018;
  plVar11[2] = 0;
  plVar11[3] = 0;
  puVar7 = PTR_DAT_04bbc5e0;
  *(undefined4 *)(plVar11 + 6) = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  local_c0 = puVar1 + 0x10;
  plVar11[0xd] = 0;
  *(undefined4 *)(plVar11 + 0xe) = 0;
  *plVar11 = (long)(puVar6 + 0x10);
  puVar1 = puVar7 + 0x10;
  plVar11[4] = (long)local_c0;
  plVar11[5] = 0;
  plVar11[7] = 0;
  plVar11[8] = (long)puVar1;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  *(undefined4 *)(plVar11 + 0xf) = 0;
  plVar11[0x10] = 0;
  *(undefined1 *)(plVar11 + 0x11) = 0;
  *(undefined4 *)((long)plVar11 + 0x8c) = 0;
  plVar11[0x1a] = 0;
  *(undefined4 *)(plVar11 + 0x1b) = 0;
  uVar14 = (ulong)local_b0 >> 0x10;
  local_a8 = local_a8 & 0xffffffffffffff00;
  plVar11[0x14] = 0;
  plVar11[0x15] = (long)puVar1;
  local_b0 = CONCAT62((uint6)uVar14 & 0xffffffffff00,0x100);
  local_c8 = 0x6000000070;
  plVar11[0x12] = (long)local_c0;
  plVar11[0x13] = 0;
  uStack_98 = 0;
  local_b8 = CONCAT44(DAT_05178e54,DAT_05178e50);
  plVar11[0x16] = 0;
  plVar11[0x17] = 0;
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  local_d0 = plVar19;
  local_a0 = local_c0;
  FUN_013817c0(plVar11,&local_d0);
  plVar11[2] = *(long *)(param_1 + 0xa0);
  *(long **)(param_1 + 0xa8) = plVar11;
  lVar8 = *(long *)puVar5;
  if (lVar8 == 0) {
    plVar11 = malloc(0x70);
  }
  else {
    plVar11 = plVar19;
    if (plVar19 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar8 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)(lVar10 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)0x0;
        goto LAB_012ddc78;
      }
    }
    plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x70,8);
  }
LAB_012ddc78:
  *(undefined4 *)(plVar11 + 1) = 0;
  puVar5 = PTR_DAT_04bbc320;
  plVar11[2] = 0;
  plVar11[3] = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[10] = 0;
  *(undefined4 *)(plVar11 + 0xb) = 0;
  *plVar11 = (long)(puVar5 + 0x10);
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[4] = 0;
  plVar11[5] = (long)(puVar7 + 0x10);
  plVar11[0xc] = 0;
  plVar11[0xd] = 0;
  local_c8 = *(undefined8 *)(param_1 + 0xa8);
  local_c0 = (undefined *)CONCAT44(200,*(undefined4 *)((long)param_2 + 0xc));
  local_d0 = plVar19;
  FUN_01311710(plVar11,&local_d0);
  *(long **)(param_1 + 0xb0) = plVar11;
  FUN_01381fa0(*(undefined8 *)(param_1 + 0xa8),1);
  lVar8 = *(long *)(param_1 + 0xb0);
  if ((((*(byte *)(lVar8 + 8) & 1) != 0) && (iVar12 = *(int *)(lVar8 + 0x1c), 0 < iVar12)) &&
     (iVar13 = *(int *)(lVar8 + 0x18), 0 < iVar13)) {
    iVar18 = 0;
    do {
      if (0 < iVar13) {
        iVar12 = 0;
        do {
          if ((*(byte *)(lVar8 + 8) & 1) != 0) {
            FUN_0138367c(lVar8 + 0x28,iVar12,iVar18);
            iVar13 = *(int *)(lVar8 + 0x18);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar13);
        iVar12 = *(int *)(lVar8 + 0x1c);
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar12);
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  return;
}

