
void FUN_01c67860(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[0x25];
  *param_1 = &PTR_FUN_04a427a8;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0x26];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -7;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[0x25];
    }
    param_1[0x26] = puVar3;
    FUN_00187e4c(puVar1);
  }
  puVar3 = (undefined8 *)param_1[0x22];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0x23];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -5;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[0x22];
    }
    param_1[0x23] = puVar3;
    FUN_00187e4c(puVar1);
  }
  param_1[0x17] = &PTR_LAB_04a42898;
  if (param_1[0x19] != 0) {
    param_1[0x1a] = param_1[0x19];
    FUN_00187e4c();
  }
  param_1[0x12] = &PTR_LAB_04a42898;
  if (param_1[0x14] != 0) {
    param_1[0x15] = param_1[0x14];
    FUN_00187e4c();
  }
  FUN_0019d9e8(param_1 + 0xb);
  param_1[5] = &PTR_LAB_04a426b8;
  FUN_0018b1a0(param_1 + 5);
  return;
}

