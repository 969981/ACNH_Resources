
void FUN_002e8730(undefined4 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)(param_1 + 2);
  *param_1 = 0;
  if (*(undefined8 **)(param_1 + 4) != puVar1) {
    puVar3 = *(undefined8 **)(param_1 + 4);
    do {
      iVar2 = param_1[0xd];
      puVar4 = (undefined8 *)puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_002236e0(param_1 + 8,param_1 + 8,(long)iVar2 + (long)puVar3);
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  FUN_002236b0(puVar1);
  return;
}

