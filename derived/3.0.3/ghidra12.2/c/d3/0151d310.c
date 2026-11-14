
undefined1 FUN_0151d310(float *param_1,undefined4 *param_2,long param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *__s;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;
  ushort uVar13;
  int *piVar14;
  uint *puVar15;
  float fVar16;
  long lVar17;
  long lVar18;
  char cVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint *local_98;
  
  puVar7 = PTR_DAT_04bb43c0;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(param_2);
  lVar17 = *(long *)puVar7;
  if (lVar17 == 0) {
    return 0;
  }
  lVar18 = *(long *)(lVar18 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
  if (*(uint *)(lVar18 + 0x1d8) <= uVar8) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) == 0) {
    return 0;
  }
  local_98 = (uint *)0x0;
  local_a0 = *param_2;
  uStack_9c = param_2[1];
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  uVar8 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar7 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar17 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(param_2);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
         (puVar11 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8),
         puVar11 != (uint *)0x0)) {
        uVar13 = 0;
        uVar8 = *puVar11;
        local_98 = puVar11;
        if ((uVar8 == 0) || (puVar11 == (uint *)(ulong)uVar8)) goto LAB_0151d4bc;
        puVar15 = (uint *)((long)puVar11 - (long)(ulong)uVar8);
        uVar13 = 0;
        if (*puVar15 == 0) goto LAB_0151d4bc;
        uVar8 = puVar15[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar17 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar17 != 0) {
            uVar6 = 0;
            if ((ulong)uVar8 != 0) {
              uVar6 = (uint)((ulong)((long)puVar11 - lVar17) / (ulong)uVar8);
            }
            if (*puVar15 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar6 * 2),
               uVar13 < 0x52)) goto LAB_0151d4bc;
          }
        }
      }
    }
  }
  uVar13 = 0;
