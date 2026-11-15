
void FUN_01f79130(float param_1,undefined1 param_2 [16],float param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  uint *puVar9;
  long lVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  byte local_54 [4];
  
  lVar10 = *(long *)PTR_DAT_04bc22f8;
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_01f79204:
    if (*pbVar11 < 8) goto LAB_01f7927c;
LAB_01f79210:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01f79274:
      pbVar11 = PTR_DAT_04bb5038;
      goto LAB_01f7927c;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar14 + 0x473);
    pbVar11 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar9 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar9 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar9 & 8) != 0) {
        pbVar11 = (byte *)(lVar14 + 0x471);
      }
    }
    local_54[0] = *pbVar11;
    if (7 < local_54[0]) goto LAB_01f79274;
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01f79204;
      }
      goto LAB_01f79210;
    }
LAB_01f7927c:
    local_54[0] = *pbVar11;
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
  }
  fVar22 = (float)*(int *)(lVar10 + 0x10) * 5.0 + -10.0;
  fVar25 = (float)*(int *)(lVar10 + 0x14) * 5.0 + -10.0;
  fVar23 = (float)*(int *)(lVar10 + 0x20) * 5.0 + 5.0 + 10.0;
  fVar24 = (float)*(int *)(lVar10 + 0x24) * 5.0 + 5.0 + 10.0;
  lVar10 = FUN_0251b3b0(local_54,0);
  if (lVar10 == 0) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = (float)FUN_016e37dc();
    fVar15 = fVar15 + -6.5;
  }
  fVar21 = param_1 - param_1;
  fVar18 = (param_3 - param_3) * (param_3 - param_3);
  fVar20 = SQRT(fVar18 + (fVar22 - param_1) * (fVar22 - param_1));
  fVar17 = SQRT((fVar25 - param_3) * (fVar25 - param_3) + fVar21 * fVar21);
  fVar16 = fVar23 - param_1;
  fVar19 = fVar24 - param_3;
  fVar16 = SQRT(fVar18 + fVar16 * fVar16);
  bVar7 = false;
  if ((fVar20 < fVar17) && (bVar7 = false, !NAN(fVar20) && !NAN(fVar16))) {
    bVar7 = fVar20 < fVar16;
  }
  fVar18 = SQRT(fVar19 * fVar19 + fVar21 * fVar21);
  bVar8 = false;
  if ((bVar7) && (bVar8 = false, !NAN(fVar20) && !NAN(fVar18))) {
    bVar8 = fVar20 < fVar18;
  }
  if (bVar8) {
    puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar1 = *puVar9 ^ *puVar9 << 0xb;
    uVar3 = puVar9[3];
    *puVar9 = puVar9[1];
    puVar9[1] = puVar9[2];
    uVar2 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
    puVar9[2] = uVar3;
    puVar9[3] = uVar2;
    bVar7 = (bool)((byte)((byte)(uVar1 >> 0x18) ^ (byte)(uVar3 >> 0x18) ^ 0xff) >> 7);
    puVar13 = (undefined4 *)PTR_DAT_04bb2ce8;
    if ((int)uVar2 < 0) {
      puVar13 = (undefined4 *)PTR_DAT_04bb2cf0;
    }
  }
  else {
    bVar7 = false;
    if ((fVar17 < fVar16) && (bVar7 = false, !NAN(fVar17) && !NAN(fVar18))) {
      bVar7 = fVar17 < fVar18;
    }
    if (bVar7) {
      bVar7 = *(int *)(param_4 + 0xaf80) == 1;
      puVar12 = (undefined4 *)PTR_DAT_04bb2108;
      puVar13 = (undefined4 *)PTR_DAT_04bb2cf8;
    }
    else {
      if (fVar16 < fVar18) {
        puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar3 = puVar9[3];
        uVar1 = *puVar9 ^ *puVar9 << 0xb;
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        puVar6 = PTR_DAT_04bb2ce8;
        uVar2 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
        puVar9[2] = uVar3;
        puVar9[3] = uVar2;
        bVar7 = (bool)((byte)((byte)(uVar1 >> 0x18) ^ (byte)(uVar3 >> 0x18) ^ 0xff) >> 7);
        puVar13 = (undefined4 *)PTR_DAT_04bb2cf0;
        if ((int)uVar2 < 0) {
          puVar13 = (undefined4 *)puVar6;
        }
        fVar22 = fVar23;
        goto LAB_01f79430;
      }
      bVar7 = *(int *)(param_4 + 0xaf80) == 2;
      puVar12 = (undefined4 *)PTR_DAT_04bb2cf8;
      puVar13 = (undefined4 *)PTR_DAT_04bb2108;
      fVar25 = fVar24;
    }
    if (!bVar7) {
      puVar13 = puVar12;
    }
    fVar22 = param_1;
    param_3 = fVar25;
  }
LAB_01f79430:
  uVar4 = *puVar13;
  *(float *)(param_4 + 0xaf84) = fVar22;
  *(float *)(param_4 + 0xaf88) = fVar15;
  *(float *)(param_4 + 0xaf8c) = param_3;
  *(bool *)(param_4 + 0xafa0) = bVar7;
  *(undefined4 *)(param_4 + 0xaf90) = uVar4;
  return;
}

