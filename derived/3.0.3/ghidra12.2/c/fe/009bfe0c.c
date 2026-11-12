
void FUN_009bfe0c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
    *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xe4);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x10c);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x110);
    *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_1 + 0x130);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x134);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x138);
    *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x15c);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x160);
    *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x184);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x188);
    *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_1 + 0x1a8);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x1ac);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_1 + 0x1d0);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x1d4);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x1d8);
    *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_1 + 0x1f8);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x1fc);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x200);
  }
  iVar16 = *(int *)(param_1 + 0x50);
  if (iVar16 != 0) {
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
  }
  iVar3 = *(int *)(DAT_055f6860 + 0xa5e64);
  iVar10 = *(int *)(DAT_055f6860 + 0xa5e40);
  iVar4 = *(int *)(DAT_055f6860 + 0xa5e68);
  iVar5 = *(int *)(DAT_055f6860 + 0xa5e6c);
  if (1 < iVar16 - 2U) {
    if (iVar16 == 4) {
      *(undefined2 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x28) = 0x100000001;
      *(undefined1 *)(param_1 + 0x26) = 0;
      *(undefined4 *)(param_1 + 0x17) = 0;
      *(undefined1 *)(param_1 + 0x19) = 1;
      if (iVar10 == 2) {
        *(undefined4 *)(param_1 + 0x50) = 1;
        return;
      }
      return;
    }
    if (iVar16 != 1) {
      return;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined2 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x26) = 0;
    *(undefined4 *)(param_1 + 0x17) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0x100000001;
    if (iVar10 != 2) {
      return;
    }
LAB_009bffd8:
    *(int *)(param_1 + 0x50) = iVar10;
    return;
  }
  iVar1 = *(int *)(DAT_055f6860 + 0xa5e70);
  iVar2 = *(int *)(DAT_055f6860 + 0xa5e74);
  if (*(float *)(param_1 + 0x54) < 60.0) {
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + 1.0;
  }
  if ((iVar16 == 2) && (iVar10 == 3)) goto LAB_009bffd8;
  if (iVar10 == 1) {
    *(undefined4 *)(param_1 + 0x50) = 4;
    return;
  }
  fVar18 = (float)iVar1;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  if (fVar18 <= *(float *)(param_1 + 0x30)) {
    iVar16 = *(int *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x18) = 0;
    uVar9 = 2;
    if (1 < *(int *)(param_1 + 0x1c) - 3U) {
      uVar9 = 4;
    }
    if (*(char *)(param_1 + 0x26) == '\0') goto LAB_009c00a4;
LAB_009c0194:
    lVar12 = *(long *)(DAT_04d07da8 + 0x48);
    if ((iVar4 - 2U < 8) && (*(uint *)(param_1 + 0x14) - 1 < 4)) {
      (**(code **)(**(long **)(*(long *)(lVar12 + 0x2058) +
                              ((ulong)(iVar4 * 4 - 5) + (ulong)*(uint *)(param_1 + 0x14)) * 8) +
                  0xf0))();
      lVar12 = *(long *)(DAT_04d07da8 + 0x48);
    }
    fVar18 = 0.0;
    if ((iVar5 - 2U < 8) && (*(uint *)(param_1 + 0x2c) - 1 < 4)) {
      pfVar8 = (float *)(**(code **)(**(long **)(*(long *)(lVar12 + 0x2058) +
                                                ((ulong)(iVar5 * 4 - 5) +
                                                (ulong)*(uint *)(param_1 + 0x2c)) * 8) + 0xf0))();
      fVar18 = *pfVar8;
    }
    fVar18 = (float)(iVar2 + iVar1) - fVar18;
  }
  else {
    iVar16 = *(int *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x26) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    uVar9 = 2;
    if (1 < *(int *)(param_1 + 0x1c) - 3U) {
      uVar9 = 4;
    }
LAB_009c00a4:
    uVar14 = 1;
    if (*(int *)(param_1 + 0x14) < 4) {
      uVar14 = *(int *)(param_1 + 0x14) + 1;
    }
    if ((uVar14 - 1 < 4) && (iVar4 - 2U < 8)) {
      pfVar8 = (float *)(**(code **)(**(long **)(*(long *)(*(long *)(DAT_04d07da8 + 0x48) + 0x2058)
                                                + (ulong)((uVar14 + iVar4 * 4) - 5) * 8) + 0xf0))();
      lVar12 = DAT_04d07da8;
      fVar19 = *pfVar8;
      cVar13 = *(char *)(param_1 + 0x26);
      bVar6 = true;
      bVar7 = false;
      if (fVar19 != 0.0) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar19) && !NAN(fVar18)) {
          bVar6 = fVar19 < fVar18;
          bVar7 = false;
        }
      }
      if (bVar6 == bVar7 && cVar13 == '\0') {
        cVar13 = '\x01';
        fVar17 = 0.0;
        *(undefined1 *)(param_1 + 0x18) = 1;
        *(undefined1 *)(param_1 + 0x26) = 1;
        uVar15 = 1;
        if (uVar14 < uVar9) {
          uVar15 = uVar14 + 1;
        }
        if ((uVar15 < 5) && (iVar5 - 2U < 8)) {
          pfVar8 = (float *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar12 + 0x48) + 0x2058) +
                                                    (ulong)((uVar15 + iVar5 * 4) - 5) * 8) + 0xf0))
                                      ();
          fVar17 = *pfVar8;
          cVar13 = *(char *)(param_1 + 0x26);
        }
        *(float *)(param_1 + 0x30) = fVar19;
        *(uint *)(param_1 + 0x28) = uVar14;
        *(uint *)(param_1 + 0x2c) = uVar15;
        *(int *)(param_1 + 8) = (int)((float)(iVar2 + iVar1) - fVar17);
      }
      iVar10 = (int)(fVar18 - fVar19);
      *(int *)(param_1 + 0xc) = iVar10;
      if (cVar13 == '\0') goto LAB_009c0248;
      goto LAB_009c0194;
    }
  }
  iVar10 = (int)fVar18;
  *(int *)(param_1 + 0xc) = iVar10;
