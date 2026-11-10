
undefined8 FUN_002c4dd0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x80);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  if (*(undefined8 **)(param_1 + 0x88) != puVar1) {
    puVar3 = *(undefined8 **)(param_1 + 0x88);
    do {
      iVar2 = *(int *)(param_1 + 0xac);
      puVar4 = (undefined8 *)puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_002236e0(param_1 + 0x98,param_1 + 0x98,(long)iVar2 + (long)puVar3);
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  FUN_002236b0(puVar1);
  return 0;
}

