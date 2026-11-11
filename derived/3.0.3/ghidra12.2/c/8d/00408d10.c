
void FUN_00408d10(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[0x19];
  *param_1 = (long)(PTR_DAT_04bd2920 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0x1a];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -5;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[0x19];
    }
    param_1[0x1a] = (long)puVar3;
    FUN_00187e4c(puVar1);
  }
  FUN_0019d9e8(param_1 + 0x12);
  param_1[0xc] = (long)&PTR_LAB_04a42898;
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    FUN_00187e4c();
  }
  param_1[7] = (long)&PTR_LAB_04a42898;
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    FUN_00187e4c();
  }
  param_1[2] = (long)&PTR_LAB_04a426b8;
  FUN_0018b1a0(param_1 + 2);
  return;
}

