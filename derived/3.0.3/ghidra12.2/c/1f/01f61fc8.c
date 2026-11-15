
void FUN_01f61fc8(long param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  undefined *puVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  float *pfVar13;
  uint uVar14;
  long lVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  piVar1 = (int *)(param_1 + 0x1365c);
  piVar2 = (int *)(param_1 + 0x77b0);
  lVar12 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar12 + 0x360) != 4) {
    if (0 < *piVar1) {
      *piVar1 = *piVar1 + -1;
    }
    puVar8 = PTR_DAT_04bb30a0;
    iVar10 = *(int *)(param_1 + 0x13660);
    if (0 < iVar10) {
      if ((*piVar2 != 0x67) && (*(int *)(param_1 + 0x13678) != 2)) {
        uVar9 = FUN_00a90354(*(undefined8 *)PTR_DAT_04bb30a0);
        if ((uVar9 & 1) == 0) {
          uVar9 = FUN_00a904b0(*(undefined8 *)puVar8);
          iVar10 = *(int *)(param_1 + 0x13660);
          if (((uVar9 & 1) == 0) && (0x59 < iVar10)) {
            lVar12 = *(long *)(param_1 + 8);
            uVar14 = *(uint *)(lVar12 + 0x288);
            *(undefined4 *)(lVar12 + 0x288) = *(undefined4 *)(lVar12 + 0x28c);
            uVar14 = uVar14 ^ uVar14 << 0xb;
            *(undefined4 *)(lVar12 + 0x28c) = *(undefined4 *)(lVar12 + 0x290);
            uVar11 = *(uint *)(lVar12 + 0x294);
            *(uint *)(lVar12 + 0x290) = uVar11;
            uVar14 = uVar14 >> 8 ^ uVar11 >> 0x13 ^ uVar14 ^ uVar11;
            *(uint *)(lVar12 + 0x294) = uVar14;
            iVar10 = (int)((ulong)uVar14 * 0x12 >> 0x20) * 5 + 5;
          }
        }
        else {
          iVar10 = *(int *)(param_1 + 0x13660);
        }
      }
      iVar10 = iVar10 + -1;
      *(int *)(param_1 + 0x13660) = iVar10;
    }
    if (iVar10 != 0) {
      return;
    }
    if ((*piVar1 == 0) ||
       ((lVar12 = *(long *)(param_1 + 8), *(int *)(lVar12 + 0x750) == 1 &&
        (*(int *)(param_1 + 0x13664) == 0)))) {
      FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
      return;
    }
    if (*(char *)(param_1 + 0x13680) == '\0') {
      uVar14 = *(uint *)(lVar12 + 0x288);
      *(undefined4 *)(lVar12 + 0x288) = *(undefined4 *)(lVar12 + 0x28c);
      uVar14 = uVar14 ^ uVar14 << 0xb;
      *(undefined4 *)(lVar12 + 0x28c) = *(undefined4 *)(lVar12 + 0x290);
      uVar11 = *(uint *)(lVar12 + 0x294);
      *(uint *)(lVar12 + 0x290) = uVar11;
      uVar14 = uVar14 >> 8 ^ uVar11 >> 0x13 ^ uVar14 ^ uVar11;
      *(uint *)(lVar12 + 0x294) = uVar14;
      if (((uint)((ulong)uVar14 * 100 >> 0x20) < 5) &&
         (uVar9 = FUN_01f5feb0(param_1), (uVar9 & 1) != 0)) {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x13680) = 0;
    puVar8 = PTR_DAT_04bb30a0;
    if (*piVar2 == 0x67) {
      uVar14 = 0x32;
LAB_01f623dc:
      uVar11 = uVar14;
    }
    else {
      uVar9 = FUN_00a904b0(*(undefined8 *)PTR_DAT_04bb30a0);
      uVar14 = 0x1e;
      if ((uVar9 & 1) == 0) {
        uVar9 = FUN_00a90354(*(undefined8 *)puVar8);
        uVar14 = 0x1e;
        if ((uVar9 & 1) == 0) {
          uVar14 = 0;
        }
        goto LAB_01f623dc;
      }
      uVar11 = 0x32;
    }
    lVar12 = *(long *)(param_1 + 8);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x13678) != 0) {
      uVar3 = uVar11;
    }
    uVar7 = *(uint *)(lVar12 + 0x294);
    uVar4 = 0;
    if (*(int *)(param_1 + 0x13678) != 1) {
      uVar4 = uVar14;
    }
    iVar10 = 0;
    if (*(int *)(param_1 + 0x13678) != 2) {
      iVar10 = 100 - (uVar14 + uVar11);
    }
    uVar14 = *(uint *)(lVar12 + 0x288) ^ *(uint *)(lVar12 + 0x288) << 0xb;
    uVar14 = uVar14 >> 8 ^ uVar7 >> 0x13 ^ uVar14 ^ uVar7;
    *(uint *)(lVar12 + 0x294) = uVar14;
    uVar14 = (uint)((ulong)uVar14 * (ulong)(uVar4 + uVar3 + iVar10) >> 0x20);
    *(undefined4 *)(lVar12 + 0x288) = *(undefined4 *)(lVar12 + 0x28c);
    uVar16 = *(undefined4 *)(lVar12 + 0x290);
    *(uint *)(lVar12 + 0x290) = uVar7;
    *(undefined4 *)(lVar12 + 0x28c) = uVar16;
    uVar16 = 1;
    if (uVar4 <= uVar14 - uVar3) {
      uVar16 = 2;
    }
    uVar5 = 0;
    if (uVar3 <= uVar14) {
      uVar5 = uVar16;
    }
    goto LAB_01f6246c;
  }
  if ((*(int *)(lVar12 + 0x360) != 4 || *(int *)(lVar12 + 0x4b8) == 0) ||
     (*(int *)(lVar12 + 0x378) != 0x23)) {
    return;
  }
  uVar14 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xd64);
  if ((uVar14 >> 2 & 1) == 0) {
    if ((uVar14 >> 3 & 1) == 0) {
      lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
      if ((((lVar12 == 0) || ((uVar14 >> 1 & 1) != 0)) ||
          (lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x60), lVar15 == 0)) ||
         (((uint)*(undefined8 *)(lVar12 + 0xad58) >> 2 & 1) == 0)) goto LAB_01f620d8;
      pfVar13 = (float *)(lVar15 + 0x15fc);
    }
    else {
      pfVar13 = (float *)(*(long *)PTR_DAT_04bb3968 + 0xd74);
    }
    lVar12 = *(long *)(param_1 + 0x18);
    fVar17 = *pfVar13;
    fVar18 = pfVar13[1];
    fVar19 = pfVar13[2];
    uVar9 = FUN_02085a50(lVar12,3,0);
    if ((uVar9 & 1) != 0) {
      *(undefined1 *)(lVar12 + 0x801) = 1;
      lVar15 = lVar12 + 0x10;
      lVar6 = lVar15 + (ulong)*(uint *)(lVar12 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar12 + 0x294)) {
        lVar6 = lVar15;
      }
      *(float *)(lVar6 + 0x14) = fVar19 + -5000.0;
      *(float *)(lVar6 + 0xc) = fVar17 + 0.0;
      *(float *)(lVar6 + 0x10) = fVar18 + 1000.0;
      lVar6 = lVar15 + (ulong)*(uint *)(lVar12 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar12 + 0x294)) {
        lVar6 = lVar15;
      }
      *(undefined1 *)(lVar6 + 0x7e) = 0;
    }
  }
  else {
LAB_01f620d8:
    FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
  }
  puVar8 = PTR_DAT_04bb30a0;
  if (*piVar2 == 0x67) {
    uVar14 = 0x32;
LAB_01f62334:
    uVar11 = uVar14;
  }
  else {
    uVar9 = FUN_00a904b0(*(undefined8 *)PTR_DAT_04bb30a0);
    uVar14 = 0x1e;
    if ((uVar9 & 1) == 0) {
      uVar9 = FUN_00a90354(*(undefined8 *)puVar8);
      uVar14 = 0x1e;
      if ((uVar9 & 1) == 0) {
        uVar14 = 0;
      }
      goto LAB_01f62334;
    }
    uVar11 = 0x32;
  }
  lVar12 = *(long *)(param_1 + 8);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x13678) != 0) {
    uVar3 = uVar11;
  }
  uVar7 = *(uint *)(lVar12 + 0x294);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x13678) != 1) {
    uVar4 = uVar14;
  }
  iVar10 = 0;
  if (*(int *)(param_1 + 0x13678) != 2) {
    iVar10 = 100 - (uVar14 + uVar11);
  }
  uVar14 = *(uint *)(lVar12 + 0x288) ^ *(uint *)(lVar12 + 0x288) << 0xb;
  uVar14 = uVar14 >> 8 ^ uVar7 >> 0x13 ^ uVar14 ^ uVar7;
  *(uint *)(lVar12 + 0x294) = uVar14;
  uVar14 = (uint)((ulong)uVar14 * (ulong)(uVar4 + uVar3 + iVar10) >> 0x20);
  *(undefined4 *)(lVar12 + 0x288) = *(undefined4 *)(lVar12 + 0x28c);
  uVar16 = *(undefined4 *)(lVar12 + 0x290);
  *(uint *)(lVar12 + 0x290) = uVar7;
  *(undefined4 *)(lVar12 + 0x28c) = uVar16;
  uVar16 = 1;
  if (uVar4 <= uVar14 - uVar3) {
    uVar16 = 2;
  }
  uVar5 = 0;
  if (uVar3 <= uVar14) {
    uVar5 = uVar16;
  }
LAB_01f6246c:
  *(undefined4 *)(param_1 + 0x13678) = uVar5;
  FUN_01f62d2c(param_1);
  return;
}

