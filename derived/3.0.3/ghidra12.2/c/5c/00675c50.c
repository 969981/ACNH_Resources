
void FUN_00675c50(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,int param_4,
                 undefined4 *param_5,uint param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  param_4 = param_4 * 3;
  if (0 < param_4) {
    do {
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((long)param_3 + 0xc);
      *param_1 = *param_3;
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(undefined4 *)((long)param_1 + 0xc) = uVar4;
      param_4 = param_4 + -1;
      param_3 = param_3 + 2;
      param_1 = param_1 + 2;
    } while (param_4 != 0);
  }
  if (0 < (int)param_6) {
    uVar2 = param_6 & 3;
    if (2 < param_6 - 1) {
      iVar6 = uVar2 - param_6;
      puVar5 = param_2;
      do {
        *puVar5 = *param_5;
        puVar5[1] = param_5[1];
        puVar5[2] = param_5[2];
        puVar1 = param_5 + 3;
        param_5 = param_5 + 4;
        param_2 = puVar5 + 4;
        puVar5[3] = *puVar1;
        iVar6 = iVar6 + 4;
        puVar5 = param_2;
      } while (iVar6 != 0);
    }
    if (uVar2 != 0) {
      iVar6 = -uVar2;
      do {
        iVar6 = iVar6 + 1;
        *param_2 = *param_5;
        param_2 = param_2 + 1;
        param_5 = param_5 + 1;
      } while (iVar6 != 0);
    }
  }
  return;
}

