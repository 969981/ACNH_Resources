
void FUN_00408c00(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = (long)(PTR_DAT_04bd2918 + 0x10);
  FUN_00408d10(param_1 + 0x20);
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
  FUN_0019d9e8(param_1 + 0x14);
  param_1[0xe] = (long)&PTR_LAB_04a42898;
  if (param_1[0x10] != 0) {
    param_1[0x11] = param_1[0x10];
    FUN_00187e4c();
  }
  param_1[9] = (long)&PTR_LAB_04a42898;
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    FUN_00187e4c();
  }
  param_1[4] = (long)&PTR_LAB_04a426b8;
  FUN_0018b1a0(param_1 + 4);
  return;
}

