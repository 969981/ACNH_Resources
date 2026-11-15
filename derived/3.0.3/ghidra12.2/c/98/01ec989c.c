
void FUN_01ec989c(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined1 *puVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  int local_8c;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  
  puVar2 = PTR_DAT_04bb5ce0;
  puVar9 = PTR_DAT_04bb2720;
  puVar8 = PTR_DAT_04bb2640;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    return;
  }
  if (*(long *)(lVar12 + 0x330) == 0) {
    return;
  }
  puVar11 = (undefined8 *)
            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
  iVar10 = FUN_006bd550(*puVar11,0);
  if (iVar10 != 0x758f7eaf) {
    return;
  }
  lVar12 = *(long *)puVar9;
  if (lVar12 == 0) {
    return;
  }
  if (*(long *)(lVar12 + 0x330) == 0) {
    return;
  }
  if (*(int *)(*(long *)(lVar12 + 0x330) + 0x244) == 0) {
    return;
  }
  lVar16 = *(long *)(param_1[1] + 0x68);
  if (lVar16 == 0) {
    return;
  }
  if (*(long *)PTR_DAT_04bb3968 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0);
  }
  local_88 = *(undefined8 *)(lVar16 + 0x278);
  fVar24 = *(float *)(lVar16 + 0x280);
  local_80 = fVar24;
  if ((lVar22 == 0) || ((*(ushort *)((long)param_1 + 0xaf64) & 1) == 0)) {
    piVar14 = (int *)(lVar16 + 0x2b4);
    fVar23 = (float)local_88;
  }
  else {
    if (*(int *)(lVar22 + 0x1604) == 1) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)puVar8 + 0x18))
                          (*(long **)puVar8,*(undefined4 *)(lVar12 + 0x338));
      iVar10 = FUN_006bd550(*puVar11,0);
      if (iVar10 != 0x758f7eaf) {
        lVar12 = 0;
        goto LAB_01ec9a18;
      }
      lVar12 = 0;
      if (*(long *)puVar9 == 0) goto LAB_01ec9a18;
      lVar16 = *(long *)(*(long *)puVar9 + 0x330);
      lVar12 = 0;
      if (lVar16 == 0) goto LAB_01ec9a18;
      uVar3 = *(uint *)(lVar16 + 0x248);
      lVar12 = lVar22 + 0x10;
      if (uVar3 < 8) {
        lVar12 = lVar12 + (ulong)uVar3 * 0x1c;
      }
    }
    else {
      lVar12 = 7;
LAB_01ec9a18:
      lVar12 = lVar22 + 0x10 + lVar12 * 0x1c;
    }
    lVar16 = lVar22 + 0x10;
    fVar23 = *(float *)(lVar12 + 4);
    local_88 = *(undefined8 *)(lVar12 + 4);
    fVar24 = *(float *)(lVar12 + 0xc);
    local_80 = fVar24;
    if (*(int *)(lVar22 + 0x1604) == 1) {
      lVar12 = *(long *)puVar9;
      uVar13 = 0;
      if (lVar12 == 0) goto LAB_01ec9aa8;
      if (*(long *)(lVar12 + 0x330) == 0) {
LAB_01ec9aa4:
        uVar13 = 0;
        goto LAB_01ec9aa8;
      }
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)puVar8 + 0x18))
                          (*(long **)puVar8,*(undefined4 *)(lVar12 + 0x338));
      iVar10 = FUN_006bd550(*puVar11,0);
      if (iVar10 != 0x758f7eaf) goto LAB_01ec9aa4;
      uVar13 = 0;
      if (*(long *)puVar9 == 0) goto LAB_01ec9aa8;
      lVar12 = *(long *)(*(long *)puVar9 + 0x330);
      uVar13 = 0;
      if (lVar12 == 0) goto LAB_01ec9aa8;
      uVar3 = *(uint *)(lVar12 + 0x248);
      uVar13 = (ulong)uVar3;
      if (uVar3 < 8) goto LAB_01ec9aa8;
    }
    else {
      uVar13 = 7;
LAB_01ec9aa8:
      lVar16 = lVar16 + uVar13 * 0x1c;
    }
    piVar14 = (int *)(lVar16 + 0x10);
  }
  iVar4 = *piVar14;
  uVar3 = iVar4 + 0x20000000U >> 0x1e;
  local_78 = CONCAT44(uVar3,uVar3);
  iVar6 = (int)((float)(int)(fVar23 + -2.5) / 5.0) - (uint)(fVar23 + -2.5 < 0.0);
  iVar7 = (int)((float)(int)(fVar24 + -2.5) / 5.0) - (uint)(fVar24 + -2.5 < 0.0);
  lVar12 = *(long *)puVar2;
  iVar10 = iVar6 + 1;
  iVar1 = iVar7 + 1;
  if (lVar12 == 0) {
    iVar18 = 0;
    iVar17 = 0;
    iVar20 = 0x10;
    iVar19 = 0x10;
  }
  else {
    iVar18 = *(int *)(lVar12 + 0xd88);
    iVar17 = *(int *)(lVar12 + 0xd8c);
    iVar19 = *(int *)(lVar12 + 0xd98);
    iVar20 = *(int *)(lVar12 + 0xd9c);
  }
  iVar21 = iVar18;
  if (iVar19 <= iVar18) {
    iVar21 = iVar19;
  }
  if (iVar18 <= iVar19) {
    iVar18 = iVar19;
  }
  iVar19 = iVar17;
  if (iVar20 <= iVar17) {
    iVar19 = iVar20;
  }
  if (iVar17 <= iVar20) {
    iVar17 = iVar20;
  }
  if (((iVar6 <= iVar18 && iVar21 <= iVar10) && iVar7 <= iVar17) && iVar19 <= iVar1) {
    if (iVar6 < iVar21) {
      iVar20 = 0;
      iVar21 = -1;
    }
    else {
      if ((iVar10 <= iVar18 && iVar19 <= iVar7) && iVar1 <= iVar17) goto LAB_01ec9c18;
      iVar21 = 0;
      iVar20 = 1;
    }
    if (iVar10 <= iVar18) {
      iVar20 = iVar21;
    }
    uVar3 = (uint)(iVar19 <= iVar7);
    if (iVar1 <= iVar17) {
      uVar3 = -(uint)(iVar7 < iVar19);
    }
    local_80 = ((float)(int)(uVar3 + iVar7) * 5.0 + (float)(int)(uVar3 + iVar1) * 5.0 + 5.0) * 0.5;
    local_88 = CONCAT44(local_88._4_4_,
                        ((float)(iVar20 + iVar6) * 5.0 + (float)(iVar20 + iVar10) * 5.0 + 5.0) * 0.5
                       );
  }
