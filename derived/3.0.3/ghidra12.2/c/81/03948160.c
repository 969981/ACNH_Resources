
void FUN_03948160(long param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  void *pvVar16;
  long lVar17;
  undefined8 uVar18;
  int iVar19;
  byte bVar20;
  undefined2 uVar21;
  int *piVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 *puVar25;
  int iVar26;
  ulong *puVar27;
  ulong uVar28;
  size_t sVar29;
  long lVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  uint *puVar35;
  int iVar36;
  ulong local_c8;
  uint local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar32 = *param_2;
  if (0 < (int)uVar32) {
    uVar28 = (ulong)uVar32 * 0x150 | 8;
    lVar30 = *(long *)PTR_DAT_04bb2698;
    if (lVar30 == 0) {
      puVar10 = malloc(uVar28);
      puVar1 = PTR_DAT_04bb2020;
      puVar2 = PTR_DAT_04bb2028;
joined_r0x03948208:
      PTR_DAT_04bb2020 = puVar1;
      PTR_DAT_04bb2028 = puVar2;
      if (puVar10 != (ulong *)0x0) {
        puVar11 = puVar10 + 1;
        *puVar10 = (ulong)uVar32;
        puVar5 = PTR_DAT_04bb2120;
        puVar10 = puVar11;
        do {
          puVar10[8] = 0;
          puVar10[9] = 0;
          *(undefined4 *)(puVar10 + 10) = 0xffffffff;
          *(undefined4 *)(puVar10 + 0x13) = 0x10000;
          puVar10[0x18] = 0;
          *(undefined4 *)(puVar10 + 0x19) = 0;
          puVar10[0x20] = 0;
          *(undefined1 *)(puVar10 + 0x21) = 0xee;
          *(undefined4 *)((long)puVar10 + 0x10c) = 0;
          *(undefined2 *)(puVar10 + 0x22) = 0;
          *(undefined4 *)(puVar10 + 0x25) = 0x20;
          *(undefined1 *)((long)puVar10 + 300) = 0;
          *(undefined1 *)((long)puVar10 + 0x14b) = 0;
          *(undefined1 *)((long)puVar10 + 0x10b) = 0;
          *(undefined4 *)(puVar10 + 0x1d) = 0;
          puVar10[0x1a] = 0;
          *(undefined1 *)((long)puVar10 + 0x112) = 0;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[0xb] = 0;
          puVar10[0xc] = 0;
          puVar10[0xd] = 0;
          puVar10[0xe] = 0;
          puVar10[0xf] = 0;
          puVar10[0x10] = 0;
          puVar10[0x16] = 0;
          puVar10[0x17] = 0;
          puVar10[0x1b] = (ulong)(puVar1 + 0x10);
          puVar10[0x1c] = (ulong)puVar5;
          puVar10[0x1e] = 0;
          puVar10[0x1f] = 0;
          puVar10[0x23] = (ulong)(puVar2 + 0x10);
          puVar10[0x24] = (long)puVar10 + 300U;
          puVar10[0x11] = 0;
          puVar10[0x12] = (long)puVar10 + 300U;
          *(undefined2 *)((long)puVar10 + 0x109) = 0;
          puVar10[0x14] = 0;
          puVar10[0x15] = 0;
          puVar10 = puVar10 + 0x2a;
        } while (puVar10 != puVar11 + (ulong)uVar32 * 0x2a);
        *(uint *)(param_1 + 0xa50) = uVar32;
        *(ulong **)(param_1 + 0xa58) = puVar11;
      }
    }
    else {
      plVar8 = *(long **)(param_2 + 10);
      if (plVar8 != (long *)0x0) {
LAB_039481e4:
        puVar10 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar28,8);
        puVar1 = PTR_DAT_04bb2020;
        puVar2 = PTR_DAT_04bb2028;
        goto joined_r0x03948208;
      }
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar30 + 8);
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 != (long *)0x0) goto LAB_039481e4;
    }
    uVar32 = *param_2;
    if (0 < (int)uVar32) {
      lVar30 = (ulong)uVar32 * 0x18;
      sVar29 = lVar30 + 8;
      lVar9 = *(long *)PTR_DAT_04bb2698;
      if (lVar9 == 0) {
        puVar10 = malloc(sVar29);
      }
      else {
        plVar8 = *(long **)(param_2 + 10);
        if (plVar8 == (long *)0x0) {
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar8 = (long *)(lVar9 + 8);
          if (lVar12 != 0) {
            plVar8 = (long *)(lVar12 + 0xa8);
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_03948394;
        }
        puVar10 = (ulong *)(**(code **)(*plVar8 + 0x30))(plVar8,sVar29,8);
      }
      if (puVar10 != (ulong *)0x0) {
        *puVar10 = (ulong)uVar32;
        memset(puVar10 + 1,0,((lVar30 - 0x18U) / 0x18) * 0x18 + 0x18);
        *(uint *)(param_1 + 0xb10) = uVar32;
        *(ulong **)(param_1 + 0xb18) = puVar10 + 1;
      }
    }
  }
