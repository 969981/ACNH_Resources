
void FUN_0053bfb0(int *param_1,int *param_2,int *param_3,uint param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  byte bVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint local_44;
  
  *param_1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = -0x80000000;
  uVar9 = param_2[4];
  puVar26 = *(undefined4 **)(param_2 + 2);
  uVar23 = *(undefined8 *)PTR_PTR_04bd4d20;
  if ((int)uVar9 < 1) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = -0x80000000;
  }
  else {
    local_44 = uVar9;
    puVar11 = (undefined4 *)FUN_00421ed0(uVar23,4,&local_44);
    param_1[4] = uVar9;
    param_1[5] = local_44;
    uVar4 = uVar9 & 3;
    *(undefined4 **)(param_1 + 2) = puVar11;
    if (2 < uVar9 - 1) {
      iVar16 = uVar4 - uVar9;
      puVar13 = puVar11;
      do {
        *puVar13 = *puVar26;
        puVar13[1] = puVar26[1];
        puVar13[2] = puVar26[2];
        puVar1 = puVar26 + 3;
        puVar11 = puVar13 + 4;
        puVar26 = puVar26 + 4;
        puVar13[3] = *puVar1;
        iVar16 = iVar16 + 4;
        puVar13 = puVar11;
      } while (iVar16 != 0);
    }
    if (uVar4 != 0) {
      iVar16 = -uVar4;
      do {
        iVar16 = iVar16 + 1;
        *puVar11 = *puVar26;
        puVar11 = puVar11 + 1;
        puVar26 = puVar26 + 1;
      } while (iVar16 != 0);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = -0x80000000;
  uVar9 = param_2[8];
  puVar25 = *(undefined8 **)(param_2 + 6);
  if ((int)uVar9 < 1) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = -0x80000000;
  }
  else {
    local_44 = uVar9;
    puVar12 = (undefined8 *)FUN_00421ed0(uVar23,0x40,&local_44);
    param_1[8] = uVar9;
    param_1[9] = local_44;
    uVar4 = uVar9 & 3;
    *(undefined8 **)(param_1 + 6) = puVar12;
    if (2 < uVar9 - 1) {
      iVar16 = uVar4 - uVar9;
      puVar14 = puVar12;
      puVar24 = puVar25;
      do {
        uVar18 = puVar24[1];
        puVar14[3] = puVar24[3];
        uVar19 = puVar24[2];
        *puVar14 = *puVar24;
        puVar14[1] = uVar18;
        puVar14[2] = uVar19;
        uVar19 = puVar24[5];
        puVar14[7] = puVar24[7];
        uVar18 = puVar24[4];
        uVar20 = puVar24[6];
        puVar14[5] = uVar19;
        puVar14[6] = uVar20;
        puVar14[4] = uVar18;
        uVar5 = puVar24[0xd];
        uVar18 = puVar24[0xe];
        uVar6 = puVar24[0xf];
        puVar14[0xc] = puVar24[0xc];
        uVar19 = puVar24[8];
        uVar7 = puVar24[9];
        puVar12 = puVar14 + 0x20;
        uVar20 = puVar24[10];
        uVar8 = puVar24[0xb];
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar18;
        puVar14[0xf] = uVar6;
        puVar25 = puVar24 + 0x20;
        puVar14[10] = uVar20;
        puVar14[0xb] = uVar8;
        iVar16 = iVar16 + 4;
        puVar14[8] = uVar19;
        puVar14[9] = uVar7;
        uVar18 = puVar24[0x10];
        uVar19 = puVar24[0x11];
        uVar20 = puVar24[0x13];
        puVar14[0x12] = puVar24[0x12];
        puVar14[0x13] = uVar20;
        puVar14[0x10] = uVar18;
        puVar14[0x11] = uVar19;
        uVar18 = puVar24[0x14];
        uVar19 = puVar24[0x15];
        uVar20 = puVar24[0x17];
        puVar14[0x16] = puVar24[0x16];
        puVar14[0x17] = uVar20;
        puVar14[0x14] = uVar18;
        puVar14[0x15] = uVar19;
        uVar18 = puVar24[0x18];
        uVar19 = puVar24[0x19];
        uVar20 = puVar24[0x1b];
        puVar14[0x1a] = puVar24[0x1a];
        puVar14[0x1b] = uVar20;
        puVar14[0x18] = uVar18;
        puVar14[0x19] = uVar19;
        uVar18 = puVar24[0x1c];
        uVar19 = puVar24[0x1d];
        uVar20 = puVar24[0x1f];
        puVar14[0x1e] = puVar24[0x1e];
        puVar14[0x1f] = uVar20;
        puVar14[0x1c] = uVar18;
        puVar14[0x1d] = uVar19;
        puVar14 = puVar12;
        puVar24 = puVar25;
      } while (iVar16 != 0);
    }
    if (uVar4 != 0) {
      iVar16 = -uVar4;
      do {
        uVar18 = puVar25[1];
        puVar12[3] = puVar25[3];
        puVar12[1] = uVar18;
        uVar18 = puVar25[5];
        puVar12[7] = puVar25[7];
        puVar12[5] = uVar18;
        uVar18 = *puVar25;
        puVar12[2] = puVar25[2];
        *puVar12 = uVar18;
        uVar18 = puVar25[4];
        puVar12[6] = puVar25[6];
        puVar12[4] = uVar18;
        puVar12 = puVar12 + 8;
        puVar25 = puVar25 + 8;
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0);
    }
  }
  param_1[10] = *param_3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = -0x80000000;
  uVar9 = param_3[4];
  puVar26 = *(undefined4 **)(param_3 + 2);
  if ((int)uVar9 < 1) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = -0x80000000;
  }
  else {
    local_44 = uVar9;
    puVar11 = (undefined4 *)FUN_00421ed0(uVar23,4,&local_44);
    param_1[0xe] = uVar9;
    param_1[0xf] = local_44;
    uVar4 = uVar9 & 3;
    *(undefined4 **)(param_1 + 0xc) = puVar11;
    if (2 < uVar9 - 1) {
      iVar16 = uVar4 - uVar9;
      puVar13 = puVar11;
      do {
        *puVar13 = *puVar26;
        puVar13[1] = puVar26[1];
        puVar13[2] = puVar26[2];
        puVar1 = puVar26 + 3;
        puVar11 = puVar13 + 4;
        puVar26 = puVar26 + 4;
        puVar13[3] = *puVar1;
        iVar16 = iVar16 + 4;
        puVar13 = puVar11;
      } while (iVar16 != 0);
    }
    if (uVar4 != 0) {
      iVar16 = -uVar4;
      do {
        iVar16 = iVar16 + 1;
        *puVar11 = *puVar26;
        puVar11 = puVar11 + 1;
        puVar26 = puVar26 + 1;
      } while (iVar16 != 0);
    }
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = -0x80000000;
  uVar9 = param_3[8];
  puVar25 = *(undefined8 **)(param_3 + 6);
  if ((int)uVar9 < 1) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = -0x80000000;
  }
  else {
    local_44 = uVar9;
    puVar12 = (undefined8 *)FUN_00421ed0(uVar23,0x40,&local_44);
    param_1[0x12] = uVar9;
    param_1[0x13] = local_44;
    uVar4 = uVar9 & 3;
    *(undefined8 **)(param_1 + 0x10) = puVar12;
    if (2 < uVar9 - 1) {
      iVar16 = uVar4 - uVar9;
      puVar14 = puVar12;
      puVar24 = puVar25;
      do {
        uVar23 = puVar24[1];
        puVar14[3] = puVar24[3];
        uVar18 = puVar24[2];
        *puVar14 = *puVar24;
        puVar14[1] = uVar23;
        puVar14[2] = uVar18;
        uVar18 = puVar24[5];
        puVar14[7] = puVar24[7];
        uVar23 = puVar24[4];
        uVar19 = puVar24[6];
        puVar14[5] = uVar18;
        puVar14[6] = uVar19;
        puVar14[4] = uVar23;
        uVar20 = puVar24[0xd];
        uVar23 = puVar24[0xe];
        uVar5 = puVar24[0xf];
        puVar14[0xc] = puVar24[0xc];
        uVar18 = puVar24[8];
        uVar6 = puVar24[9];
        puVar12 = puVar14 + 0x20;
        uVar19 = puVar24[10];
        uVar7 = puVar24[0xb];
        puVar14[0xd] = uVar20;
        puVar14[0xe] = uVar23;
        puVar14[0xf] = uVar5;
        puVar25 = puVar24 + 0x20;
        puVar14[10] = uVar19;
        puVar14[0xb] = uVar7;
        iVar16 = iVar16 + 4;
        puVar14[8] = uVar18;
        puVar14[9] = uVar6;
        uVar23 = puVar24[0x10];
        uVar18 = puVar24[0x11];
        uVar19 = puVar24[0x13];
        puVar14[0x12] = puVar24[0x12];
        puVar14[0x13] = uVar19;
        puVar14[0x10] = uVar23;
        puVar14[0x11] = uVar18;
        uVar23 = puVar24[0x14];
        uVar18 = puVar24[0x15];
        uVar19 = puVar24[0x17];
        puVar14[0x16] = puVar24[0x16];
        puVar14[0x17] = uVar19;
        puVar14[0x14] = uVar23;
        puVar14[0x15] = uVar18;
        uVar23 = puVar24[0x18];
        uVar18 = puVar24[0x19];
        uVar19 = puVar24[0x1b];
        puVar14[0x1a] = puVar24[0x1a];
        puVar14[0x1b] = uVar19;
        puVar14[0x18] = uVar23;
        puVar14[0x19] = uVar18;
        uVar23 = puVar24[0x1c];
        uVar18 = puVar24[0x1d];
        uVar19 = puVar24[0x1f];
        puVar14[0x1e] = puVar24[0x1e];
        puVar14[0x1f] = uVar19;
        puVar14[0x1c] = uVar23;
        puVar14[0x1d] = uVar18;
        puVar14 = puVar12;
        puVar24 = puVar25;
      } while (iVar16 != 0);
    }
    if (uVar4 != 0) {
      iVar16 = -uVar4;
      do {
        uVar23 = puVar25[1];
        puVar12[3] = puVar25[3];
        puVar12[1] = uVar23;
        uVar23 = puVar25[5];
        puVar12[7] = puVar25[7];
        puVar12[5] = uVar23;
        uVar23 = *puVar25;
        puVar12[2] = puVar25[2];
        *puVar12 = uVar23;
        uVar23 = puVar25[4];
        puVar12[6] = puVar25[6];
        puVar12[4] = uVar23;
        puVar12 = puVar12 + 8;
        puVar25 = puVar25 + 8;
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0);
    }
  }
  bVar15 = 8;
  if ((param_4 & 1) == 0) {
    bVar15 = 0;
  }
  uVar9 = param_1[4];
  bVar15 = bVar15 | *param_1 != param_1[10];
  if (uVar9 == param_1[0xe]) {
    if (0 < (int)uVar9) {
      lVar21 = 0;
      if (uVar9 != 1) {
        do {
          lVar22 = lVar21 * 4;
          lVar21 = lVar21 + 2;
          piVar2 = (int *)(*(long *)(param_1 + 2) + lVar22);
          piVar3 = (int *)(*(long *)(param_1 + 0xc) + lVar22);
          if (*piVar2 != *piVar3 || piVar2[1] != piVar3[1]) {
            bVar15 = bVar15 | 2;
          }
        } while ((ulong)uVar9 - ((ulong)uVar9 & 1) != lVar21);
      }
      if ((uVar9 & 1) != 0) {
        if (*(int *)(*(long *)(param_1 + 2) + lVar21 * 4) !=
            *(int *)(*(long *)(param_1 + 0xc) + lVar21 * 4)) {
          bVar15 = bVar15 | 2;
        }
      }
    }
    uVar9 = param_1[8];
    if (uVar9 != param_1[0x12]) goto LAB_0053c55c;
  }
  else {
    bVar15 = bVar15 | 2;
    uVar9 = param_1[8];
    if (uVar9 != param_1[0x12]) {
LAB_0053c55c:
      bVar15 = bVar15 | 4;
      goto LAB_0053c560;
    }
  }
  uVar17 = (ulong)uVar9;
  if (0 < (int)uVar9) {
    puVar25 = (undefined8 *)(*(long *)(param_1 + 6) + 0x20);
    puVar12 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
    do {
      auVar28._0_4_ = ABS(*(float *)(puVar25 + -2) - (float)puVar12[-2]);
      auVar28._4_4_ = ABS(*(float *)((long)puVar25 + -0xc) - (float)((ulong)puVar12[-2] >> 0x20));
      auVar28._8_4_ = ABS(*(float *)(puVar25 + -1) - (float)puVar12[-1]);
      auVar28._12_4_ = ABS(*(float *)((long)puVar25 + -4) - (float)((ulong)puVar12[-1] >> 0x20));
      auVar27._0_4_ = ABS(*(float *)(puVar25 + -4) - (float)puVar12[-4]);
      auVar27._4_4_ = ABS(*(float *)((long)puVar25 + -0x1c) - (float)((ulong)puVar12[-4] >> 0x20));
      auVar27._8_4_ = ABS(*(float *)(puVar25 + -3) - (float)puVar12[-3]);
      auVar27._12_4_ = ABS(*(float *)((long)puVar25 + -0x14) - (float)((ulong)puVar12[-3] >> 0x20));
      auVar27 = NEON_fmax(auVar27,auVar28,4);
      auVar29._4_4_ = ABS((float)((ulong)*puVar25 >> 0x20) - (float)((ulong)*puVar12 >> 0x20));
      auVar29._0_4_ = ABS((float)*puVar25 - (float)*puVar12);
      auVar29._8_4_ = ABS((float)puVar25[1] - (float)puVar12[1]);
      auVar29._12_4_ = ABS((float)((ulong)puVar25[1] >> 0x20) - (float)((ulong)puVar12[1] >> 0x20));
      auVar10._4_4_ = ABS((float)((ulong)puVar25[2] >> 0x20) - (float)((ulong)puVar12[2] >> 0x20));
      auVar10._0_4_ = ABS((float)puVar25[2] - (float)puVar12[2]);
      auVar10._8_4_ = ABS((float)puVar25[3] - (float)puVar12[3]);
      auVar10._12_4_ = ABS((float)((ulong)puVar25[3] >> 0x20) - (float)((ulong)puVar12[3] >> 0x20));
      auVar29 = NEON_fmax(auVar29,auVar10,4);
      auVar29 = NEON_fmax(auVar27,auVar29,4);
      if (auVar29._12_4_ <= 1.1920929e-07 &&
          (auVar29._8_4_ <= 1.1920929e-07 &&
          (auVar29._0_4_ <= 1.1920929e-07 && auVar29._4_4_ <= 1.1920929e-07))) {
        bVar15 = bVar15 | 4;
      }
      uVar17 = uVar17 - 1;
      puVar25 = puVar25 + 8;
      puVar12 = puVar12 + 8;
    } while (uVar17 != 0);
  }
LAB_0053c560:
  *(byte *)(param_1 + 0x14) = bVar15;
  return;
}