LAB_01ec9c18:
  puVar2 = PTR_DAT_04bb5dc0 + 8;
  memcpy(PTR_DAT_04bb5dc0 + 0x2410,puVar2,0x2400);
  memset(puVar2,0,0x2400);
  puVar2 = PTR_DAT_04bbcd38 + 8;
  memcpy(PTR_DAT_04bbcd38 + 0x2410,puVar2,0x2400);
  memset(puVar2,0,0x2400);
  puVar2 = PTR_DAT_04bbcd28 + 8;
  memcpy(PTR_DAT_04bbcd28 + 0x2410,puVar2,0x2400);
  memset(puVar2,0,0x2400);
  puVar2 = PTR_DAT_04bbcec0 + 8;
  memcpy(PTR_DAT_04bbcec0 + 0x2410,puVar2,0x2400);
  memset(puVar2,0,0x2400);
  puVar2 = PTR_DAT_04bbcc38 + 8;
  memcpy(PTR_DAT_04bbcc38 + 0x2410,puVar2,0x2400);
  memset(puVar2,0,0x2400);
  puVar2 = PTR_DAT_04bbcd30 + 8;
  memcpy(PTR_DAT_04bbcd30 + 0x2410,puVar2,0x2400);
  memset(puVar2,0,0x2400);
  puVar2 = PTR_DAT_04bbe200 + 8;
  memcpy(PTR_DAT_04bbe200 + 0x2410,puVar2,0x2400);
  memset(puVar2,0,0x2400);
  puVar2 = PTR_DAT_04bbcc10 + 8;
  memcpy(PTR_DAT_04bbcc10 + 0x2410,puVar2,0x2400);
  memset(puVar2,0,0x2400);
  puVar2 = PTR_DAT_04bbe210 + 8;
  memcpy(PTR_DAT_04bbe210 + 0x2410,puVar2,0x2400);
  memset(puVar2,0,0x2400);
  puVar2 = PTR_DAT_04bbcbf0 + 8;
  memcpy(PTR_DAT_04bbcbf0 + 0x2410,puVar2,0x2400);
  memset(puVar2,0,0x2400);
  if ((int)param_1[0xef6] != 1) {
    (**(code **)(*param_1 + 0x38))(param_1,1,0,0);
  }
  *(undefined4 *)(param_1[1] + 0x750) = 0;
  local_8c = iVar4;
  FUN_01e39778(param_1[1],&local_88,&local_8c,0);
  local_78 = 0;
  FUN_01e5a930(0x40000000,*(undefined8 *)(param_1[1] + 0x3b0),0,PTR_DAT_04bb2150,(long)&local_78 + 4
               ,&local_78,PTR_DAT_04bc1600,6);
  if ((lVar22 == 0) || ((*(ushort *)((long)param_1 + 0xaf64) & 1) == 0)) goto LAB_01ec9f10;
  uVar5 = *(undefined4 *)(param_1[1] + 0x750);
  if (*(int *)(lVar22 + 0x1604) == 1) {
    lVar12 = *(long *)puVar9;
    if ((lVar12 != 0) && (*(long *)(lVar12 + 0x330) != 0)) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)puVar8 + 0x18))
                          (*(long **)puVar8,*(undefined4 *)(lVar12 + 0x338));
      iVar10 = FUN_006bd550(*puVar11,0);
      if ((iVar10 == 0x758f7eaf) &&
         ((*(long *)puVar9 != 0 && (lVar12 = *(long *)(*(long *)puVar9 + 0x330), lVar12 != 0)))) {
        uVar3 = *(uint *)(lVar12 + 0x248);
        puVar15 = (undefined1 *)(lVar22 + 0x10);
        if (uVar3 < 8) {
          puVar15 = puVar15 + (ulong)uVar3 * 0x1c;
        }
        goto LAB_01ec9eec;
      }
    }
    puVar15 = (undefined1 *)(lVar22 + 0x10);
  }
  else {
    puVar15 = (undefined1 *)(lVar22 + 0xd4);
  }
LAB_01ec9eec:
  *(int *)(puVar15 + 0x10) = iVar4;
  *(undefined4 *)(puVar15 + 0x14) = uVar5;
  *puVar15 = 1;
  *(float *)(puVar15 + 4) = (float)local_88;
  *(undefined4 *)(puVar15 + 8) = local_88._4_4_;
  *(float *)(puVar15 + 0xc) = local_80;
LAB_01ec9f10:
  FUN_01734a40(0);
  return;
}

