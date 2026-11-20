
void FUN_03f471d0(float param_1,long param_2,uint param_3)

{
  ulong uVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    pbVar2 = (byte *)(param_2 + 2);
    do {
      fVar3 = (float)NEON_ucvtf((uint)pbVar2[-2]);
      fVar3 = powf(fVar3 * 0.003921569,2.2);
      fVar4 = (float)NEON_ucvtf((uint)pbVar2[-1]);
      fVar4 = powf(fVar4 * 0.003921569,2.2);
      fVar5 = (float)NEON_ucvtf((uint)*pbVar2);
      fVar5 = powf(fVar5 * 0.003921569,2.2);
      fVar6 = fVar3 * 0.29002094 + fVar4 * -0.67671555 + fVar5 * -0.67671555 + 0.0;
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar3 = fVar3 - param_1 * 2.0359285 * fVar6;
      fVar4 = fVar4 + param_1 * 0.605185 * fVar6;
      fVar5 = fVar5 - param_1 * 0.0 * fVar6;
      fVar6 = 1.0;
      if (fVar3 < 1.0) {
        fVar6 = fVar3;
      }
      if (fVar3 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar3 = 1.0;
      if (fVar4 < 1.0) {
        fVar3 = fVar4;
      }
      if (fVar4 <= 0.0) {
        fVar3 = 0.0;
      }
      fVar4 = 1.0;
      if (fVar5 < 1.0) {
        fVar4 = fVar5;
      }
      if (fVar5 <= 0.0) {
        fVar4 = 0.0;
      }
      fVar5 = powf(fVar6,0.45454544);
      pbVar2[-2] = (byte)(int)(fVar5 * 255.0);
      fVar3 = powf(fVar3,0.45454544);
      pbVar2[-1] = (byte)(int)(fVar3 * 255.0);
      fVar3 = powf(fVar4,0.45454544);
      uVar1 = uVar1 - 1;
      *pbVar2 = (byte)(int)(fVar3 * 255.0);
      pbVar2 = pbVar2 + 4;
    } while (uVar1 != 0);
  }
  return;
}

