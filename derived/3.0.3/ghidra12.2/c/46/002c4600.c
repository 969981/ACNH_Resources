
void FUN_002c4600(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_40 [16];
  
  puVar1 = (undefined8 *)(param_1 + 0x80);
  if (*(undefined8 **)(param_1 + 0x88) != puVar1) {
    puVar2 = *(undefined8 **)(param_1 + 0x88);
    do {
      puVar3 = (undefined8 *)puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_002236e0(param_1 + 0x98,param_1 + 0x98,(long)*(int *)(param_1 + 0xac) + (long)puVar2);
      puVar2 = puVar3;
    } while (puVar3 != puVar1);
  }
  FUN_002236b0(puVar1);
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  FUN_002c4684(auStack_40,param_1);
  return;
}

