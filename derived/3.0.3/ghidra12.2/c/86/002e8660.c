
void FUN_002e8660(undefined4 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  *param_1 = 0;
  puVar3 = (undefined8 *)(param_1 + 2);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  FUN_002236b0(puVar3);
  puVar4 = (undefined8 *)(param_1 + 8);
  *puVar4 = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  FUN_002236b0(puVar4);
  lVar5 = 0;
  param_1[0xd] = 0;
  *(undefined4 **)(param_1 + 0xe) = param_1 + 0x11;
  param_1[0x10] = 0x20;
  do {
    iVar2 = param_1[0xd];
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0xe) + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_002236bc(puVar4,puVar4,(long)puVar1 + (long)iVar2);
    lVar5 = lVar5 + 0x30;
  } while (lVar5 != 0x600);
  puVar1 = *(undefined8 **)(param_1 + 4);
  while (puVar1 != puVar3) {
    iVar2 = param_1[0xd];
    puVar6 = (undefined8 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_002236e0(puVar4,puVar4,(long)iVar2 + (long)puVar1);
    puVar1 = puVar6;
  }
  FUN_002236b0(puVar3);
  return;
}

