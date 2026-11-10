
void FUN_00260b50(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = param_1[8];
  if (lVar3 == 0) {
    return;
  }
  if (param_1[6] == 0) {
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_1 + 7);
  }
  else {
    if ((undefined8 *)param_1[1] != param_1) {
      puVar2 = (undefined8 *)param_1[1];
      do {
        iVar1 = *(int *)((long)param_1 + 0x2c);
        puVar4 = (undefined8 *)puVar2[1];
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_002236e0(param_1 + 3,param_1 + 3,(long)iVar1 + (long)puVar2);
        puVar2 = puVar4;
      } while (puVar4 != param_1);
    }
    FUN_002236b0(param_1);
    lVar3 = param_1[8];
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_1 + 7);
    if (lVar3 == 0) goto LAB_00260bdc;
  }
  FUN_00285e00(lVar3);
  FUN_00285dc0(lVar3);
LAB_00260bdc:
  param_1[8] = 0;
  return;
}

