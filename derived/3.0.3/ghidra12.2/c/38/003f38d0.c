
void FUN_003f38d0(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04bd2698 + 0xa8;
  *param_1 = (long)(PTR_DAT_04bd2698 + 0x10);
  param_1[0x14] = (long)puVar1;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  param_1[0x53] = (long)(PTR_DAT_04bd2658 + 0x10);
  FUN_0019d9e8(param_1 + 0x57);
  param_1[0x44] = (long)&PTR_FUN_04a42c50;
  if (param_1[0x4f] != 0) {
    param_1[0x50] = param_1[0x4f];
    FUN_00187e4c();
  }
  puVar4 = (undefined8 *)param_1[0x4b];
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[0x4c];
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar3 = puVar3 + -0xc;
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar4);
      puVar2 = (undefined8 *)param_1[0x4b];
    }
    param_1[0x4c] = (long)puVar4;
    FUN_00187e4c(puVar2);
  }
  param_1[0x46] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  FUN_0018b1a0(param_1 + 0x46);
  puVar4 = (undefined8 *)param_1[0x41];
  param_1[0x38] = (long)&PTR_LAB_04a428d8;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[0x42];
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar3 = puVar3 + -5;
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar4);
      puVar2 = (undefined8 *)param_1[0x41];
    }
    param_1[0x42] = (long)puVar4;
    FUN_00187e4c(puVar2);
  }
  FUN_001fbac0(param_1 + 0x20);
  FUN_0019a368(param_1);
  return;
}

