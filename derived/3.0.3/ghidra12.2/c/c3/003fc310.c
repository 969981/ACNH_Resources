
void FUN_003fc310(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = (long)(PTR_DAT_04bd2870 + 0x10);
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    FUN_00187e4c();
  }
  puVar3 = (undefined8 *)param_1[10];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0xb];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -0xc;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[10];
    }
    param_1[0xb] = (long)puVar3;
    FUN_00187e4c(puVar1);
  }
  puVar3 = (undefined8 *)param_1[7];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[8];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -0xc;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[7];
    }
    param_1[8] = (long)puVar3;
    FUN_00187e4c(puVar1);
  }
  param_1[2] = (long)&PTR_LAB_04a426b8;
  FUN_0018b1a0(param_1 + 2);
  return;
}

