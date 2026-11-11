
void FUN_0038ad90(float param_1,long param_2,long param_3)

{
  long lVar1;
  float *pfVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  puVar4 = PTR_SinCosSampleTable_04bcef98;
  uVar5 = (ulong)*(byte *)(*(long *)(param_2 + 0x150) + 0x12);
  if (uVar5 != 0) {
    lVar7 = 0;
    fVar11 = *(float *)PTR_FloatDegree180_04bcedf8;
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04bcef90);
    do {
      lVar1 = *(long *)(param_2 + 0x150) + lVar7;
      lVar8 = *(long *)(lVar1 + 0x20);
      uVar3 = *(uint *)(lVar1 + 0x28);
      pfVar2 = (float *)(lVar8 + (ulong)*(uint *)(lVar8 + 8));
      fVar10 = param_1;
      if ((*(char *)(*(long *)(param_2 + 0x150) + 0x10) == '\x01') && (1 < *(ushort *)(lVar8 + 4)))
      {
        fVar12 = *pfVar2;
        fVar13 = pfVar2[(ulong)(*(ushort *)(lVar8 + 4) - 1) * 3];
        if (param_1 <= fVar13) {
          if (param_1 < fVar12) {
            fVar10 = fmodf(fVar12 - param_1,fVar13 - fVar12);
            fVar10 = fVar13 - fVar10;
          }
        }
        else {
          fVar10 = fmodf(param_1 - fVar12,fVar13 - fVar12);
          fVar10 = fVar12 + fVar10;
        }
      }
      fVar10 = (float)FUN_0038c300(fVar10,pfVar2,*(undefined2 *)(lVar8 + 4));
      if ((int)uVar3 < 3) {
        fVar12 = -fVar10;
        if (uVar3 != 1) {
          fVar12 = fVar10;
        }
        *(float *)(param_3 + (ulong)uVar3 * 4 + 0x20) = fVar12;
      }
      else if (uVar3 < 6) {
        lVar1 = param_3 + (ulong)(uVar3 - 3) * 4;
        if (uVar3 != 4) {
          fVar10 = -fVar10;
        }
        uVar6 = (ulong)(fVar10 * (fVar9 / fVar11));
        pfVar2 = (float *)(puVar4 + (uVar6 >> 0x18 & 0xff) * 0x10);
        fVar10 = (float)((uint)uVar6 & 0xffffff) * 5.9604645e-08;
        *(float *)(lVar1 + 0x14) = pfVar2[1] + fVar10 * pfVar2[3];
        *(float *)(lVar1 + 8) = *pfVar2 + fVar10 * pfVar2[2];
      }
      else if (uVar3 < 10) {
        *(char *)(param_3 + (ulong)(uVar3 - 6) + 0x2c) = (char)(int)fVar10;
      }
      else if (uVar3 < 0xe) {
        *(char *)(param_3 + (ulong)(uVar3 - 10) + 0x30) = (char)(int)fVar10;
      }
      else {
        *(float *)(param_3 + (ulong)(uVar3 - 0xe) * 4) = fVar10;
      }
      lVar7 = lVar7 + 0x10;
    } while (uVar5 * 0x10 != lVar7);
  }
  return;
}