LAB_03948394:
  lVar30 = *(long *)PTR_DAT_04bb2698;
  if (lVar30 == 0) {
    puVar13 = malloc(0xb0);
joined_r0x039484c8:
    if (puVar13 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar13 + 6) = 0;
      puVar13[1] = 0;
      *puVar13 = 3;
      *(undefined4 *)(puVar13 + 0xd) = 0;
      *(undefined4 *)(puVar13 + 0x14) = 0;
      puVar13[0x15] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[7] = 0;
      puVar13[8] = 0;
      puVar13[9] = 0;
      puVar13[10] = 0;
      puVar13[0xe] = 0;
      puVar13[0xf] = 0;
      puVar13[0x10] = 0;
      puVar13[0x11] = 0;
      *(undefined4 *)(param_1 + 0xaf8) = 3;
      *(undefined8 **)(param_1 + 0xb00) = puVar13 + 1;
    }
  }
  else {
    plVar8 = *(long **)(param_2 + 10);
    if (plVar8 != (long *)0x0) {
LAB_039483d8:
      puVar13 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0xb0,8);
      goto joined_r0x039484c8;
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar30 + 8);
    if (lVar9 != 0) {
      plVar8 = (long *)(lVar9 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) goto LAB_039483d8;
  }
  puVar10 = (ulong *)(param_2 + 2);
  *(ulong *)(param_1 + 0xae8) = *puVar10;
  uVar28 = *puVar10;
  plVar8 = *(long **)(param_2 + 10);
  local_98 = *(uint *)(param_1 + 8) & 0x200;
  uVar21 = 4;
  if ((*(uint *)(param_1 + 8) & 0x200) != 0) {
    uVar21 = 0x84;
  }
  lVar30 = *(long *)PTR_DAT_04bb2698;
  if (lVar30 == 0) {
    plVar14 = malloc(0x38);
  }
  else {
    plVar14 = plVar8;
    if (plVar8 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar30 + 8);
      if (lVar9 != 0) {
        plVar14 = (long *)(lVar9 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)0x0;
        goto LAB_039484e0;
      }
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x38,8);
  }
LAB_039484e0:
  plVar14[6] = 0;
  plVar15 = plVar14 + 1;
  *plVar15 = 0;
  *(undefined2 *)((long)plVar14 + 0x2a) = 0;
  bVar20 = 0;
  plVar14[2] = 0;
  plVar14[3] = 0;
  plVar14[4] = 0;
  puVar2 = PTR_DAT_04bb2cc8;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar14 + 5) = 0;
  *plVar14 = (long)puVar1;
  if (plVar8 == (long *)0x0) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    lVar30 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar13 = (undefined8 *)(lVar9 + 8);
    if (lVar30 != 0) {
      puVar13 = (undefined8 *)(lVar30 + 0xa8);
    }
    plVar8 = (long *)*puVar13;
    bVar20 = *(byte *)(plVar14 + 5) & 0xfe;
  }
  plVar14[6] = 0;
  *(byte *)(plVar14 + 5) = bVar20;
  *plVar15 = 0;
  plVar14[2] = 0;
  plVar14[3] = 0;
  plVar14[4] = 0;
  puVar1 = PTR_DAT_04bd0fa8;
  *(undefined2 *)((long)plVar14 + 0x2a) = 0;
  if ((uVar28 & 0xffffffff) == 0) {
    iVar7 = 0;
    lVar30 = 0;
    *(undefined2 *)((long)plVar14 + 0x2a) = uVar21;
  }
  else {
    FUN_038f8590(*(undefined8 *)puVar1,plVar14,plVar8,(long)(int)uVar28,8,uVar21);
    lVar30 = plVar14[3];
    *(undefined2 *)((long)plVar14 + 0x2a) = uVar21;
    if (plVar14[4] == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)*plVar15 - *(int *)(plVar14[4] + 0x10);
    }
    if (lVar30 != 0) {
      iVar19 = *(int *)(lVar30 + 0x104);
      goto LAB_039485dc;
    }
  }
  iVar19 = 0;
