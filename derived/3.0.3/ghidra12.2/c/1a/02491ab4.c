
uint FUN_02491ab4(long param_1)

{
  char *pcVar1;
  float *pfVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  short *psVar11;
  ulong uVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_c4;
  float fStack_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined8 local_ac;
  float local_a4;
  float local_a0;
  undefined8 local_9c;
  ulong local_94;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined8 local_88;
  uint local_78;
  undefined4 local_74;
  
  pfVar2 = (float *)PTR_DAT_04bc3038;
  pfVar10 = (float *)(param_1 + 0xeec);
  pcVar1 = (char *)(param_1 + 0x12f8);
  pfVar9 = (float *)PTR_DAT_04bc3038;
  if (*pcVar1 != '\0') {
    pfVar9 = pfVar10;
  }
  fVar20 = SQRT(pfVar9[1] * pfVar9[1] + *pfVar9 * *pfVar9);
  lVar8 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
  if (fVar20 < *pfVar9) {
LAB_02491bb8:
    local_74 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4);
  }
  else {
    lVar8 = FUN_0251e98c(1);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
    fVar16 = *pfVar9;
    lVar8 = FUN_0251e98c(1);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
    fVar16 = (fVar20 - *pfVar9) / (1.0 - fVar16);
    fVar20 = 0.9999;
    if (fVar16 <= 0.9999) {
      fVar20 = fVar16;
    }
    bVar4 = false;
    bVar5 = true;
    bVar6 = false;
    if (0.0 <= fVar16) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar20)) {
        bVar4 = fVar20 < 0.1;
        bVar5 = fVar20 == 0.1;
        bVar6 = false;
      }
    }
    if (bVar5 || bVar4 != bVar6) goto LAB_02491bb8;
    pfVar9 = pfVar2;
    if (*pcVar1 != '\0') {
      pfVar9 = pfVar10;
    }
    FUN_02569464(&local_74,pfVar9);
  }
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  lVar8 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x21a0) + 0xf0))(lVar8 + 0x21a0);
  fVar20 = *pfVar9;
  uVar15 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
  local_78 = uVar15;
  if (*(int *)(param_1 + 0x178) == 0) {
    pfVar9 = pfVar2;
    if (*pcVar1 != '\0') {
      pfVar9 = pfVar10;
    }
    fVar16 = SQRT(pfVar9[1] * pfVar9[1] + *pfVar9 * *pfVar9);
    lVar8 = FUN_0251e98c(1);
    pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
    if (*pfVar9 <= fVar16) {
      lVar8 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
      fVar17 = *pfVar9;
      lVar8 = FUN_0251e98c(1);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x120) + 0xf0))(lVar8 + 0x120);
      fVar17 = (fVar16 - *pfVar9) / (1.0 - fVar17);
      fVar16 = 0.9999;
      if (fVar17 <= 0.9999) {
        fVar16 = fVar17;
      }
      if (((0.0 <= fVar17) && (0.0 < fVar16)) &&
         (local_b8 = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
        local_ac = CONCAT44(local_ac._4_4_,10);
        if (*pcVar1 != '\0') {
          pfVar2 = pfVar10;
        }
        FUN_02569464(&local_78,pfVar2);
        uVar15 = local_78;
      }
    }
  }
  puVar3 = PTR_DAT_04bb2d00;
  lVar8 = *(long *)(param_1 + 0x68);
  fVar21 = 0.0;
  fVar16 = (float)(uVar15 & 0xffffff) * 5.9604645e-08;
  pfVar10 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar15 >> 0x18) * 0x10);
  fVar18 = *pfVar10 + fVar16 * pfVar10[1];
  fVar17 = pfVar10[2] + fVar16 * pfVar10[3];
  fVar19 = fVar18 * 0.0;
  fVar16 = *(float *)(lVar8 + 0x278) + fVar19 * 0.0 + fVar17 * 0.0 + fVar20 * (fVar18 + 0.0);
  local_a4 = *(float *)(lVar8 + 0x280) + (fVar17 * 0.0 * 0.0 - fVar18 * 0.0) + fVar20 * fVar17;
  local_ac = CONCAT44(*(float *)(lVar8 + 0x27c) +
                      (fVar19 * 0.0 + 1.0) * 0.0 + fVar17 * 0.0 * 0.0 + fVar20 * fVar19,fVar16);
  fVar18 = (float)(int)((int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0) & 0xfffffffe) * 5.0 +
           5.0;
  fVar17 = (float)(int)((int)((float)(int)local_a4 / 5.0) - (uint)(local_a4 < 0.0) & 0xfffffffe) *
           5.0 + 5.0;
  fVar20 = (float)FUN_016e026c(0,&local_ac,0,0);
  fVar19 = *(float *)(*(long *)(param_1 + 0x68) + 0x278) - fVar18;
  fVar22 = *(float *)(*(long *)(param_1 + 0x68) + 0x280) - fVar17;
  fVar16 = SQRT(fVar19 * fVar19 + 0.0 + fVar22 * fVar22);
  if (0.0 < fVar16) {
    fVar16 = 1.0 / fVar16;
    fVar19 = fVar19 * fVar16;
    fVar21 = fVar16 * 0.0;
    fVar22 = fVar22 * fVar16;
  }
  local_b8 = fVar18;
  fStack_b4 = fVar20;
  local_b0 = fVar17;
  lVar8 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar8 + 0x21d0) + 0xf0))(lVar8 + 0x21d0);
  fVar16 = *pfVar10;
  local_bc = fVar17 + fVar22 * fVar16;
  local_c4 = fVar18 + fVar19 * fVar16;
  fStack_c0 = fVar20 + fVar21 * fVar16;
  fStack_c0 = (float)FUN_016e026c(0,&local_c4,0,0);
  iVar13 = (int)(fVar20 * 4.0);
  if (0x7ffe < iVar13) {
    iVar13 = 0x7fff;
  }
  if (iVar13 < -0x7fff) {
    iVar13 = -0x8000;
  }
  *(short *)(param_1 + 0x1984) = (short)iVar13;
  *(int *)(param_1 + 0x1980) = (int)(fVar18 * 999.99994);
  *(int *)(param_1 + 0x1986) = (int)(fVar17 * 999.99994);
  psVar11 = (short *)FUN_016e1014(&local_b8,0,0);
  local_ac = CONCAT44(fStack_b4,local_b8);
  local_a0 = 3.0;
  local_94 = 0x414800000000001f;
  local_8a = 1;
  local_8c = 0x101;
  bVar14 = *(byte *)(param_1 + 0x1ee8);
  local_a4 = local_b0;
  *(bool *)(param_1 + 0x199b) = *psVar11 != -2;
  local_9c = CONCAT44(*(undefined4 *)(param_1 + 0x230),(undefined4)local_9c);
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  local_9c = CONCAT71(local_9c._1_7_,bVar14);
  local_88 = 0x1000000000000;
  uVar7 = FUN_0251fad0(&local_ac,0);
  if ((uVar7 & 1) != 0) goto LAB_02492394;
  lVar8 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar8 + 0x210) + 0xf0))(lVar8 + 0x210);
  fVar20 = *pfVar10;
  local_94 = local_94 & 0xffffffff00000000;
  local_9c = 0x773f800000;
  local_ac = CONCAT44(fStack_c0,local_c4);
  local_a4 = local_bc;
  local_a0 = fVar20 * 0.85;
  iVar13 = FUN_016ed290(&local_ac,0,0,0);
  if ((iVar13 == 0) && (uVar12 = FUN_016eafec(fVar20 * 0.85,&local_c4,0,0,0), (uVar12 & 1) == 0)) {
    iVar13 = (int)(fStack_c0 * 4.0);
    if (0x7ffe < iVar13) {
      iVar13 = 0x7fff;
    }
    if (iVar13 < -0x7fff) {
      iVar13 = -0x8000;
    }
    *(short *)(param_1 + 0x198e) = (short)iVar13;
    *(int *)(param_1 + 0x198a) = (int)(local_c4 * 999.99994);
    fVar20 = local_bc;
  }
  else {
    iVar13 = (int)((float)(int)*(short *)(param_1 + 0x18e9) * 0.25 * 4.0);
    if (0x7ffe < iVar13) {
      iVar13 = 0x7fff;
    }
    if (iVar13 < -0x7fff) {
      iVar13 = -0x8000;
    }
    *(short *)(param_1 + 0x198e) = (short)iVar13;
    *(int *)(param_1 + 0x198a) = (int)((float)*(int *)(param_1 + 0x18e5) * 0.001 * 999.99994);
    fVar20 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  }
  *(int *)(param_1 + 0x1990) = (int)(fVar20 * 999.99994);
  uVar12 = FUN_006f0400(local_b8 - local_c4,local_b0 - local_bc);
  fVar20 = (float)(uVar12 & 0xffffffff) * 8.381903e-08;
  fVar16 = (float)uVar15 * 8.381903e-08;
  if (fVar20 <= 360.0) {
    if (fVar20 < 0.0) {
      fVar17 = fVar20 / 360.0 + -1.0;
      goto LAB_02492158;
    }
  }
  else {
    fVar17 = fVar20 / 360.0;
LAB_02492158:
    fVar20 = fVar20 - (float)(int)fVar17 * 360.0;
  }
  if (fVar16 <= 360.0) {
    if (fVar16 < 0.0) {
      fVar17 = fVar16 / 360.0 + -1.0;
      goto LAB_02492194;
    }
  }
  else {
    fVar17 = fVar16 / 360.0;
LAB_02492194:
    fVar16 = fVar16 - (float)(int)fVar17 * 360.0;
  }
  if (fVar20 == fVar16) {
LAB_024922b4:
    *(short *)(param_1 + 0x1994) = (short)(uVar12 >> 0x10);
  }
  else {
    fVar17 = fVar20 - fVar16;
    if (fVar20 <= fVar16) {
      fVar17 = fVar16 - fVar20;
    }
    fVar20 = 360.0 - fVar17;
    if (fVar17 <= 180.0) {
      fVar20 = fVar17;
    }
    if (fVar20 <= 90.0) goto LAB_024922b4;
    lVar8 = *(long *)(param_1 + 0x68);
    *(undefined2 *)(param_1 + 0x1994) = *(undefined2 *)(lVar8 + 0x2b6);
    pfVar10 = (float *)(puVar3 + ((ulong)(*(uint *)(lVar8 + 0x2b4) >> 0x14) & 0xff0));
    fVar20 = (float)(*(uint *)(lVar8 + 0x2b4) & 0xffffff) * 5.9604645e-08;
    fVar16 = *pfVar10 + fVar20 * pfVar10[1];
    fVar20 = pfVar10[2] + fVar20 * pfVar10[3];
    fVar17 = fVar16 * 0.0;
    fVar18 = *(float *)(lVar8 + 0x280);
    iVar13 = (int)((*(float *)(lVar8 + 0x27c) +
                   fVar17 + (fVar17 * 0.0 + 1.0) * 0.0 + fVar20 * 0.0 * 0.0) * 4.0);
    *(int *)(param_1 + 0x1980) =
         (int)((*(float *)(lVar8 + 0x278) + fVar16 + 0.0 + fVar17 * 0.0 + fVar20 * 0.0) * 999.99994)
    ;
    if (0x7ffe < iVar13) {
      iVar13 = 0x7fff;
    }
    if (iVar13 < -0x7fff) {
      iVar13 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar13;
    *(int *)(param_1 + 0x1986) =
         (int)((fVar18 + fVar20 + (fVar20 * 0.0 * 0.0 - fVar16 * 0.0)) * 999.99994);
  }
  *(undefined1 *)(param_1 + 0x199a) = 0;
  *(undefined8 *)(param_1 + 0x740) = 0;
  *(undefined8 *)(param_1 + 0x748) = 0;
  *(undefined8 *)(param_1 + 0x750) = 0;
  *(undefined8 *)(param_1 + 0x758) = 0;
  *(undefined1 *)(param_1 + 0x760) = 0;
  *(undefined2 *)(param_1 + 0x1998) = 0xf;
  *(undefined8 *)(param_1 + 0x72e) = 0;
  *(undefined8 *)(param_1 + 0x728) = 0;
  *(undefined8 *)(param_1 + 0x738) = 0x100000002;
  local_ac = CONCAT44(local_ac._4_4_,0x1b);
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar8 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar8 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar8,0x1b);
LAB_02492394:
  return (uVar7 ^ 0xffffffff) & 1;
}

