
void FUN_00454030(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = 0x208008;
  param_1[1] = param_2;
  lVar2 = (param_6 - (long)param_5) * 0x10000000 >> 0x20;
  iVar4 = (int)((ulong)(param_6 - (long)param_5) >> 4);
  if (3 < iVar4) {
    lVar2 = 4;
  }
  param_1[4] = param_4;
  param_1[7] = lVar2;
  param_1[6] = 0;
  param_1[2] = param_3;
  param_1[3] = param_1 + 6;
  if (0 < iVar4) {
    param_1[8] = *param_5;
    *(undefined8 *)(param_1[3] + 0x18) = param_5[1];
    if (1 < lVar2) {
      lVar5 = 0;
      lVar6 = 1;
      do {
        *(undefined8 *)(param_1[3] + lVar5 + 0x20) = *(undefined8 *)((long)param_5 + lVar5 + 0x10);
        lVar3 = lVar5 + 0x18;
        lVar6 = lVar6 + 1;
        lVar1 = param_1[3] + lVar5;
        lVar5 = lVar5 + 0x10;
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)((long)param_5 + lVar3);
      } while (lVar6 < lVar2);
    }
  }
  return;
}