LAB_009c0248:
  uVar14 = *(uint *)(param_1 + 8);
  if (-1 < (int)uVar14) {
    if ((int)(uVar14 >> 1) < iVar10) {
      if (*(char *)(param_1 + 0x24) == '\0') {
        *(undefined1 *)(param_1 + 0x24) = 1;
        iVar5 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar5 + 1;
        if (((int)uVar9 <= iVar5) && (*(int *)(param_1 + 0x1c) != 0)) {
          *(undefined4 *)(param_1 + 0x14) = 1;
        }
        *(undefined1 *)(param_1 + 0x25) = 0;
      }
    }
    else if (iVar10 <= (int)(uVar14 >> 3)) {
      *(undefined1 *)(param_1 + 0x24) = 0;
    }
  }
  if ((iVar16 < iVar10 && *(char *)(param_1 + 0x26) == '\0') && (*(int *)(param_1 + 0x1c) != 0)) {
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x20)) {
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
    *(int *)(param_1 + 8) = iVar1;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  uVar9 = iVar3 - 2;
  if (uVar9 < 9) {
    uVar11 = *(undefined4 *)(&DAT_041680b8 + (long)(int)uVar9 * 4);
  }
  else {
    uVar11 = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar11;
  *(bool *)(param_1 + 0x34) = 8 < iVar3;
  if (iVar4 - 2U < 9) {
    uVar11 = *(undefined4 *)(&DAT_041680b8 + (long)(int)(iVar4 - 2U) * 4);
  }
  else {
    uVar11 = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar11;
  if (*(char *)(param_1 + 0x26) == '\0') {
    return;
  }
  if (iVar4 - 2U < 9) {
    uVar11 = *(undefined4 *)(&DAT_041680b8 + (long)(int)(iVar4 - 2U) * 4);
  }
  else {
    uVar11 = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar11;
  *(bool *)(param_1 + 0x34) = 8 < iVar4;
  return;
}

