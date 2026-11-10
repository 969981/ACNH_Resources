
void FUN_00299c30(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((undefined8 *)param_1[1] != param_1) {
    puVar2 = (undefined8 *)param_1[1];
    do {
      iVar1 = *(int *)((long)param_1 + 0x2c);
      puVar3 = (undefined8 *)puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_002236e0(param_1 + 3,param_1 + 3,(long)iVar1 + (long)puVar2);
      puVar2 = puVar3;
    } while (puVar3 != param_1);
  }
  FUN_002236b0(param_1);
  return;
}