LAB_039485dc:
  plVar8 = *(long **)(param_2 + 0xc);
  if (plVar8 == (long *)0x0) {
    plVar15 = (long *)0x0;
    lVar9 = 0;
    local_c8 = 0;
    iVar33 = 0;
    iVar31 = 0;
  }
  else {
    uVar28 = *(ulong *)(param_2 + 4);
    if (uVar28 == 0) {
      plVar15 = (long *)0x0;
      lVar9 = 0;
      local_c8 = 0;
      iVar33 = 0;
      iVar31 = 0;
    }
    else {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        plVar15 = malloc(0x38);
      }
      else {
        plVar15 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x38,8);
      }
      plVar15[6] = 0;
      plVar15[1] = 0;
      *plVar15 = (long)(puVar2 + 0x10);
      *(undefined2 *)((long)plVar15 + 0x2a) = 0;
      plVar15[4] = 0;
      *(undefined1 *)(plVar15 + 5) = 0;
      plVar15[2] = 0;
      plVar15[3] = 0;
      if ((uVar28 & 0xffffffff) == 0) {
        lVar9 = 0;
        iVar33 = 0;
        iVar31 = 0;
        *(undefined2 *)((long)plVar15 + 0x2a) = uVar21;
        local_c8 = 0x40000000;
      }
      else {
        FUN_038f8590(*(undefined8 *)puVar1,plVar15,plVar8,(long)(int)uVar28,8,uVar21);
        lVar9 = plVar15[3];
        *(undefined2 *)((long)plVar15 + 0x2a) = uVar21;
        if (plVar15[4] == 0) {
          iVar31 = 0;
        }
        else {
          iVar31 = (int)plVar15[1] - *(int *)(plVar15[4] + 0x10);
        }
        if (lVar9 == 0) {
          iVar33 = 0;
        }
        else {
          iVar33 = *(int *)(lVar9 + 0x104);
        }
        local_c8 = 0x40000000;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0xaf8);
  if (iVar4 != 0) {
    iVar36 = 0;
    lVar12 = *(long *)(param_1 + 0xb00);
    do {
      piVar22 = (int *)(lVar12 + (long)iVar36 * 0x38);
      puVar11 = (ulong *)(piVar22 + 6);
      *(char *)(piVar22 + 8) = (char)(local_98 >> 9);
      lVar17 = lVar30;
      plVar8 = plVar14;
      puVar27 = puVar10;
      iVar26 = iVar19;
      iVar24 = iVar7;
      if (iVar36 == 0) {
LAB_039487e0:
        *piVar22 = iVar24;
        piVar22[1] = iVar26;
        *(long *)(piVar22 + 2) = lVar17;
        *(long **)(piVar22 + 4) = plVar8;
        *puVar11 = *puVar27;
LAB_039487f0:
        if ((local_98 >> 9 != 0) && (*(long *)(piVar22 + 2) != 0)) {
          local_78 = *piVar22;
          local_74 = piVar22[1];
          local_70 = *(undefined8 *)(piVar22 + 2);
          local_68 = *(undefined8 *)(piVar22 + 4);
          FUN_03967d40(lVar12 + (long)iVar36 * 0x38 + 0x28,&local_78,*puVar11,
                       *(undefined8 *)(param_2 + 10));
        }
      }
      else {
        if (iVar36 != 2) {
          lVar17 = lVar9;
          plVar8 = plVar15;
          puVar27 = (ulong *)(param_2 + 4);
          iVar26 = iVar33;
          iVar24 = iVar31;
          if (iVar36 == 1) goto LAB_039487e0;
          goto LAB_039487f0;
        }
        *piVar22 = iVar31;
        piVar22[1] = iVar33;
        *(undefined1 *)(piVar22 + 8) = 0;
        *(long *)(piVar22 + 2) = lVar9;
        *(long **)(piVar22 + 4) = plVar15;
        *puVar11 = local_c8;
      }
      iVar36 = iVar36 + 1;
    } while (iVar4 != iVar36);
  }
  lVar30 = param_1 + 0x10;
  iVar7 = 0;
  puVar1 = PTR_DAT_04bd13a8 + 0x10;
  puVar2 = PTR_DAT_04bb2cc8 + 0x10;
  do {
    puVar35 = (uint *)(lVar30 + (long)iVar7 * 0x290);
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
      puVar13 = malloc(0x2a8);
      if (puVar13 != (undefined8 *)0x0) goto LAB_03948980;
LAB_03948b0c:
      plVar8 = *(long **)(puVar35 + 2);
      uVar32 = *puVar35;
      *(char *)(lVar30 + (long)iVar7 * 0x290 + 0x28c) = (char)iVar7;
      if (uVar32 != 0) goto LAB_03948b28;
    }
    else {
      plVar8 = *(long **)(param_2 + 10);
      if (plVar8 == (long *)0x0) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar9 + 8);
        if (lVar12 != 0) {
          plVar8 = (long *)(lVar12 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_03948b0c;
      }
      puVar13 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2a8,8);
      if (puVar13 == (undefined8 *)0x0) goto LAB_03948b0c;
