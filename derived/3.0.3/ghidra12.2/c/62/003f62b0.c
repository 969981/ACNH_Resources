
void FUN_003f62b0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[0x1e];
  *param_1 = (long)(PTR_DAT_04bd26f8 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0x1f];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -7;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[0x1e];
    }
    param_1[0x1f] = (long)puVar3;
    FUN_00187e4c(puVar1);
  }
  puVar3 = (undefined8 *)param_1[0x1b];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0x1c];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -5;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[0x1b];
    }
    param_1[0x1c] = (long)puVar3;
    FUN_00187e4c(puVar1);
  }
  param_1[0x14] = (long)&PTR_LAB_04a42898;
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    FUN_00187e4c();
  }
  param_1[0xf] = (long)&PTR_LAB_04a42898;
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    FUN_00187e4c();
  }
  FUN_0019d9e8(param_1 + 8);
  param_1[2] = (long)&PTR_LAB_04a426b8;
  FUN_0018b1a0(param_1 + 2);
  return;
}

