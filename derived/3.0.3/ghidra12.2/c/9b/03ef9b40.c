
long FUN_03ef9b40(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  uint uVar10;
  long lVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  uVar1 = param_2;
  if (uVar3 <= param_2) {
    uVar1 = 0;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar1) & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x28);
    uVar1 = param_2;
    if (*(uint *)(param_1 + 0x20) <= param_2) {
      uVar1 = 0;
    }
    puVar12 = (undefined4 *)(lVar7 + (long)(int)uVar1 * 0x1c);
    uVar2 = param_2;
    if (*(uint *)(*(long *)(param_1 + 8) + 0x18) <= param_2) {
      uVar2 = 0;
    }
    sVar4 = *(short *)(*(long *)(*(long *)(param_1 + 8) + 0x20) + (long)(int)uVar2 * 2);
    uVar10 = *(uint *)(param_1 + 0x10);
    lVar8 = *(long *)(param_1 + 0x18);
    uVar2 = param_2;
    if (uVar10 <= param_2) {
      uVar2 = 0;
    }
    if ((int)sVar4 == 0xffffffff) {
      puVar9 = (undefined4 *)(lVar8 + (long)(int)uVar2 * 0x1c);
      lVar7 = lVar7 + (long)(int)uVar1 * 0x1c;
      *puVar9 = *puVar12;
      puVar9[1] = puVar12[1];
      puVar9[2] = puVar12[2];
      puVar9[3] = puVar12[3];
      puVar9[4] = *(undefined4 *)(lVar7 + 0x10);
      puVar9[5] = *(undefined4 *)(lVar7 + 0x14);
      puVar9[6] = *(undefined4 *)(lVar7 + 0x18);
    }
    else {
      uVar5 = (uint)sVar4;
      lVar11 = lVar8 + (long)(int)uVar2 * 0x1c;
      uVar1 = uVar5;
      if (uVar3 < (uint)(int)sVar4 || uVar3 == uVar5) {
        uVar1 = 0;
      }
      fVar19 = *(float *)(lVar11 + 0x10);
      fVar17 = *(float *)(lVar11 + 0x14);
      fVar18 = *(float *)(lVar11 + 0x18);
      if ((*(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar1) >> 1 & 1) == 0) {
        iVar6 = (int)sVar4;
        if (*(uint *)(param_1 + 0x20) <= uVar5) {
          iVar6 = 0;
        }
        lVar7 = lVar7 + (long)iVar6 * 0x1c;
      }
      else {
        lVar7 = FUN_03ef9df0(param_1);
        uVar10 = *(uint *)(param_1 + 0x10);
        lVar8 = *(long *)(param_1 + 0x18);
      }
      uVar1 = param_2;
      if (uVar10 <= param_2) {
        uVar1 = 0;
      }
      FUN_03ee48b0(lVar8 + (long)(int)uVar1 * 0x1c,lVar7,puVar12);
      lVar7 = *(long *)(param_1 + 0x18);
      uVar1 = param_2;
      if (*(uint *)(param_1 + 0x10) <= param_2) {
        uVar1 = 0;
      }
      lVar8 = lVar7 + (long)(int)uVar1 * 0x1c;
      fVar13 = *(float *)(lVar8 + 0x10) - fVar19;
      fVar14 = -fVar13;
      if (0.0 <= fVar13) {
        fVar14 = fVar13;
      }
      fVar15 = *(float *)(lVar8 + 0x14) - fVar17;
      fVar13 = -fVar15;
      if (0.0 <= fVar15) {
        fVar13 = fVar15;
      }
      fVar16 = *(float *)(lVar8 + 0x18) - fVar18;
      fVar15 = -fVar16;
      if (0.0 <= fVar16) {
        fVar15 = fVar16;
      }
      if (fVar14 + 0.0 + fVar13 + fVar15 < DAT_04c4bac0 * 0.001) {
        *(float *)(lVar8 + 0x10) = fVar19;
        lVar7 = lVar7 + (long)(int)uVar1 * 0x1c;
        *(float *)(lVar7 + 0x14) = fVar17;
        *(float *)(lVar7 + 0x18) = fVar18;
      }
    }
    uVar1 = param_2;
    if (*(uint *)(param_1 + 0x30) <= param_2) {
      uVar1 = 0;
    }
    *(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar1) =
         *(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar1) & 0xfe;
  }
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    param_2 = 0;
  }
  return *(long *)(param_1 + 0x18) + (long)(int)param_2 * 0x1c;
}