LAB_03948980:
      puVar13[9] = puVar13 + 9;
      puVar13[10] = puVar13 + 9;
      puVar13[0x17] = puVar13 + 0x17;
      puVar13[0x18] = puVar13 + 0x17;
      puVar13[0x26] = puVar13 + 0x25;
      puVar13[0x27] = 0x6800000000;
      uVar32 = 3;
      puVar13[0x24] = 0;
      puVar13[0x25] = puVar13 + 0x25;
      *puVar13 = 3;
      puVar13[6] = 0;
      plVar8 = puVar13 + 1;
      *plVar8 = (long)puVar1;
      *(undefined4 *)(puVar13 + 7) = 0;
      *(undefined4 *)(puVar13 + 0x15) = 0;
      *(undefined1 *)(puVar13 + 0x14) = 0;
      *(undefined4 *)(puVar13 + 0xb) = 0;
      *(undefined4 *)((long)puVar13 + 0x5c) = 0x68;
      puVar13[8] = 0;
      *(undefined4 *)(puVar13 + 0xe) = 0;
      *(undefined4 *)((long)puVar13 + 0x74) = 0x68;
      *(undefined4 *)(puVar13 + 0x11) = 0;
      *(undefined4 *)((long)puVar13 + 0x8c) = 0x68;
      *(undefined4 *)(puVar13 + 0x19) = 0;
      *(undefined4 *)((long)puVar13 + 0xcc) = 0x20;
      puVar13[0x16] = 0;
      *(undefined4 *)(puVar13 + 0x1c) = 0;
      *(undefined4 *)((long)puVar13 + 0xe4) = 0x20;
      *(undefined4 *)(puVar13 + 0x23) = 0;
      *(undefined4 *)(puVar13 + 0x31) = 0;
      *(undefined1 *)(puVar13 + 0x30) = 0;
      puVar13[0x40] = 0;
      *(undefined4 *)(puVar13 + 0x3f) = 0;
      puVar13[0x3a] = 0;
      *(undefined4 *)(puVar13 + 0x4d) = 0;
      puVar13[0x4e] = 0;
      *(undefined1 *)(puVar13 + 0x4c) = 0;
      puVar13[0x4b] = 0;
      puVar13[0x4a] = 0;
      *(undefined4 *)((long)puVar13 + 0x21c) = 0x68;
      *(undefined4 *)((long)puVar13 + 0x234) = 0x68;
      *(undefined4 *)((long)puVar13 + 0x24c) = 0x68;
      *(undefined4 *)((long)puVar13 + 0x28c) = 0x20;
      *(undefined4 *)((long)puVar13 + 0x2a4) = 0x20;
      *(undefined4 *)(puVar13 + 0x43) = 0;
      *(undefined4 *)(puVar13 + 0x46) = 0;
      *(undefined4 *)(puVar13 + 0x49) = 0;
      *(undefined4 *)(puVar13 + 0x51) = 0;
      *(undefined4 *)(puVar13 + 0x54) = 0;
      puVar13[0x34] = puVar13 + 0x33;
      puVar13[0x35] = 0x2000000000;
      puVar13[0x38] = 0x2000000000;
      puVar13[0x39] = puVar1;
      puVar13[0x42] = puVar13 + 0x41;
      puVar13[0x41] = puVar13 + 0x41;
      puVar13[0xc] = puVar13 + 0xc;
      puVar13[0xd] = puVar13 + 0xc;
      puVar13[0x28] = puVar13 + 0x28;
      puVar13[0x29] = puVar13 + 0x28;
      puVar13[0x45] = puVar13 + 0x44;
      puVar13[0x44] = puVar13 + 0x44;
      puVar13[0xf] = puVar13 + 0xf;
      puVar13[0x10] = puVar13 + 0xf;
      puVar13[0x1a] = puVar13 + 0x1a;
      puVar13[0x1b] = puVar13 + 0x1a;
      puVar13[0x2c] = puVar13 + 0x2b;
      puVar13[0x2d] = 0x6800000000;
      puVar13[0x2a] = 0x6800000000;
      puVar13[0x2b] = puVar13 + 0x2b;
      puVar13[0x48] = puVar13 + 0x47;
      puVar13[0x47] = puVar13 + 0x47;
      puVar13[0x32] = 0;
      puVar13[0x33] = puVar13 + 0x33;
      puVar13[0x50] = puVar13 + 0x4f;
      puVar13[0x4f] = puVar13 + 0x4f;
      puVar13[0x36] = puVar13 + 0x36;
      puVar13[0x37] = puVar13 + 0x36;
      puVar13[0x53] = puVar13 + 0x52;
      puVar13[0x52] = puVar13 + 0x52;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar13[0x12] = 0;
      puVar13[0x13] = 0;
      puVar13[0x1d] = puVar1;
      puVar13[0x1e] = 0;
      puVar13[0x1f] = 0;
      puVar13[0x20] = 0;
      puVar13[0x21] = 0;
      puVar13[0x22] = 0;
      puVar13[0x2e] = 0;
      puVar13[0x2f] = 0;
      puVar13[0x3d] = 0;
      puVar13[0x3e] = 0;
      puVar13[0x3b] = 0;
      puVar13[0x3c] = 0;
      *puVar35 = 3;
      *(long **)(puVar35 + 2) = plVar8;
      *(char *)(lVar30 + (long)iVar7 * 0x290 + 0x28c) = (char)iVar7;
