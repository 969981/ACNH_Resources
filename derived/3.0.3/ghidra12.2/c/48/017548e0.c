
void FUN_017548e0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,long param_7)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_7 + 4);
  *(float *)(param_7 + 0x410) = *(float *)(param_7 + 0x410) + param_6 * 0.033333335;
  if (0 < iVar1) {
    uVar2 = 0;
    pfVar3 = (float *)(param_7 + 0x24);
    do {
      if (0.0 < pfVar3[3]) {
        fVar4 = (float)(int)uVar2 / (float)iVar1;
        fVar4 = fVar4 * fVar4;
        *pfVar3 = param_1 * param_4 * fVar4 * 0.033333335 + *pfVar3;
        pfVar3[1] = param_2 * param_4 * fVar4 * 0.033333335 + pfVar3[1];
        pfVar3[2] = param_3 * param_4 * fVar4 * 0.033333335 + pfVar3[2];
        if (uVar2 == iVar1 - 1) {
          fVar5 = sinf(*(float *)(param_7 + 0x410));
          *pfVar3 = *pfVar3 + fVar4 * param_1 * param_5 * fVar5 * 0.033333335;
          pfVar3[1] = pfVar3[1] + fVar4 * param_2 * param_5 * fVar5 * 0.033333335;
          pfVar3[2] = fVar4 * param_3 * param_5 * fVar5 * 0.033333335 + pfVar3[2];
          iVar1 = *(int *)(param_7 + 4);
        }
        if (uVar2 == iVar1 - 2) {
          fVar5 = sinf(*(float *)(param_7 + 0x410));
          *pfVar3 = *pfVar3 + fVar4 * param_1 * param_5 * fVar5 * 0.033333335;
          pfVar3[1] = pfVar3[1] + fVar4 * param_2 * param_5 * fVar5 * 0.033333335;
          pfVar3[2] = fVar4 * param_3 * param_5 * fVar5 * 0.033333335 + pfVar3[2];
          iVar1 = *(int *)(param_7 + 4);
        }
      }
      uVar2 = uVar2 + 1;
      pfVar3 = pfVar3 + 10;
    } while ((long)uVar2 < (long)iVar1);
  }
  return;
}

