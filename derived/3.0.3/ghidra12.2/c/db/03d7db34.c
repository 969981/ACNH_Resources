
void FUN_03d7db34(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined *local_60;
  undefined8 *puStack_58;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *param_1 = (long)(PTR_DAT_04bcb5e8 + 0x10);
  param_1[1] = 0;
  param_1[3] = (long)puVar1;
  puVar2 = PTR_DAT_04bb2120;
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0x2e) = 0;
  param_1[4] = (long)puVar2;
  FUN_03c5a110(param_1 + 3,param_3,0xffffffff,0);
  param_1[6] = (long)puVar1;
  param_1[7] = (long)puVar2;
  *(undefined1 *)((long)param_1 + 0x46) = 0;
  puStack_58 = &DAT_0407ebb1;
  local_60 = puVar1;
  FUN_03c5a110(param_1 + 6,&local_60,0xffffffff,1);
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (**(char **)(param_4 + 8) == '\0') {
    lVar3 = FUN_03c68b00(*param_2,param_3);
  }
  else {
    lVar3 = FUN_03c688b0(*param_2,param_4);
  }
  param_1[9] = lVar3;
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) | 4;
  plVar4 = *(long **)(*(long *)(param_2[1] + 8) + 0x1d8);
  lVar3 = *plVar4;
  param_1 = (long *)((long)*(int *)((long)plVar4 + 0x14) + (long)param_1);
  *plVar4 = (long)param_1;
  *param_1 = lVar3;
  param_1[1] = (long)plVar4;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = param_1;
  }
  *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
  return;
}

