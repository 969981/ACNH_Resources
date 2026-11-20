
long FUN_03ef9df0(long param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar9 = *(uint *)(param_1 + 0x30);
  lVar4 = *(long *)(param_1 + 0x38);
  uVar6 = param_2;
  if (uVar9 <= param_2) {
    uVar6 = 0;
  }
  if ((*(byte *)(lVar4 + (int)uVar6) >> 1 & 1) != 0) {
    uVar6 = param_2;
    do {
      uVar2 = uVar6;
      if (*(uint *)(*(long *)(param_1 + 8) + 0x18) <= uVar6) {
        uVar2 = 0;
      }
      sVar3 = *(short *)(*(long *)(*(long *)(param_1 + 8) + 0x20) + (long)(int)uVar2 * 2);
      if ((int)sVar3 == 0xffffffff) {
        uVar9 = uVar6;
        if (*(uint *)(param_1 + 0x10) <= uVar6) {
          uVar9 = 0;
        }
        puVar5 = (undefined4 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar9 * 0x1c);
        uVar9 = uVar6;
        if (*(uint *)(param_1 + 0x20) <= uVar6) {
          uVar9 = 0;
        }
        puVar7 = (undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar9 * 0x1c);
        *puVar7 = *puVar5;
        puVar7[1] = puVar5[1];
        puVar7[2] = puVar5[2];
        puVar7[3] = puVar5[3];
        puVar7[4] = puVar5[4];
        puVar7[5] = puVar5[5];
        puVar7[6] = puVar5[6];
        uVar9 = uVar6;
        if (*(uint *)(param_1 + 0x30) <= uVar6) {
          uVar9 = 0;
        }
        *(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar9) =
             *(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar9) & 0xfd;
        if ((int)param_2 <= (int)uVar6) goto LAB_03efa0a4;
        goto LAB_03ef9f1c;
      }
      if (uVar9 <= uVar6) {
        uVar6 = 0;
      }
      *(byte *)(lVar4 + (int)uVar6) = *(byte *)(lVar4 + (int)uVar6) | 8;
      uVar9 = *(uint *)(param_1 + 0x30);
      lVar4 = *(long *)(param_1 + 0x38);
      uVar6 = (uint)sVar3;
      uVar2 = uVar6;
      if (uVar9 < (uint)(int)sVar3 || uVar9 == uVar6) {
        uVar2 = 0;
      }
    } while ((*(byte *)(lVar4 + (int)uVar2) >> 1 & 1) != 0);
    bVar1 = (int)uVar6 < (int)param_2;
    uVar6 = (int)sVar3;
    if (bVar1) {
LAB_03ef9f1c:
      do {
        uVar9 = uVar6 + 1;
        iVar10 = 0;
        if (uVar9 < *(uint *)(param_1 + 0x30)) {
          iVar10 = uVar6 + 1;
        }
        if ((*(byte *)(*(long *)(param_1 + 0x38) + (long)iVar10) >> 3 & 1) != 0) {
          uVar6 = uVar9;
          if (*(uint *)(*(long *)(param_1 + 8) + 0x18) <= uVar9) {
            uVar6 = 0;
          }
          sVar3 = *(short *)(*(long *)(*(long *)(param_1 + 8) + 0x20) + (long)(int)uVar6 * 2);
          uVar6 = uVar9;
          if (*(uint *)(param_1 + 0x20) <= uVar9) {
            uVar6 = 0;
          }
          pfVar8 = (float *)(*(long *)(param_1 + 0x28) + (long)(int)uVar6 * 0x1c);
          iVar10 = (int)sVar3;
          if (*(uint *)(param_1 + 0x20) <= (uint)(int)sVar3) {
            iVar10 = 0;
          }
          pfVar11 = (float *)(*(long *)(param_1 + 0x28) + (long)iVar10 * 0x1c);
          uVar6 = uVar9;
          if (*(uint *)(param_1 + 0x10) <= uVar9) {
            uVar6 = 0;
          }
          pfVar12 = (float *)(*(long *)(param_1 + 0x18) + (long)(int)uVar6 * 0x1c);
          fVar14 = pfVar11[2];
          fVar15 = pfVar11[3];
          fVar17 = pfVar12[4];
          fVar16 = pfVar12[5];
          fVar13 = pfVar12[6];
          fVar20 = *pfVar11;
          fVar19 = pfVar11[1];
          fVar18 = -(fVar14 * fVar16) + fVar13 * fVar19 + fVar17 * fVar15;
          fVar21 = (fVar14 * fVar17 - fVar13 * fVar20) + fVar16 * fVar15;
          fVar22 = -(fVar19 * fVar17) + fVar16 * fVar20 + fVar13 * fVar15;
          fVar13 = (-(fVar19 * fVar16) - fVar17 * fVar20) - fVar13 * fVar14;
          fVar16 = pfVar11[5];
          pfVar8[4] = pfVar11[4] +
                      ((-(fVar14 * fVar21) + fVar15 * fVar18 + fVar19 * fVar22) - fVar20 * fVar13);
          pfVar8[5] = fVar16 + (((fVar15 * fVar21 + fVar14 * fVar18) - fVar20 * fVar22) -
                               fVar19 * fVar13);
          pfVar8[6] = pfVar11[6] +
                      (((fVar20 * fVar21 - fVar19 * fVar18) + fVar15 * fVar22) - fVar14 * fVar13);
          fVar18 = pfVar12[2];
          fVar17 = pfVar12[3];
          fVar13 = *pfVar12;
          fVar16 = pfVar12[1];
          *pfVar8 = (fVar20 * fVar17 + fVar13 * fVar15 + fVar18 * fVar19) - fVar16 * fVar14;
          pfVar8[1] = -(fVar20 * fVar18) + fVar16 * fVar15 + fVar17 * fVar19 + fVar13 * fVar14;
          pfVar8[2] = ((fVar20 * fVar16 + fVar18 * fVar15) - fVar13 * fVar19) + fVar17 * fVar14;
          pfVar8[3] = ((-(fVar20 * fVar13) + fVar17 * fVar15) - fVar16 * fVar19) - fVar18 * fVar14;
          uVar6 = uVar9;
          if (*(uint *)(param_1 + 0x30) <= uVar9) {
            uVar6 = 0;
          }
          *(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar6) =
               *(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar6) & 0xf7;
          uVar6 = uVar9;
          if (*(uint *)(param_1 + 0x30) <= uVar9) {
            uVar6 = 0;
          }
          *(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar6) =
               *(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar6) & 0xfd;
        }
        uVar6 = uVar9;
      } while (param_2 != uVar9);
    }
  }
LAB_03efa0a4:
  if (*(uint *)(param_1 + 0x20) <= param_2) {
    param_2 = 0;
  }
  return *(long *)(param_1 + 0x28) + (long)(int)param_2 * 0x1c;
}

