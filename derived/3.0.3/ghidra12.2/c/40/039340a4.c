
void FUN_039340a4(long param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  
  lVar13 = DAT_05ae9310;
  cVar3 = *(char *)(param_1 + 0x18);
  fVar20 = *(float *)(param_1 + 0x238);
  if (cVar3 == '\0' || *(byte *)(param_1 + 0x58) == 0) {
    bVar7 = false;
    if ((cVar3 != '\0') && (0.0 < fVar20)) goto LAB_039340cc;
LAB_039340ec:
    iVar14 = 0;
  }
  else {
    bVar7 = 0.0 < fVar20;
    if (fVar20 <= 0.0) goto LAB_039340ec;
LAB_039340cc:
    iVar14 = 1;
    if (bVar7) {
      iVar14 = 2;
    }
  }
  bVar4 = *(byte *)(param_1 + 0x98);
  iVar15 = 0;
  if ((((((bVar4 != 0) && (0.0 < fVar20)) && (iVar15 = 1, *(char *)(param_1 + 0x78) != '\0')) &&
       ((*(char *)(param_1 + 0xb8) == '\0' && (*(int *)(param_1 + 0x380) == 0)))) &&
      ((0.0 < fVar20 &&
       ((iVar15 = 3, *(float *)(param_1 + 0x3a0) == 0.0 && (*(float *)(param_1 + 0x3a4) == 0.0))))))
     && (iVar15 = 2, *(float *)(param_1 + 0x3a8) != 0.0)) {
    iVar15 = 3;
  }
  bVar5 = *(byte *)(param_1 + 0x38);
  if (bVar5 == 0) {
LAB_039341fc:
    iVar16 = 0;
  }
  else {
    if (fVar20 <= 0.0) {
      iVar16 = 0;
      if ((*(char *)(param_1 + 0x118) == '\0') || (*(long *)(param_1 + 0x548) == 0))
      goto LAB_03934200;
      uVar11 = 0;
      if (fVar20 != (float)(int)fVar20) {
        uVar11 = (uint)(fVar20 < 0.0);
      }
      if ((int)fVar20 != uVar11 && *(char *)(param_1 + 0x198) == '\0') goto LAB_039341fc;
    }
    iVar16 = 1;
    if (*(char *)(param_1 + 0x178) != '\0') {
      iVar16 = 2;
    }
    if (*(char *)(param_1 + 0xd8) != '\0') {
      iVar12 = iVar16 + 2;
      if (*(float *)(param_1 + 0x298) == 1.0) {
        iVar12 = iVar16;
      }
      bVar7 = false;
      if ((*(float *)(param_1 + 0x4d0) == 1.0) && (bVar7 = false, !NAN(*(float *)(param_1 + 0x4cc)))
         ) {
        bVar7 = *(float *)(param_1 + 0x4cc) == 1.0;
      }
      bVar8 = false;
      if ((bVar7) && (bVar8 = false, !NAN(*(float *)(param_1 + 0x4c8)))) {
        bVar8 = *(float *)(param_1 + 0x4c8) == 1.0;
      }
      iVar16 = iVar12 + 4;
      if (bVar8) {
        iVar16 = iVar12;
      }
    }
  }
LAB_03934200:
  if (*(uint *)(DAT_05ae9310 + 8) < 0x45) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(*(long *)(DAT_05ae9310 + 0x10) + 0x220);
  }
  lVar18 = *(long *)(lVar17 + 8);
  uVar11 = (uint)*(ushort *)(*(long *)(lVar18 + 0x38) + 0x30);
  if (*(char *)(param_1 + 0x580) == '\0') {
    bVar7 = false;
joined_r0x03934294:
    if (uVar11 == 0) goto LAB_039342cc;
LAB_03934298:
    uVar11 = (uVar11 << bVar7) - 1;
    if (*(uint *)(lVar18 + 0x20) <= uVar11) {
      uVar11 = 0;
    }
    lVar18 = *(long *)(lVar18 + 0x28) + (ulong)uVar11 * 0x150;
  }
  else {
    bVar7 = true;
    if (((bVar5 == 0) || (*(char *)(param_1 + 0x118) == '\0')) || (*(long *)(param_1 + 0x548) == 0))
    goto joined_r0x03934294;
    uVar9 = 0;
    if (fVar20 != (float)(int)fVar20) {
      uVar9 = (uint)(fVar20 < 0.0);
    }
    if ((int)fVar20 != uVar9) {
      bVar7 = *(char *)(param_1 + 0x198) == '\0';
      goto joined_r0x03934294;
    }
    bVar7 = false;
    if (uVar11 != 0) goto LAB_03934298;
LAB_039342cc:
    lVar18 = *(long *)(lVar18 + 0x18);
  }
  *(long *)(param_1 + 0x4d8) = lVar18;
  lVar17 = *(long *)(lVar17 + 8);
  uVar6 = *(ushort *)(*(long *)(lVar17 + 0x38) + 0x30);
  if (uVar6 == 0) {
    lVar17 = *(long *)(lVar17 + 0x18);
  }
  else {
    uVar11 = ((uint)uVar6 + (uint)uVar6 * 2) - 1;
    if (*(uint *)(lVar17 + 0x20) <= uVar11) {
      uVar11 = 0;
    }
    lVar17 = *(long *)(lVar17 + 0x28) + (ulong)uVar11 * 0x150;
  }
  *(long *)(param_1 + 0x4f0) = lVar17;
  if (*(uint *)(lVar13 + 8) < 0x46) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar13 + 0x10) + 0x228);
  }
  lVar18 = *(long *)(lVar17 + 8);
  lVar10 = *(long *)(lVar18 + 0x38);
  uVar11 = 0;
  if (iVar16 != 0) {
    uVar11 = (uint)*(ushort *)(lVar10 + 0x30);
  }
  lVar19 = 0x70;
  if (*(uint *)(lVar18 + 0x30) < 3) {
    lVar19 = 0;
  }
  uVar9 = 0;
  if (iVar15 != 0) {
    uVar9 = (uint)*(ushort *)(lVar10 + lVar19 + 0x30);
  }
  iVar12 = uVar11 + iVar14 * (uint)*(ushort *)
                                    (lVar10 + (ulong)(1 < *(uint *)(lVar18 + 0x30)) * 0x38 + 0x30) +
           uVar9;
  if (iVar12 == 0) {
    lVar18 = *(long *)(lVar18 + 0x18);
  }
  else {
    uVar11 = iVar12 - 1;
    if (*(uint *)(lVar18 + 0x20) <= uVar11) {
      uVar11 = 0;
    }
    lVar18 = *(long *)(lVar18 + 0x28) + (ulong)uVar11 * 0x150;
  }
  *(long *)(param_1 + 0x4e0) = lVar18;
  lVar18 = *(long *)(lVar17 + 8);
  lVar17 = 0xa8;
  if (*(uint *)(lVar18 + 0x30) < 4) {
    lVar17 = 0;
  }
  iVar12 = iVar12 + (uint)*(ushort *)(*(long *)(lVar18 + 0x38) + lVar17 + 0x30);
  if (iVar12 == 0) {
    lVar17 = *(long *)(lVar18 + 0x18);
  }
  else {
    uVar11 = iVar12 - 1;
    if (*(uint *)(lVar18 + 0x20) <= uVar11) {
      uVar11 = 0;
    }
    lVar17 = *(long *)(lVar18 + 0x28) + (ulong)uVar11 * 0x150;
  }
  *(long *)(param_1 + 0x4e8) = lVar17;
  if (*(uint *)(lVar13 + 8) < 0x47) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar13 + 0x10) + 0x230);
  }
  lVar10 = *(long *)(lVar17 + 8);
  lVar18 = *(long *)(lVar10 + 0x38);
  iVar12 = 1;
  if (*(char *)(param_1 + 0x178) != '\0') {
    iVar12 = 2;
  }
  iVar1 = 0;
  if (iVar16 != 0) {
    iVar1 = iVar12;
  }
  lVar19 = 0x70;
  if (*(uint *)(lVar10 + 0x30) < 3) {
    lVar19 = 0;
  }
  uVar11 = iVar14 * (uint)*(ushort *)(lVar18 + (ulong)(1 < *(uint *)(lVar10 + 0x30)) * 0x38 + 0x30)
           + iVar1 * (uint)*(ushort *)(lVar18 + 0x30) +
           (uint)*(ushort *)(lVar18 + lVar19 + 0x30) * (uint)bVar4;
  if (uVar11 == 0) {
    lVar18 = *(long *)(lVar10 + 0x18);
  }
  else {
    uVar9 = uVar11 - 1;
    if (*(uint *)(lVar10 + 0x20) <= uVar9) {
      uVar9 = 0;
    }
    lVar18 = *(long *)(lVar10 + 0x28) + (ulong)uVar9 * 0x150;
  }
  *(long *)(param_1 + 0x4f8) = lVar18;
  uVar11 = uVar11 & 0xffffe;
  if (*(uint *)(*(long *)(lVar17 + 8) + 0x20) <= uVar11) {
    uVar11 = 0;
  }
  *(ulong *)(param_1 + 0x500) = *(long *)(*(long *)(lVar17 + 8) + 0x28) + (ulong)uVar11 * 0x150;
  if (*(uint *)(lVar13 + 8) < 0x48) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar13 + 0x10) + 0x238);
  }
  lVar19 = *(long *)(lVar17 + 8);
  uVar11 = *(uint *)(lVar19 + 0x30);
  lVar10 = *(long *)(lVar19 + 0x38);
  lVar18 = 0x70;
  if (uVar11 < 3) {
    lVar18 = 0;
  }
  lVar2 = 0xa8;
  if (uVar11 < 4) {
    lVar2 = 0;
  }
  uVar11 = iVar16 * (uint)*(ushort *)(lVar10 + 0x30) +
           iVar14 * (uint)*(ushort *)(lVar10 + (ulong)(1 < uVar11) * 0x38 + 0x30) +
           *(int *)(param_1 + 0x584) * (uint)*(ushort *)(lVar10 + lVar18 + 0x30) +
           iVar15 * (uint)*(ushort *)(lVar10 + lVar2 + 0x30);
  uVar9 = uVar11 - 1;
  if ((int)uVar11 < 1) {
    *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(lVar19 + 0x18);
    lVar17 = *(long *)(lVar17 + 8);
    if ((int)uVar11 < 0) {
      lVar17 = *(long *)(lVar17 + 0x18);
      goto LAB_03934578;
    }
  }
  else {
    if (*(uint *)(lVar19 + 0x20) <= uVar9) {
      uVar9 = 0;
    }
    *(ulong *)(param_1 + 0x508) = *(long *)(lVar19 + 0x28) + (ulong)uVar9 * 0x150;
    lVar17 = *(long *)(lVar17 + 8);
  }
  uVar11 = uVar11 & 0xfffffffe;
  if (*(uint *)(lVar17 + 0x20) <= uVar11) {
    uVar11 = 0;
  }
  lVar17 = *(long *)(lVar17 + 0x28) + (ulong)uVar11 * 0x150;
