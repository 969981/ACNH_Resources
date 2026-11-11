
void FUN_00389888(undefined1 param_1 [16],float param_2,long param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((*(byte *)(param_3 + 0x62) >> 1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x98);
    param_4[3] = *(undefined8 *)(param_3 + 0x88);
    param_4[5] = uVar2;
    param_4[1] = *(undefined8 *)(param_3 + 0x78);
    *param_4 = *(undefined8 *)(param_3 + 0x70);
    uVar2 = *(undefined8 *)(param_3 + 0x80);
    param_4[4] = *(undefined8 *)(param_3 + 0x90);
    param_4[2] = uVar2;
    fVar4 = (float)FUN_0037d114(param_3);
    lVar3 = *(long *)(param_3 + 0x138);
  }
  else {
    FUN_0038cdc0(param_4,param_5);
    fVar4 = (float)FUN_0037d114(param_3);
    lVar3 = *(long *)(param_3 + 0x138);
  }
  fVar6 = 0.0;
  fVar5 = 0.0;
  if (lVar3 == 0) {
    fVar5 = 0.0;
    bVar1 = *(byte *)(param_3 + 0x116);
    if ((bVar1 & 3) == 2) {
      fVar5 = *(float *)(param_3 + 0x50);
      bVar1 = bVar1 >> 2 & 3;
      if ((*(ushort *)(param_3 + 0x114) & 0x1000) != 0) {
        bVar1 = 0;
      }
    }
    else {
      if ((bVar1 & 3) == 0) {
        fVar5 = *(float *)(param_3 + 0x50) * 0.5;
      }
      bVar1 = bVar1 >> 2 & 3;
      if ((*(ushort *)(param_3 + 0x114) & 0x1000) != 0) {
        bVar1 = 0;
      }
    }
    if (bVar1 == 2) {
      fVar6 = *(float *)(param_3 + 0x54);
    }
    else {
      fVar6 = 0.0;
      if (bVar1 == 0) {
        fVar6 = *(float *)(param_3 + 0x54) * 0.5;
      }
    }
  }
  fVar4 = fVar4 + fVar5;
  param_2 = param_2 - fVar6;
  fVar8 = (float)((ulong)param_4[2] >> 0x20);
  fVar7 = (float)param_4[2];
  fVar6 = (float)((ulong)*param_4 >> 0x20);
  fVar5 = (float)*param_4;
  fVar10 = (float)((ulong)param_4[4] >> 0x20);
  fVar9 = (float)param_4[4];
  param_4[5] = CONCAT44((float)((ulong)param_4[5] >> 0x20) + param_2 * fVar10 + fVar4 * fVar9,
                        (int)param_4[5]);
  param_4[4] = CONCAT44(-fVar10,fVar9);
  param_4[1] = CONCAT44((float)((ulong)param_4[1] >> 0x20) + param_2 * fVar6 + fVar4 * fVar5,
                        (int)param_4[1]);
  *param_4 = CONCAT44(-fVar6,fVar5);
  param_4[3] = CONCAT44((float)((ulong)param_4[3] >> 0x20) + param_2 * fVar8 + fVar4 * fVar7,
                        (int)param_4[3]);
  param_4[2] = CONCAT44(-fVar8,fVar7);
  return;
}

