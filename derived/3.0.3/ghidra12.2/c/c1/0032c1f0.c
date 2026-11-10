
void FUN_0032c1f0(float param_1,undefined8 *param_2,undefined1 *param_3,undefined4 *param_4)

{
  float fVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar3 = param_4[1];
  if (uVar3 != 0) {
    if (*(char *)((long)param_4 + 1) != '\0') {
      param_1 = fmodf(param_1,(float)param_4[(long)(int)(uVar3 - 1) * 4 + 6]);
      uVar3 = param_4[1];
    }
    if ((uVar3 == 1) || (param_1 < (float)param_4[6])) {
      *(undefined4 *)param_2 = param_4[3];
      *(undefined4 *)((long)param_2 + 4) = param_4[4];
      *(undefined4 *)(param_2 + 1) = param_4[5];
    }
    else {
      puVar2 = param_4 + ((long)(int)uVar3 + -1) * 4 + 3;
      if ((float)puVar2[3] <= param_1) {
        *(undefined4 *)param_2 = *puVar2;
        *(undefined4 *)((long)param_2 + 4) = puVar2[1];
        *(undefined4 *)(param_2 + 1) = puVar2[2];
        *param_3 = 1;
        return;
      }
      lVar4 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) + 1;
      puVar2 = param_4;
      fVar7 = (float)param_4[6];
      do {
        fVar6 = fVar7;
        puVar5 = puVar2;
        lVar4 = lVar4 + -1;
        if (lVar4 == 0) {
          FUN_0032c410((double)param_1,"[ERROR] Current key frame value (%f) is invalid !!!");
          return;
        }
        fVar7 = (float)puVar5[10];
        puVar2 = puVar5 + 4;
      } while ((param_1 < fVar6) || (fVar7 <= param_1));
      if (*(char *)((long)param_4 + 2) == '\x01') {
        *(undefined4 *)param_2 = puVar5[3];
        *(undefined4 *)((long)param_2 + 4) = *puVar2;
        *(undefined4 *)(param_2 + 1) = puVar5[5];
        return;
      }
      if (*(char *)((long)param_4 + 2) == '\0') {
        fVar1 = (float)puVar5[5];
        fVar6 = (param_1 - fVar6) / (fVar7 - fVar6);
        fVar7 = (float)puVar5[9];
        fVar8 = (float)*(undefined8 *)(puVar5 + 3);
        fVar9 = (float)((ulong)*(undefined8 *)(puVar5 + 3) >> 0x20);
        *param_2 = CONCAT44(fVar9 + ((float)((ulong)*(undefined8 *)(puVar5 + 7) >> 0x20) - fVar9) *
                                    fVar6,
                            fVar8 + ((float)*(undefined8 *)(puVar5 + 7) - fVar8) * fVar6);
        *(float *)(param_2 + 1) = fVar1 + (fVar7 - fVar1) * fVar6;
        return;
      }
    }
  }
  return;
}

