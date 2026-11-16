
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029acd5c(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  undefined8 *puVar13;
  long lVar14;
  ushort *puVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  undefined8 local_80;
  int local_78;
  
  iVar28 = param_2[10];
  fVar29 = (float)param_2[0xb];
  iVar26 = param_2[8];
  iVar27 = param_2[9];
  iVar6 = param_2[4];
  iVar2 = *param_2;
  iVar4 = param_2[1];
  puVar13 = *(undefined8 **)(param_2 + 6);
  iVar3 = param_2[2];
  iVar5 = param_2[3];
  uVar9 = *(undefined8 *)(param_2 + 2);
  *(int *)(param_1 + 0x14) = iVar4;
  *(bool *)(param_1 + 0x11) = 500.0 < fVar29;
  uVar17 = _DAT_04102200;
  if (puVar13 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = _UNK_04102208;
    *(undefined8 *)(param_1 + 0x18) = uVar17;
    uVar17 = _DAT_04102880;
    *(undefined8 *)(param_1 + 0x30) = _UNK_04102888;
    *(undefined8 *)(param_1 + 0x28) = uVar17;
    uVar17 = _DAT_041023d0;
    uVar21 = _UNK_041023d8;
LAB_029acea4:
    *(undefined8 *)(param_1 + 0x40) = uVar21;
    *(undefined8 *)(param_1 + 0x38) = uVar17;
  }
  else {
    fVar19 = *(float *)(param_1 + 0x44);
    fVar18 = *(float *)(param_1 + 0x34);
    fVar22 = *(float *)((long)puVar13 + 0x1c);
    fVar16 = *(float *)(param_1 + 0x24);
    fVar20 = *(float *)((long)puVar13 + 0xc);
    bVar11 = false;
    if ((fVar19 == *(float *)((long)puVar13 + 0x2c)) &&
       (bVar11 = false, !NAN(fVar18) && !NAN(fVar22))) {
      bVar11 = fVar18 == fVar22;
    }
    bVar12 = false;
    if ((bVar11) && (bVar12 = false, !NAN(fVar16) && !NAN(fVar20))) {
      bVar12 = fVar16 == fVar20;
    }
    if (bVar12 || *(char *)(param_1 + 0x10) == '\0') {
LAB_029ace6c:
      uVar17 = *puVar13;
      *(undefined8 *)(param_1 + 0x20) = puVar13[1];
      *(undefined8 *)(param_1 + 0x18) = uVar17;
      uVar17 = puVar13[2];
      *(undefined8 *)(param_1 + 0x30) = puVar13[3];
      *(undefined8 *)(param_1 + 0x28) = uVar17;
      uVar17 = puVar13[4];
      uVar21 = puVar13[5];
      goto LAB_029acea4;
    }
    fVar20 = fVar20 - fVar16;
    fVar22 = fVar22 - fVar18;
    fVar23 = *(float *)((long)puVar13 + 0x2c) - fVar19;
    fVar24 = SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar23 * fVar23);
    if (0.0 < fVar24) {
      fVar25 = 1.0 / fVar24;
      fVar20 = fVar20 * fVar25;
      fVar22 = fVar22 * fVar25;
      fVar23 = fVar23 * fVar25;
    }
    if (fVar24 <= 3.0) goto LAB_029ace6c;
    uVar17 = *puVar13;
    *(undefined8 *)(param_1 + 0x20) = puVar13[1];
    *(undefined8 *)(param_1 + 0x18) = uVar17;
    uVar17 = puVar13[2];
    *(undefined8 *)(param_1 + 0x30) = puVar13[3];
    *(undefined8 *)(param_1 + 0x28) = uVar17;
    uVar21 = puVar13[5];
    uVar17 = puVar13[4];
    *(float *)(param_1 + 0x24) = fVar16 + fVar20 * 3.0;
    *(float *)(param_1 + 0x34) = fVar18 + fVar22 * 3.0;
    *(undefined8 *)(param_1 + 0x40) = uVar21;
    *(undefined8 *)(param_1 + 0x38) = uVar17;
    *(float *)(param_1 + 0x44) = fVar19 + fVar23 * 3.0;
  }
  puVar10 = PTR_DAT_04bb26a8;
  local_80 = *(undefined8 *)(param_1 + 0x48);
  local_78 = *(int *)(param_1 + 0x50);
  if ((((int)local_80 == -1) &&
      (local_80._4_4_ = (int)((ulong)local_80 >> 0x20), bVar11 = local_80._4_4_ == -1, bVar11)) &&
     (local_78 == -1)) {
    local_80 = uVar9;
    local_78 = iVar6;
  }
  lVar14 = *(long *)PTR_DAT_04bb26a8;
  iVar7 = *(int *)(lVar14 + 0x7c0);
  if (iVar2 == 4) {
    if (iVar7 == -1) {
LAB_029acf14:
      *(int *)(param_1 + 0x48) = iVar3;
      *(int *)(param_1 + 0x4c) = iVar5;
      *(int *)(param_1 + 0x50) = iVar6;
    }
    else {
      if (iVar7 == 0) {
        lVar14 = FUN_0299a520(lVar14 + 0x7c8,&local_80,4);
        if (lVar14 == 0) goto LAB_029acf14;
LAB_029acf40:
        puVar15 = (ushort *)(lVar14 + 0x88);
      }
      else {
        uVar8 = iVar7 - 1;
        if (*(uint *)(lVar14 + 0x2e70) <= uVar8) {
          uVar8 = 0;
        }
        puVar15 = (ushort *)(*(long *)(lVar14 + 0x2e78) + (long)(int)uVar8 * 0x228 + 0x1b8);
      }
LAB_029acf98:
      *(int *)(puVar15 + 0xc) = iVar4;
      *(int *)(puVar15 + 0x12) = iVar27;
      *(int *)(puVar15 + 0x14) = iVar28;
      *(float *)(puVar15 + 0xe) = fVar29;
      *(int *)(puVar15 + 0x10) = iVar26;
      *(int *)(puVar15 + 0x16) = iVar3;
      *(int *)(puVar15 + 0x18) = iVar5;
      *(int *)(puVar15 + 0x1a) = iVar6;
      *puVar15 = *puVar15 | 0xf0;
      *(int *)(param_1 + 0x48) = iVar3;
      *(int *)(param_1 + 0x4c) = iVar5;
      *(int *)(param_1 + 0x50) = iVar6;
      if (iVar2 != 4) goto LAB_029acff4;
    }
    lVar14 = *(long *)puVar10;
    iVar3 = *(int *)(lVar14 + 0x7c0);
    if (iVar3 == -1) goto LAB_029ad024;
    if (iVar3 != 0) {
      uVar8 = iVar3 - 1;
      if (*(uint *)(lVar14 + 0x2e70) <= uVar8) {
        uVar8 = 0;
      }
      lVar14 = *(long *)(lVar14 + 0x2e78) + (long)(int)uVar8 * 0x228 + 0x138;
      goto LAB_029ad070;
    }
    lVar14 = FUN_0299a520(lVar14 + 0x7c8,&local_80,4);
  }
  else {
    if (iVar7 != -1) {
      if (iVar7 != 0) {
        uVar8 = iVar7 - 1;
        if (*(uint *)(lVar14 + 0x2e70) <= uVar8) {
          uVar8 = 0;
        }
        puVar15 = (ushort *)(*(long *)(lVar14 + 0x2e78) + (long)(int)uVar8 * 0x228 + 0xb8);
        goto LAB_029acf98;
      }
      lVar14 = FUN_0299a520(lVar14 + 0x7c8,&local_80,2);
      if (lVar14 != 0) goto LAB_029acf40;
    }
    *(int *)(param_1 + 0x48) = iVar3;
    *(int *)(param_1 + 0x4c) = iVar5;
    *(int *)(param_1 + 0x50) = iVar6;
LAB_029acff4:
    lVar14 = *(long *)puVar10;
    iVar3 = *(int *)(lVar14 + 0x7c0);
    if (iVar3 == -1) goto LAB_029ad024;
    if (iVar3 != 0) {
      uVar8 = iVar3 - 1;
      if (*(uint *)(lVar14 + 0x2e70) <= uVar8) {
        uVar8 = 0;
      }
      lVar14 = *(long *)(lVar14 + 0x2e78) + (long)(int)uVar8 * 0x228 + 0x38;
      goto LAB_029ad070;
    }
    lVar14 = FUN_0299a520(lVar14 + 0x7c8,&local_80,2);
  }
  if (lVar14 != 0) {
    lVar14 = lVar14 + 8;
LAB_029ad070:
    iVar4 = *(int *)(lVar14 + 4);
    iVar3 = 0;
    if (iVar4 != 99999 && -1 < iVar4) {
      iVar3 = iVar4;
    }
    piVar1 = (int *)(*(long *)puVar10 + 0xb3820);
    if (iVar2 != 4) {
      piVar1 = (int *)(*(long *)puVar10 + 0xb381c);
    }
    *(bool *)(param_1 + 0x10) = iVar3 == *piVar1;
    return;
  }
LAB_029ad024:
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}

