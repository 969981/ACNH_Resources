
void FUN_0399c57c(long param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x58);
    uVar8 = 0;
    if (*(int *)(param_1 + 0x50) + 1U < *(uint *)(param_1 + 0x4c)) {
      uVar8 = *(int *)(param_1 + 0x50) + 1;
    }
    *(uint *)(param_1 + 0x50) = uVar8;
    puVar6 = PTR_DAT_04bcf030;
    pfVar12 = (float *)(param_1 + 8) + (ulong)uVar8 * 8;
    if (1 < uVar8) {
      pfVar12 = (float *)(param_1 + 8);
    }
    if (((*(uint *)(lVar13 + 0xb8) ^ 0xffffffff) & 3) == 0) {
      lVar14 = *(long *)(lVar13 + 0x40);
      lVar10 = 0;
      if (*(long *)(lVar14 + 0x10) != 0) {
        uVar8 = (**(code **)PTR_DAT_04bcf030)();
        lVar9 = *(long *)(lVar14 + 0x10);
        if ((uVar8 >> 2 & 1) != 0) {
          (**(code **)PTR_DAT_04bcf358)(lVar9,*(undefined4 *)(lVar14 + 8),0x10);
          lVar9 = *(long *)(lVar14 + 0x10);
        }
        lVar10 = 0;
        if (lVar9 != 0) {
          lVar10 = (**(code **)PTR_DAT_04bb2cd8)();
        }
      }
      puVar7 = PTR_DAT_04bcf3f8;
      puVar5 = PTR_DAT_04bbd7c0;
      lVar10 = (**(code **)PTR_DAT_04bcf3f8)
                         (*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30),
                          lVar10 + (ulong)*(uint *)(lVar14 + 8));
      if ((*(long *)(lVar14 + 0x10) != 0) && (uVar8 = (**(code **)puVar6)(), (uVar8 >> 2 & 1) != 0))
      {
        (**(code **)PTR_DAT_04bcf358)
                  (*(undefined8 *)(lVar14 + 0x10),*(undefined4 *)(lVar14 + 8),0x10);
      }
      lVar9 = *(long *)(lVar13 + 0x28);
      lVar14 = 0;
      if (*(long *)(lVar9 + 0x10) != 0) {
        uVar8 = (**(code **)puVar6)();
        lVar11 = *(long *)(lVar9 + 0x10);
        if ((uVar8 >> 2 & 1) != 0) {
          (**(code **)PTR_DAT_04bcf358)(lVar11,*(undefined4 *)(lVar9 + 8),0x10);
          lVar11 = *(long *)(lVar9 + 0x10);
        }
        lVar14 = 0;
        if (lVar11 != 0) {
          lVar14 = (**(code **)PTR_DAT_04bb2cd8)();
        }
      }
      lVar14 = (**(code **)puVar7)(*(undefined8 *)(*(long *)puVar5 + 0x30),
                                   lVar14 + (ulong)*(uint *)(lVar9 + 8));
      if ((*(long *)(lVar9 + 0x10) != 0) && (uVar8 = (**(code **)puVar6)(), (uVar8 >> 2 & 1) != 0))
      {
        (**(code **)PTR_DAT_04bcf358)(*(undefined8 *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 8),0x10)
        ;
      }
      fVar15 = (float)(ulong)(lVar10 - lVar14) * 0.001;
      *pfVar12 = fVar15;
      pfVar12[1] = (fVar15 * 100.0) / 16666.666;
      *(undefined4 *)(lVar13 + 0xb8) = 0;
      uVar8 = *(uint *)(param_1 + 0x48) | 2;
    }
    else {
      *(undefined4 *)(lVar13 + 0xb8) = 0;
      uVar8 = *(uint *)(param_1 + 0x48) & 0xfffffffd;
    }
    *(uint *)(param_1 + 0x48) = uVar8;
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *(long *)(param_1 + 0x68) = lVar13;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    fVar15 = pfVar12[6];
    fVar16 = pfVar12[1];
    if ((int)fVar15 < 3) {
      fVar4 = pfVar12[4];
      if ((int)fVar4 <= (int)fVar15) {
        if (0 < (int)fVar15) {
          pfVar12[6] = (float)((int)fVar15 - 1U);
          fVar15 = (float)((int)fVar15 - 1U);
        }
        if ((int)fVar4 <= (int)fVar15) {
          return;
        }
      }
      fVar2 = fVar4;
      if (0 < (int)pfVar12[5]) {
        fVar2 = pfVar12[5];
      }
      pfVar12[5] = (float)((int)fVar2 + -1);
      pfVar12[6] = (float)((int)fVar15 + 1);
      if ((int)fVar2 <= (int)fVar4) {
        fVar4 = 0.0;
      }
      pfVar12 = (float *)(*(long *)(pfVar12 + 2) + (long)(((int)fVar2 + -1) - (int)fVar4) * 0x18);
      *pfVar12 = fVar16;
      pfVar12[1] = fVar16;
      pfVar12[2] = fVar16;
      pfVar12[3] = 0.0;
      pfVar12[4] = 0.0;
    }
    else {
      lVar13 = *(long *)(pfVar12 + 2);
      fVar4 = pfVar12[4];
      fVar2 = pfVar12[5];
      fVar18 = fVar16;
      fVar19 = fVar16;
      if (4 < (uint)fVar15) {
        fVar18 = 0.0;
        if ((int)fVar4 <= (int)fVar2) {
          fVar18 = fVar4;
        }
        fVar19 = 0.0;
        if ((int)fVar4 <= (int)fVar2 + 1) {
          fVar19 = fVar4;
        }
        fVar20 = 0.0;
        if ((int)fVar4 <= (int)fVar2 + 2) {
          fVar20 = fVar4;
        }
        fVar17 = fVar16 + *(float *)(lVar13 + (long)((int)fVar2 - (int)fVar18) * 0x18) +
                 *(float *)(lVar13 + (long)(((int)fVar2 + 1) - (int)fVar19) * 0x18);
        fVar18 = 0.0;
        if ((int)fVar4 <= (int)fVar2 + 3) {
          fVar18 = fVar4;
        }
        fVar19 = fVar17 / 3.0;
        fVar18 = (fVar17 + *(float *)(lVar13 + (long)(((int)fVar2 + 2) - (int)fVar20) * 0x18) +
                 *(float *)(lVar13 + (long)(((int)fVar2 + 3) - (int)fVar18) * 0x18)) / 5.0;
      }
      fVar20 = 0.0;
      if ((int)fVar4 <= (int)fVar2) {
        fVar20 = fVar4;
      }
      lVar10 = lVar13 + (long)((int)fVar2 - (int)fVar20) * 0x18;
      fVar20 = *(float *)(lVar10 + 4);
      fVar17 = *(float *)(lVar10 + 0xc);
      if ((int)fVar15 < (int)fVar4) {
        fVar15 = (float)((int)fVar15 + 1);
      }
      else {
        pfVar12[6] = (float)((int)fVar15 - 1);
        if ((int)fVar4 < (int)fVar15) {
          return;
        }
      }
      fVar1 = fVar4;
      if (0 < (int)fVar2) {
        fVar1 = fVar2;
      }
      pfVar12[5] = (float)((int)fVar1 + -1);
      fVar20 = fVar19 - fVar20;
      pfVar12[6] = fVar15;
      if ((int)fVar1 <= (int)fVar4) {
        fVar4 = 0.0;
      }
      pfVar12 = (float *)(lVar13 + (long)(((int)fVar1 + -1) - (int)fVar4) * 0x18);
      fVar17 = fVar20 - fVar17;
      *pfVar12 = fVar16;
      pfVar12[1] = fVar19;
      pfVar12[2] = fVar18;
      pfVar12[3] = fVar20;
      pfVar12[4] = fVar17;
      fVar16 = fVar16 + fVar20 + fVar20 + fVar17;
    }
    pfVar12[5] = fVar16;
  }
  return;
}

