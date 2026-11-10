
void FUN_002918f0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  if (*(undefined8 **)(param_1 + 0x10) != puVar1) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    do {
      iVar2 = *(int *)(param_1 + 0x34);
      puVar4 = (undefined8 *)puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_002236e0(param_1 + 0x20,param_1 + 0x20,(long)iVar2 + (long)puVar3);
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  FUN_002236b0(puVar1);
  return;
}

