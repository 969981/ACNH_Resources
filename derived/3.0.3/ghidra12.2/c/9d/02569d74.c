
void FUN_02569d74(undefined8 *param_1,int param_2)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((long)param_1 + 0x6dc) = 0x400000004;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = FUN_0251e98c(1);
  pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x150) + 0xf0))(lVar1 + 0x150);
  fVar8 = *pfVar2;
  pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x180) + 0xf0))(lVar1 + 0x180);
  fVar9 = *pfVar2;
  pfVar2 = (float *)(**(code **)(*(long *)(lVar1 + 0x1b0) + 0xf0))(lVar1 + 0x1b0);
  fVar4 = *pfVar2;
  if (fVar9 <= fVar4) {
    fVar9 = fVar4 * 1.5;
  }
  fVar3 = *(float *)((long)param_1 + 0x3c);
  if (fVar3 != 0.0) {
    fVar5 = 0.0;
    fVar6 = 0.0 - fVar3;
    fVar7 = -fVar6;
    if (0.0 <= fVar6) {
      fVar7 = fVar6;
    }
    if (fVar4 < fVar7) {
      fVar8 = fVar8 * fVar6;
      fVar5 = fVar4;
      if (fVar6 <= 0.0) {
        fVar5 = -fVar9;
        fVar9 = -fVar4;
      }
      if (fVar8 <= fVar9) {
        fVar9 = fVar8;
      }
      if (fVar5 <= fVar8) {
        fVar5 = fVar9;
      }
      fVar5 = fVar3 + fVar5;
    }
    *(float *)((long)param_1 + 0x3c) = fVar5;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xdb) = 4;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x6f4) = 0;
  *(undefined8 *)((long)param_1 + 0x704) = 0;
  param_1[0xff] = 0;
  memset((void *)((long)param_1 + 0x43c),0,0x29c);
  *(int *)(param_1 + 0xdd) = param_2;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0xe0) = 1;
  }
  return;
}