LAB_03934578:
  *(long *)(param_1 + 0x510) = lVar17;
  if (*(uint *)(lVar13 + 8) < 0x49) {
    lVar17 = 0;
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar13 + 0x10) + 0x240);
  }
  lVar18 = *(long *)(lVar17 + 8);
  uVar11 = iVar16 * (uint)*(ushort *)(*(long *)(lVar18 + 0x38) + 0x30) +
           (uint)*(ushort *)
                  (*(long *)(lVar18 + 0x38) + (ulong)(1 < *(uint *)(lVar18 + 0x30)) * 0x38 + 0x30) *
           (uint)*(byte *)(param_1 + 0x138);
  if (uVar11 == 0) {
    lVar18 = *(long *)(lVar18 + 0x18);
    uVar11 = 0;
  }
  else {
    uVar9 = uVar11 - 1;
    uVar11 = uVar11 & 0xfffffffe;
    if (*(uint *)(lVar18 + 0x20) <= uVar9) {
      uVar9 = 0;
    }
    lVar18 = *(long *)(lVar18 + 0x28) + (ulong)uVar9 * 0x150;
  }
  *(long *)(param_1 + 0x518) = lVar18;
  if (*(uint *)(*(long *)(lVar17 + 8) + 0x20) <= uVar11) {
    uVar11 = 0;
  }
  *(ulong *)(param_1 + 0x520) = *(long *)(*(long *)(lVar17 + 8) + 0x28) + (ulong)uVar11 * 0x150;
  iVar14 = (uint)(*(int *)(param_1 + 0x380) == 3) << 1;
  if (*(int *)(param_1 + 0x380) == 2) {
    iVar14 = 1;
  }
  bVar7 = false;
  if ((*(float *)(param_1 + 0x3a8) == 0.0) && (bVar7 = false, !NAN(*(float *)(param_1 + 0x3a4)))) {
    bVar7 = *(float *)(param_1 + 0x3a4) == 0.0;
  }
  lVar17 = *(long *)(*(long *)(*(long *)(lVar13 + 0x10) + 0x248) + 8);
  bVar8 = false;
  if ((bVar7) && (bVar8 = false, !NAN(*(float *)(param_1 + 0x3a0)))) {
    bVar8 = *(float *)(param_1 + 0x3a0) == 0.0;
  }
  uVar11 = (uint)*(ushort *)(*(long *)(lVar17 + 0x38) + 0x30);
  if (bVar8) {
    uVar11 = 0;
  }
  iVar14 = uVar11 + iVar14 * (uint)*(ushort *)
                                    (*(long *)(lVar17 + 0x38) +
                                     (ulong)(1 < *(uint *)(lVar17 + 0x30)) * 0x38 + 0x30);
  if (iVar14 == 0) {
    lVar17 = *(long *)(lVar17 + 0x18);
  }
  else {
    uVar11 = iVar14 - 1;
    if (*(uint *)(lVar17 + 0x20) <= uVar11) {
      uVar11 = 0;
    }
    lVar17 = *(long *)(lVar17 + 0x28) + (ulong)uVar11 * 0x150;
  }
  *(long *)(param_1 + 0x528) = lVar17;
  uVar11 = 0;
  if (bVar4 == 0) {
    uVar11 = (uint)bVar5;
  }
  uVar9 = 0;
  if (bVar4 == 0 && cVar3 != '\0') {
    uVar9 = *(byte *)(param_1 + 0x58) ^ 1;
  }
  lVar13 = *(long *)(*(long *)(*(long *)(lVar13 + 0x10) + 0x250) + 8);
  iVar14 = *(ushort *)(*(long *)(lVar13 + 0x38) + 0x30) * uVar11 +
           uVar9 * *(ushort *)
                    (*(long *)(lVar13 + 0x38) + (ulong)(1 < *(uint *)(lVar13 + 0x30)) * 0x38 + 0x30)
  ;
  if (iVar14 == 0) {
    *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(lVar13 + 0x18);
    return;
  }
  uVar11 = iVar14 - 1;
  if (*(uint *)(lVar13 + 0x20) <= uVar11) {
    uVar11 = 0;
  }
  *(ulong *)(param_1 + 0x530) = *(long *)(lVar13 + 0x28) + (ulong)uVar11 * 0x150;
  return;
}

