
void FUN_020e9020(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  int *piVar9;
  uint *puVar10;
  float *pfVar11;
  long lVar12;
  uint *puVar13;
  char cVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  puVar4 = PTR_DAT_04bb3968;
  if (*(int *)(param_2 + 100) != 1) {
    return;
  }
  fVar20 = *(float *)(param_1 + 0xc);
  lVar17 = *(long *)PTR_DAT_04bb3968;
  plVar1 = (long *)(lVar17 + 0x1c68);
  piVar9 = (int *)(**(code **)(*(long *)(lVar17 + 0x1c68) + 0xf0))(plVar1);
  if ((float)*piVar9 < fVar20) {
    piVar9 = (int *)(**(code **)(*plVar1 + 0xf0))(plVar1);
    *(float *)(param_1 + 0xc) = (float)*piVar9;
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc);
  puVar6 = PTR_DAT_04bc1578;
  puVar5 = PTR_DAT_04bc1570;
  if (*(int *)(param_1 + 8) == 2) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 8);
  lVar12 = *(long *)puVar4;
  if (lVar12 == 0) {
LAB_020e9188:
    puVar13 = (uint *)PTR_DAT_04bc2820;
    if (*(int *)PTR_DAT_04bc2820 == 0) goto LAB_020e9290;
LAB_020e9198:
    cVar14 = *PTR_DAT_04bc1570;
    do {
      if (cVar14 == '\0') {
        cVar14 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar6 + 0x68) = 0xffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
      }
      else {
        uVar15 = *(uint *)(puVar6 + 0x2c);
        if (-1 < (int)uVar15) {
          if (((byte *)((ulong)uVar15 + (long)puVar13) == (byte *)0x0) ||
             (bVar3 = *(byte *)((ulong)uVar15 + (long)puVar13), uVar15 = (uint)bVar3, 3 < bVar3))
          goto LAB_020e9290;
          goto LAB_020e9294;
        }
        if (uVar15 != 0xffffffff) goto LAB_020e9290;
      }
      puVar10 = (uint *)(ulong)*puVar13;
      uVar15 = 0;
      if ((*puVar13 == 0) || (puVar13 == puVar10)) goto LAB_020e9294;
      lVar12 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar10)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar13 + (lVar12 - (long)puVar10);
      if (lVar12 == 0) goto LAB_020e9290;
      uVar16 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar10));
      *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
      uVar15 = 0;
      if (uVar16 == 0) goto LAB_020e9294;
      piVar9 = (int *)(lVar12 + 4);
      while (piVar9[-1] != -0x2947dcfb) {
        piVar9 = piVar9 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          uVar15 = 0;
          goto LAB_020e9294;
        }
      }
      iVar18 = 0;
      if (*piVar9 != -1) {
        iVar18 = *piVar9;
      }
      *(int *)(puVar6 + 0x2c) = iVar18;
    } while (*puVar13 != 0);
    uVar15 = 0;
  }
  else {
    uVar15 = *(uint *)(param_2 + 0xc);
    if ((int)*(uint *)(lVar12 + 0x16ca0) < 1) {
      if ((((*(long *)(lVar12 + 0x16b90) != 0) &&
           (puVar13 = *(uint **)(*(long *)(lVar12 + 0x16b90) + 8), puVar13 != (uint *)0x0)) &&
          ((*(uint *)(lVar12 + 0x16ba8) <= uVar15 ||
           (*(char *)(*(long *)(lVar12 + 0x16bb0) + (long)(int)uVar15) != '\0')))) &&
         (((uVar15 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
        iVar18 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar18 = 0x1c;
        }
        puVar13 = (uint *)((ulong)(puVar13[1] * uVar15 + (uint)(ushort)puVar13[2] * 8 + iVar18) +
                          (long)puVar13);
        if (puVar13 != (uint *)0x0) goto LAB_020e9110;
      }
      goto LAB_020e9188;
    }
    if (*(uint *)(lVar12 + 0x16ca0) <= uVar15) goto LAB_020e9188;
    if (*(uint *)(lVar12 + 0x16c90) <= uVar15) {
      uVar15 = 0;
    }
    puVar13 = *(uint **)(*(long *)(lVar12 + 0x16c98) + (ulong)uVar15 * 8);
    if (puVar13 == (uint *)0x0) goto LAB_020e9188;
LAB_020e9110:
    if (*puVar13 != 0) goto LAB_020e9198;
LAB_020e9290:
    uVar15 = 0;
  }
LAB_020e9294:
  if (uVar2 != uVar15) {
    return;
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  pfVar11 = (float *)(**(code **)(*(long *)(lVar17 + 0x1c98) + 0xf0))(lVar17 + 0x1c98);
  fVar21 = *pfVar11;
  piVar9 = (int *)(**(code **)(*(long *)(lVar17 + 0x1c68) + 0xf0))(plVar1);
  fVar22 = (float)*piVar9;
  piVar9 = (int *)(**(code **)(*(long *)(lVar17 + 0x1cc8) + 0xf0))(lVar17 + 0x1cc8);
  fVar24 = (float)*piVar9;
  piVar9 = (int *)(**(code **)(*(long *)(lVar17 + 0x1cf8) + 0xf0))(lVar17 + 0x1cf8);
  iVar18 = *piVar9;
  fVar20 = 0.0;
  fVar19 = *(float *)(param_1 + 0xc);
  if (fVar22 <= fVar24) {
    if (fVar19 <= fVar22) goto LAB_020e9424;
    if (fVar24 <= fVar19) goto LAB_020e9334;
  }
  else {
    if (fVar22 <= fVar19) goto LAB_020e9424;
    if (fVar19 <= fVar24) {
LAB_020e9334:
      fVar20 = (float)iVar18;
      goto LAB_020e9424;
    }
  }
  fVar20 = fVar22 - fVar24;
  fVar23 = 0.0;
  bVar7 = false;
  bVar8 = true;
  if (-1.1920929e-07 <= fVar20) {
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar20)) {
      bVar7 = fVar20 == 1.1920929e-07;
      bVar8 = 1.1920929e-07 <= fVar20;
    }
  }
  if (bVar8 && !bVar7) {
    fVar23 = (fVar19 - fVar22) / (fVar24 - fVar22);
  }
  if ((fVar21 + -0.5 < -1.1920929e-07) || (1.1920929e-07 < fVar21 + -0.5)) {
    fVar20 = -fVar23;
    if (0.0 <= fVar23) {
      fVar20 = fVar23;
    }
    fVar19 = 0.0;
    if (1.1920929e-07 <= fVar20) {
      if ((fVar21 < 1.1920929e-07) || (0.9999999 < fVar21)) {
        fVar21 = 1.0;
        fVar19 = 0.0;
        bVar7 = false;
        if (!NAN(fVar20)) {
          bVar7 = fVar20 < 1.0;
        }
      }
      else {
        fVar19 = (float)FUN_038cd848(fVar21);
        fVar20 = (float)FUN_038cd848(fVar20);
        fVar21 = (float)FUN_038cd7d8(fVar20 / (fVar19 * -1.442695));
        fVar19 = -fVar21;
        bVar7 = fVar23 < 0.0;
      }
      if (!bVar7) {
        fVar19 = fVar21;
      }
    }
  }
  else {
    fVar19 = fVar23;
  }
  fVar20 = fVar19 * (float)iVar18 + 0.0;
LAB_020e9424:
  *(float *)(param_1 + 0x10) = fVar20;
  return;
}