LAB_0151d4bc:
  if ((uVar13 & 0xfffe) != 10) {
    return 0;
  }
  local_c0 = 0;
  local_d0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_c8 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = 0;
  local_b8 = puStack_c8;
  FUN_01afb480(&local_a8,&local_d0);
  iVar2 = (int)local_c0 + *(int *)(param_3 + 8);
  iVar3 = (int)local_b0 + *(int *)(param_3 + 8);
  iVar4 = local_c0._4_4_ + *(int *)(param_3 + 0xc);
  iVar5 = local_b0._4_4_ + *(int *)(param_3 + 0xc);
  local_c0 = CONCAT44(iVar4,iVar2);
  local_b0 = CONCAT44(iVar5,iVar3);
  iVar9 = FUN_01ae98d0(&local_a8);
  iVar10 = FUN_01aee3b4(&local_a8);
  puVar7 = PTR_DAT_04bb2d00;
  fVar21 = 0.0;
  fVar20 = 0.0;
  if (iVar10 == 2) {
    iVar10 = FUN_01ae98d0(&local_a8);
    uVar12 = (ulong)((float)iVar10 * 90.0 * 11930465.0);
    pfVar1 = (float *)(puVar7 + (uVar12 >> 0x18 & 0xff) * 0x10);
    fVar20 = (float)((uint)uVar12 & 0xffffff) * 5.9604645e-08;
    fVar21 = (*pfVar1 + fVar20 * pfVar1[1]) * 5.0;
    fVar20 = (pfVar1[2] + fVar20 * pfVar1[3]) * 5.0;
  }
  fVar21 = ((float)iVar2 * 5.0 + (float)iVar3 * 5.0 + 5.0) * 0.5 + fVar21;
  fVar20 = ((float)iVar4 * 5.0 + (float)iVar5 * 5.0 + 5.0) * 0.5 + fVar20;
  fVar24 = fVar21 + -2.5;
  fVar21 = fVar21 + 2.5;
  fVar23 = fVar20 + -2.5;
  fVar20 = fVar20 + 2.5;
  uVar12 = (ulong)((float)((int)(long)((float)iVar9 * 90.0 * 11930465.0) + 0x60000000U >> 0x1e) *
                   90.0 * 11930465.0);
  fVar16 = (float)uVar12;
  pfVar1 = (float *)(puVar7 + (uVar12 >> 0x19 & 0x7f) * 0x10);
  fVar25 = (float)((uint)fVar16 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar22 = *pfVar1 + fVar25 * pfVar1[1];
  iVar3 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
  fVar24 = pfVar1[2] + fVar25 * pfVar1[3];
  iVar4 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  iVar5 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  fVar21 = fVar22 * 0.0;
  iVar9 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  iVar2 = iVar3;
  if (iVar5 <= iVar3) {
    iVar2 = iVar5;
  }
  if (iVar3 <= iVar5) {
    iVar3 = iVar5;
  }
  iVar5 = iVar4;
  if (iVar4 <= iVar9) {
    iVar5 = iVar9;
  }
  if (iVar9 <= iVar4) {
    iVar4 = iVar9;
  }
  fVar25 = fVar22 * (fVar22 + fVar22);
  fVar23 = (fVar22 + fVar22) * fVar21;
  fVar24 = fVar24 + fVar24;
  fVar26 = fVar21 * (fVar21 + fVar21);
  fVar20 = fVar21 * fVar24;
  fVar24 = fVar22 * fVar24;
  fVar22 = fVar22 * (fVar21 + fVar21);
  local_dc = ((float)iVar2 * 5.0 + (float)iVar3 * 5.0 + 5.0) * 0.5 + 0.0 +
             (fVar22 - fVar20) * 0.0 + ((1.0 - fVar25) - fVar26) * 0.0 + (fVar26 + fVar24) * 2.1875;
  local_d4 = ((float)iVar4 * 5.0 + (float)iVar5 * 5.0 + 5.0) * 0.5 + 0.0 +
             (fVar23 + fVar20) * 0.0 + (fVar26 - fVar24) * 0.0 + ((1.0 - fVar26) - fVar25) * 2.1875;
  local_d8 = ((1.0 - fVar26) - fVar26) * 0.0 + (fVar22 + fVar20) * 0.0 + (fVar23 - fVar20) * 2.1875
             + 0.0;
  lVar17 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar17 == 0) || (*(long *)(lVar17 + 0xa8) == 0)) || (*(char *)(lVar17 + 0x11c8) != '\0')) {
    fVar21 = -500.0;
  }
  else {
    fVar21 = (float)FUN_0093a950(lVar17 + 0x28,&local_dc,0);
  }
  puVar11 = local_98;
  fVar20 = 0.0;
  *param_1 = local_dc;
  param_1[1] = local_d8;
  param_1[2] = local_d4;
  param_1[4] = fVar16;
  __s = PTR_DAT_04bbfe90;
  puVar7 = PTR_DAT_04bbfe88;
  if ((local_98 == (uint *)0x0) || (uVar8 = *local_98, uVar8 == 0)) {
LAB_0151d978:
    param_1[3] = fVar21 + fVar20;
    return 1;
  }
  cVar19 = *PTR_DAT_04bbfe88;
  do {
    if (cVar19 == '\0') {
      cVar19 = '\x01';
      *puVar7 = 1;
      memset(__s,0xff,0x1ac);
      uVar8 = *puVar11;
    }
    else {
      uVar6 = *(uint *)(__s + 0xf0);
      if (-1 < (int)uVar6) {
        if ((float *)((ulong)uVar6 + (long)puVar11) != (float *)0x0) {
          fVar20 = *(float *)((ulong)uVar6 + (long)puVar11);
        }
        goto LAB_0151d978;
      }
      if (uVar6 != 0xffffffff) goto LAB_0151d978;
    }
    puVar15 = (uint *)(ulong)uVar8;
    if ((puVar15 == (uint *)0x0) || (puVar11 == puVar15)) goto LAB_0151d978;
    lVar17 = 0xc;
    if (*(char *)((long)puVar11 + (10 - (long)puVar15)) != '\0') {
      lVar17 = 0x1c;
    }
    lVar17 = (long)puVar11 + (lVar17 - (long)puVar15);
    if (lVar17 == 0) goto LAB_0151d978;
    uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar15));
    *(undefined4 *)(__s + 0xf0) = 0xfffffffe;
    if (uVar12 == 0) goto LAB_0151d978;
    piVar14 = (int *)(lVar17 + 4);
    while (piVar14[-1] != -0x499d99d4) {
      piVar14 = piVar14 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) goto LAB_0151d978;
    }
    iVar2 = 0;
    if (*piVar14 != -1) {
      iVar2 = *piVar14;
    }
    *(int *)(__s + 0xf0) = iVar2;
    uVar8 = *puVar11;
    if (uVar8 == 0) goto LAB_0151d978;
  } while( true );
}

