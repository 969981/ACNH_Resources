
void FUN_003f81a0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = (long)(PTR_DAT_04bd2778 + 0x10);
  if ((long *)param_1[0xc5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc5] + 8))();
  }
  puVar3 = (undefined8 *)param_1[0xc1];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0xc2];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -4;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[0xc1];
    }
    param_1[0xc2] = (long)puVar3;
    FUN_00187e4c(puVar1);
  }
  if (param_1[0xbb] != 0) {
    param_1[0xbc] = param_1[0xbb];
    FUN_00187e4c();
  }
  puVar3 = (undefined8 *)param_1[0x38];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0x39];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -4;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[0x38];
    }
    param_1[0x39] = (long)puVar3;
    FUN_00187e4c(puVar1);
  }
  param_1[0x31] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  FUN_0018b1a0(param_1 + 0x31);
  FUN_001fbac0(param_1 + 0x18);
  FUN_0019a368(param_1);
  return;
}

