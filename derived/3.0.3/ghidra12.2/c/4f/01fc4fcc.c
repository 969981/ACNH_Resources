
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_01fc4fcc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_34;
  
  puVar3 = PTR_DAT_04bb5ce0;
  lVar7 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar7 == 0) {
    bVar10 = false;
    local_34 = 2;
  }
  else {
    local_34 = *(int *)(lVar7 + 0xea0);
    if (*(char *)(lVar7 + 0xe9e) == '\0') {
      bVar10 = false;
    }
    else {
      uVar4 = FUN_0277d7b4(lVar7 + 0xe94,param_2);
      if ((uVar4 & 1) != 0) {
        return local_34;
      }
      lVar7 = *(long *)puVar3;
      bVar10 = true;
    }
  }
  puVar2 = PTR_DAT_04bb37e0;
  if (lVar7 != 0) {
    puVar2 = (undefined *)(lVar7 + 0xe70);
  }
  uVar4 = FUN_0277d7b4(puVar2,param_2);
  if ((uVar4 & 1) == 0) {
    iVar6 = 0;
  }
  else {
    lVar7 = *(long *)puVar3;
    if (lVar7 == 0) {
      iVar6 = 0;
      iVar5 = 0;
      iVar8 = 0x10;
      iVar9 = 0x10;
    }
    else {
      iVar6 = *(int *)(lVar7 + 0xd88);
      iVar5 = *(int *)(lVar7 + 0xd8c);
      iVar9 = *(int *)(lVar7 + 0xd98);
      iVar8 = *(int *)(lVar7 + 0xd9c);
    }
    iVar1 = iVar6;
    if (iVar9 <= iVar6) {
      iVar1 = iVar9;
    }
    if (iVar6 <= iVar9) {
      iVar6 = iVar9;
    }
    iVar9 = iVar5;
    if (iVar8 <= iVar5) {
      iVar9 = iVar8;
    }
    if (iVar5 <= iVar8) {
      iVar5 = iVar8;
    }
    fVar11 = (float)iVar1 * 5.0;
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    fVar14 = (float)iVar9 * 5.0;
    fVar16 = (float)iVar6 * 5.0 + 5.0;
    fVar12 = (float)iVar5 * 5.0 + 5.0;
    fVar18 = (fVar11 + fVar16) * 0.5;
    fVar19 = (fVar14 + fVar12) * 0.5;
    iVar6 = 0;
    if (bVar10) {
      if (local_34 == 0) {
        iVar6 = 2;
        fVar12 = 3.4028235e+38;
      }
      else {
        iVar6 = 0;
        fVar15 = fVar18 - *(float *)(lVar7 + 0x278);
        fVar12 = fVar12 - *(float *)(lVar7 + 0x280);
        fVar12 = fVar12 * fVar12 + fVar15 * fVar15;
        if (3.4028235e+38 <= fVar12) {
          fVar12 = 3.4028235e+38;
          iVar6 = 2;
        }
      }
      if (local_34 != 1) {
        fVar16 = fVar16 - *(float *)(lVar7 + 0x278);
        fVar15 = fVar19 - *(float *)(lVar7 + 0x280);
        fVar16 = fVar15 * fVar15 + fVar16 * fVar16;
        if (fVar16 < fVar12) {
          fVar12 = fVar16;
          iVar6 = 1;
        }
      }
      if (local_34 != 2) {
        fVar18 = fVar18 - *(float *)(lVar7 + 0x278);
        fVar14 = fVar14 - *(float *)(lVar7 + 0x280);
        fVar16 = fVar14 * fVar14 + fVar18 * fVar18;
        if (fVar16 < fVar12) {
          fVar12 = fVar16;
          iVar6 = 2;
        }
      }
      if (local_34 != 3) {
        fVar11 = fVar11 - *(float *)(lVar7 + 0x278);
        fVar19 = fVar19 - *(float *)(lVar7 + 0x280);
        if (fVar19 * fVar19 + fVar11 * fVar11 < fVar12) {
          iVar6 = 3;
        }
      }
    }
    else {
      fVar13 = *(float *)(lVar7 + 0x278);
      fVar17 = *(float *)(lVar7 + 0x280);
      fVar12 = (fVar12 - fVar17) * (fVar12 - fVar17) + (fVar18 - fVar13) * (fVar18 - fVar13);
      fVar15 = (float)NEON_fminnm(fVar12,0x7f7fffff);
      if (3.4028235e+38 <= fVar12) {
        iVar6 = 2;
      }
      fVar12 = (fVar19 - fVar17) * (fVar19 - fVar17) + (fVar16 - fVar13) * (fVar16 - fVar13);
      iVar5 = 1;
      if (fVar15 <= fVar12) {
        fVar12 = fVar15;
        iVar5 = iVar6;
      }
      fVar16 = (fVar14 - fVar17) * (fVar14 - fVar17) + (fVar18 - fVar13) * (fVar18 - fVar13);
      iVar9 = 2;
      if (fVar12 <= fVar16) {
        fVar16 = fVar12;
        iVar9 = iVar5;
      }
      iVar6 = 3;
      if (fVar16 <= (fVar19 - fVar17) * (fVar19 - fVar17) + (fVar11 - fVar13) * (fVar11 - fVar13)) {
        iVar6 = iVar9;
      }
    }
  }
  return iVar6;
}

