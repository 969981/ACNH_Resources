
void FUN_003f21b0(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04bd2640 + 0xa8;
  *param_1 = (long)(PTR_DAT_04bd2640 + 0x10);
  param_1[0x14] = (long)puVar1;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  param_1[0x49] = (long)(PTR_DAT_04bd2658 + 0x10);
  FUN_0019d9e8(param_1 + 0x4d);
  param_1[0x3b] = (long)&PTR_LAB_04851390;
  if (param_1[0x46] != 0) {
    param_1[0x47] = param_1[0x46];
    FUN_00187e4c();
  }
  puVar4 = (undefined8 *)param_1[0x42];
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[0x43];
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar3 = puVar3 + -0xc;
        (**(code **)*puVar3)(puVar3);
      } while (puVar3 != puVar4);
      puVar2 = (undefined8 *)param_1[0x42];
    }
    param_1[0x43] = (long)puVar4;
    FUN_00187e4c(puVar2);
  }
  param_1[0x3d] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  FUN_0018b1a0(param_1 + 0x3d);
  FUN_001fbac0(param_1 + 0x20);
  FUN_0019a368(param_1);
  return;
}