LAB_03948b28:
      uVar34 = 0;
      do {
        lVar9 = (long)(int)uVar34;
        if (*(uint *)(param_1 + 0xaf8) <= uVar34) {
          lVar9 = 0;
        }
        puVar25 = (undefined4 *)(*(long *)(param_1 + 0xb00) + lVar9 * 0x38);
        if (*(long *)(puVar25 + 2) != 0) {
          local_90 = *puVar25;
          lVar12 = *(long *)(param_1 + 0xb00) + lVar9 * 0x38;
          local_8c = puVar25[1];
          local_88 = *(undefined8 *)(puVar25 + 2);
          local_80 = *(undefined8 *)(puVar25 + 4);
          lVar9 = 0;
          if (*(char *)(lVar12 + 0x20) != '\0') {
            lVar9 = lVar12 + 0x28;
          }
          FUN_03966cf0(plVar8 + (long)(int)uVar34 * 0x1c,&local_90,lVar9,
                       *(undefined8 *)(lVar12 + 0x18),*(undefined4 *)(param_1 + 0xa50),
                       *(undefined8 *)(param_2 + 10));
        }
        uVar34 = uVar34 + 1;
      } while (uVar32 != uVar34);
    }
    if ((iVar7 != 3) && (lVar9 = *(long *)(param_2 + 6), lVar9 != 0)) {
      plVar8 = *(long **)(param_2 + 10);
      lVar12 = *(long *)PTR_DAT_04bb2698;
      if (lVar12 == 0) {
        plVar14 = malloc(0x38);
      }
      else {
        plVar14 = plVar8;
        if (plVar8 == (long *)0x0) {
          lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar14 = (long *)(lVar12 + 8);
          if (lVar17 != 0) {
            plVar14 = (long *)(lVar17 + 0xa8);
          }
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)0x0;
            goto LAB_03948c30;
          }
        }
        plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x38,8);
      }
