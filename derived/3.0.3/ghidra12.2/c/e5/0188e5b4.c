
void FUN_0188e5b4(long param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (*(long *)(param_1 + 0x3d0) != 0) {
    uVar2 = *param_3;
    uVar10 = (ulong)uVar2 << 1 | 1;
    uVar8 = *(uint *)(param_1 + 0x3dc);
    uVar1 = *(uint *)(param_1 + 0x3e0) ^ *(uint *)(param_1 + 0x3e0) << 0xb;
    iVar3 = *param_2;
    uVar7 = *(uint *)(param_1 + 0x3e4);
    *(uint *)(param_1 + 0x3dc) = uVar7;
    uVar8 = uVar8 ^ uVar8 << 0xb;
    uVar6 = *(uint *)(param_1 + 1000);
    *(uint *)(param_1 + 0x3e0) = uVar6;
    uVar8 = uVar8 >> 8 ^ uVar6 >> 0x13 ^ uVar8 ^ uVar6;
    *(uint *)(param_1 + 0x3e4) = uVar8;
    uVar1 = uVar1 >> 8 ^ uVar8 >> 0x13 ^ uVar1 ^ uVar8;
    *(uint *)(param_1 + 1000) = uVar1;
    iVar4 = 0;
    if (uVar10 != 0) {
      iVar4 = (int)(CONCAT44(uVar8,uVar1) / uVar10);
    }
    uVar2 = ((uVar1 - iVar4 * (int)uVar10) - uVar2) + iVar3;
    lVar9 = *(long *)(param_1 + 0x408);
    if (lVar9 == 0) {
      fVar11 = 0.0;
    }
    else {
      pfVar5 = (float *)(**(code **)(*(long *)(lVar9 + 0x128) + 0xf0))(lVar9 + 0x128);
      fVar11 = *pfVar5;
      uVar7 = *(uint *)(param_1 + 0x3dc);
      uVar6 = *(uint *)(param_1 + 0x3e0);
      uVar8 = *(uint *)(param_1 + 0x3e4);
      uVar1 = *(uint *)(param_1 + 1000);
    }
    uVar7 = uVar7 ^ uVar7 << 0xb;
    *(uint *)(param_1 + 0x3dc) = uVar6;
    *(uint *)(param_1 + 0x3e0) = uVar8;
    *(uint *)(param_1 + 0x3e4) = uVar1;
    uVar1 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
    uVar10 = (ulong)(uVar2 >> 0x18);
    *(uint *)(param_1 + 1000) = uVar1;
    lVar9 = *(long *)(param_1 + 0x300);
    fVar14 = (float)(&DAT_04199798)[uVar10 * 4];
    fVar17 = (float)(&DAT_0419979c)[uVar10 * 4];
    fVar12 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
    fVar15 = (float)(&DAT_041997a0)[uVar10 * 4];
    fVar18 = (float)(&DAT_041997a4)[uVar10 * 4];
    fVar11 = fVar11 * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0);
    fVar16 = *(float *)(lVar9 + 0x278);
    fVar13 = *(float *)(lVar9 + 0x280);
    *(float *)(param_1 + 0x32c) = *(float *)(lVar9 + 0x27c) + 0.0;
    *(float *)(param_1 + 0x328) = fVar16 + (fVar14 + fVar12 * fVar17) * fVar11;
    *(float *)(param_1 + 0x330) = fVar13 + (fVar15 + fVar12 * fVar18) * fVar11;
  }
  return;
}

