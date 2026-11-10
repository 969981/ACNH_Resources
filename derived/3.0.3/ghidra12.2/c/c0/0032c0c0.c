
void FUN_0032c0c0(float param_1,undefined8 *param_2,undefined1 *param_3,undefined4 *param_4,
                 uint param_5,int param_6)

{
  undefined4 *puVar1;
  float fVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((param_5 == 1) || (param_1 < (float)param_4[3])) {
    *(undefined4 *)param_2 = *param_4;
    *(undefined4 *)((long)param_2 + 4) = param_4[1];
    *(undefined4 *)(param_2 + 1) = param_4[2];
    return;
  }
  puVar1 = param_4 + ((long)(int)param_5 + -1) * 4;
  if ((float)puVar1[3] <= param_1) {
    *(undefined4 *)param_2 = *puVar1;
    *(undefined4 *)((long)param_2 + 4) = puVar1[1];
    *(undefined4 *)(param_2 + 1) = puVar1[2];
    *param_3 = 1;
  }
  else {
    lVar4 = (ulong)(param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)) + 1;
    puVar3 = (undefined8 *)(param_4 + -4);
    fVar7 = (float)param_4[3];
    do {
      fVar6 = fVar7;
      puVar5 = puVar3;
      lVar4 = lVar4 + -1;
      if (lVar4 == 0) {
        FUN_0032c410((double)param_1,"[ERROR] Current key frame value (%f) is invalid !!!");
        return;
      }
      fVar7 = *(float *)((long)puVar5 + 0x2c);
      puVar3 = puVar5 + 2;
    } while ((param_1 < fVar6) || (fVar7 <= param_1));
    if (param_6 == 1) {
      *(undefined4 *)param_2 = *(undefined4 *)puVar3;
      *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)((long)puVar5 + 0x14);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar5 + 3);
      return;
    }
    if (param_6 == 0) {
      fVar2 = *(float *)(puVar5 + 3);
      fVar6 = (param_1 - fVar6) / (fVar7 - fVar6);
      fVar7 = *(float *)(puVar5 + 5);
      fVar8 = (float)*puVar3;
      fVar9 = (float)((ulong)*puVar3 >> 0x20);
      *param_2 = CONCAT44(fVar9 + ((float)((ulong)puVar5[4] >> 0x20) - fVar9) * fVar6,
                          fVar8 + ((float)puVar5[4] - fVar8) * fVar6);
      *(float *)(param_2 + 1) = fVar2 + (fVar7 - fVar2) * fVar6;
      return;
    }
  }
  return;
}