LAB_03948c30:
      bVar20 = 0;
      plVar15 = plVar14 + 1;
      *plVar15 = 0;
      plVar14[6] = 0;
      *(undefined2 *)((long)plVar14 + 0x2a) = 0;
      plVar14[4] = 0;
      *(undefined1 *)(plVar14 + 5) = 0;
      *plVar14 = (long)puVar2;
      plVar14[2] = 0;
      plVar14[3] = 0;
      if (plVar8 == (long *)0x0) {
        lVar17 = *(long *)PTR_DAT_04bb2698;
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar13 = (undefined8 *)(lVar17 + 8);
        if (lVar12 != 0) {
          puVar13 = (undefined8 *)(lVar12 + 0xa8);
        }
        plVar8 = (long *)*puVar13;
        bVar20 = *(byte *)(plVar14 + 5);
      }
      plVar14[6] = 0;
      *plVar15 = 0;
      plVar14[2] = 0;
      plVar14[3] = 0;
      plVar14[4] = 0;
      *(byte *)(plVar14 + 5) = bVar20 & 0xfe;
      uVar18 = *(undefined8 *)PTR_DAT_04bd0fa8;
      *(undefined2 *)((long)plVar14 + 0x2a) = 0;
      FUN_038f8590(uVar18,plVar14,plVar8,lVar9,4,0);
      lVar9 = plVar14[3];
      *(undefined2 *)((long)plVar14 + 0x2a) = 0;
      iVar19 = 0;
      if (plVar14[4] != 0) {
        iVar19 = (int)*plVar15 - *(int *)(plVar14[4] + 0x10);
      }
      if (lVar9 == 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = *(undefined4 *)(lVar9 + 0x104);
      }
      lVar12 = lVar30 + (long)iVar7 * 0x290;
      uVar32 = 0;
      if (lVar9 != 0) {
        uVar32 = param_2[6];
      }
      *(int *)(lVar12 + 0x18) = iVar19;
      *(undefined4 *)(lVar12 + 0x1c) = uVar23;
      *(uint *)(lVar12 + 0x30) = uVar32;
      *(undefined4 *)(lVar12 + 0x34) = 0;
      *(long *)(lVar12 + 0x20) = lVar9;
      *(long **)(lVar12 + 0x28) = plVar14;
      *(byte *)(lVar12 + 0x268) = *(byte *)(lVar12 + 0x268) & 0xfc | *(int *)(lVar12 + 0x25c) != 0;
      sVar29 = *(size_t *)(param_2 + 8);
      if (sVar29 != 0) {
        lVar9 = *(long *)PTR_DAT_04bb2698;
        if (lVar9 == 0) {
          pvVar16 = malloc(sVar29);
        }
        else {
          plVar8 = *(long **)(param_2 + 10);
          if (plVar8 == (long *)0x0) {
            lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar8 = (long *)(lVar9 + 8);
            if (lVar17 != 0) {
              plVar8 = (long *)(lVar17 + 0xa8);
            }
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) {
              pvVar16 = (void *)0x0;
              goto LAB_039488b4;
            }
          }
          pvVar16 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,sVar29,8);
        }
LAB_039488b4:
        bVar6 = pvVar16 != (void *)0x0;
        lVar9 = lVar30 + (long)iVar7 * 0x290;
        bVar20 = *(byte *)(lVar12 + 0x268);
        *(void **)(lVar9 + 0x280) = pvVar16;
        uVar32 = param_2[8];
        *(byte *)(lVar12 + 0x268) = bVar20 & 0xf7 | bVar6 << 3;
        pvVar3 = (void *)(lVar9 + 0x50);
        if (bVar6) {
          pvVar3 = pvVar16;
        }
        *(void **)(lVar9 + 0x48) = pvVar3;
        uVar34 = 0x200;
        if (bVar6) {
          uVar34 = uVar32;
        }
        *(uint *)(lVar9 + 600) = uVar34;
        *(undefined4 *)(lVar12 + 0x25c) = 0;
      }
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 4) {
      iVar7 = *(int *)(param_1 + 0xa50);
      if (iVar7 != 0) {
        lVar30 = *(long *)(param_1 + 0xa58);
        iVar19 = 0;
        iVar33 = 0;
        do {
          FUN_038d1270(lVar30 + (long)iVar33 * 0x150 + 0x118,"agl::DTA[%d]",iVar19);
          iVar33 = iVar33 + 1;
          iVar19 = iVar19 + 1;
        } while (iVar7 != iVar33);
      }
      return;
    }
  } while( true );
}

