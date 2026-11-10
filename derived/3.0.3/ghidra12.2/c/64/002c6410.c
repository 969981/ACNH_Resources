
void FUN_002c6410(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  param_1[2] = 0;
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  FUN_002236b0(puVar3);
  puVar4 = param_1 + 4;
  *puVar4 = 0;
  param_1[5] = 0;
  FUN_002236b0(puVar4);
  lVar5 = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  lVar7 = 0x20;
  param_1[7] = (long)param_1 + 0x44;
  *(undefined4 *)(param_1 + 8) = 0x20;
  do {
    iVar2 = *(int *)((long)param_1 + 0x34);
    puVar1 = (undefined8 *)(param_1[7] + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_002236bc(puVar4,puVar4,(long)puVar1 + (long)iVar2);
    lVar7 = lVar7 + -1;
    lVar5 = lVar5 + 0xa8;
  } while (lVar7 != 0);
  *param_1 = &PTR_FUN_048486f8;
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != puVar3) {
    iVar2 = *(int *)((long)param_1 + 0x34);
    puVar6 = (undefined8 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_002236e0(puVar4,puVar4,(long)iVar2 + (long)puVar1);
    puVar1 = puVar6;
  }
  FUN_002236b0(puVar3);
  return;
}

