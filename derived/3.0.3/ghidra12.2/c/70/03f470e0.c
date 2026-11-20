
void FUN_03f470e0(float param_1,long param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < (int)param_3) {
    uVar5 = (ulong)param_3;
    pbVar6 = (byte *)(param_2 + 2);
    do {
      bVar2 = pbVar6[-1];
      bVar1 = *pbVar6;
      fVar9 = (float)NEON_ucvtf((uint)pbVar6[-2]);
      fVar9 = fVar9 * 0.53252053;
      fVar8 = 255.0;
      if (fVar9 <= 255.0) {
        fVar8 = fVar9;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar9) {
        fVar10 = fVar8;
      }
      bVar4 = bVar2;
      if (bVar2 <= bVar1) {
        bVar4 = bVar1;
      }
      uVar7 = (uint)((float)(uint)(int)fVar10 * param_1 + (float)bVar4 * (1.0 - param_1));
      uVar3 = uVar7;
      if (bVar4 != 0) {
        fVar8 = (float)uVar7 / (float)bVar4;
        if (fVar8 <= 1.0) {
          fVar8 = 1.0;
        }
        fVar10 = fVar8 * (float)bVar2;
        fVar9 = 255.0;
        if (fVar10 <= 255.0) {
          fVar9 = fVar10;
        }
        fVar11 = 0.0;
        if (0.0 <= fVar10) {
          fVar11 = fVar9;
        }
        fVar8 = fVar8 * (float)bVar1;
        fVar9 = 255.0;
        if (fVar8 <= 255.0) {
          fVar9 = fVar8;
        }
        fVar10 = 0.0;
        if (0.0 <= fVar8) {
          fVar10 = fVar9;
        }
        uVar7 = (uint)fVar10;
        uVar3 = (int)fVar11;
      }
      *pbVar6 = (byte)uVar7;
      uVar5 = uVar5 - 1;
      pbVar6[-1] = (byte)uVar3;
      pbVar6 = pbVar6 + 4;
    } while (uVar5 != 0);
  }
  return;
}

