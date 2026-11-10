
void FUN_002c9b60(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = param_1[9];
  *param_1 = &PTR_FUN_04848780;
  if (lVar4 == 0) {
    return;
  }
  if (param_1[7] != 0) {
    puVar1 = param_1 + 1;
    if ((undefined8 *)param_1[2] != puVar1) {
      puVar3 = (undefined8 *)param_1[2];
      do {
        iVar2 = *(int *)((long)param_1 + 0x34);
        puVar5 = (undefined8 *)puVar3[1];
        *puVar3 = 0;
        puVar3[1] = 0;
        FUN_002236e0(param_1 + 4,param_1 + 4,(long)iVar2 + (long)puVar3);
        puVar3 = puVar5;
      } while (puVar5 != puVar1);
    }
    FUN_002236b0(puVar1);
    lVar4 = param_1[9];
    if (lVar4 == 0) goto LAB_002c9bec;
  }
  FUN_00285e00(lVar4);
  FUN_00285dc0(lVar4);
LAB_002c9bec:
  param_1[9] = 0;
  return;
}

