
void FUN_002ea3f0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(undefined8 **)(param_1 + 0x20) != puVar1) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    do {
      iVar2 = *(int *)(param_1 + 0x44);
      puVar4 = (undefined8 *)puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_002236e0(param_1 + 0x30,param_1 + 0x30,(long)iVar2 + (long)puVar3);
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  FUN_002236b0(puVar1);
  puVar1 = (undefined8 *)(param_1 + 0x660);
  *(undefined4 *)(param_1 + 0x658) = 0;
  if (*(undefined8 **)(param_1 + 0x668) != puVar1) {
    puVar3 = *(undefined8 **)(param_1 + 0x668);
    do {
      iVar2 = *(int *)(param_1 + 0x68c);
      puVar4 = (undefined8 *)puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_002236e0(param_1 + 0x678,param_1 + 0x678,(long)iVar2 + (long)puVar3);
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  FUN_002236b0(puVar1);
  puVar1 = (undefined8 *)(param_1 + 0xca8);
  *(undefined4 *)(param_1 + 0xca0) = 0;
  if (*(undefined8 **)(param_1 + 0xcb0) != puVar1) {
    puVar3 = *(undefined8 **)(param_1 + 0xcb0);
    do {
      iVar2 = *(int *)(param_1 + 0xcd4);
      puVar4 = (undefined8 *)puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_002236e0(param_1 + 0xcc0,param_1 + 0xcc0,(long)iVar2 + (long)puVar3);
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  FUN_002236b0(puVar1);
  *(undefined4 *)(param_1 + 0x12e8) = 0;
  puVar1 = (undefined8 *)(param_1 + 0x12f0);
  if (*(undefined8 **)(param_1 + 0x12f8) != puVar1) {
    puVar3 = *(undefined8 **)(param_1 + 0x12f8);
    do {
      iVar2 = *(int *)(param_1 + 0x131c);
      puVar4 = (undefined8 *)puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_002236e0(param_1 + 0x1308,param_1 + 0x1308,(long)iVar2 + (long)puVar3);
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  FUN_002236b0(puVar1);
  return;
}

