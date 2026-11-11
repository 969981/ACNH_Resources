
void FUN_003f7310(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = (long)(PTR_DAT_04bd2748 + 0x10);
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    FUN_00187e4c();
  }
  puVar3 = (undefined8 *)param_1[0xb];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0xc];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -0xc;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[0xb];
    }
    param_1[0xc] = (long)puVar3;
    FUN_00187e4c(puVar1);
  }
  puVar3 = (undefined8 *)param_1[8];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[9];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -0xc;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[8];
    }
    param_1[9] = (long)puVar3;
    FUN_00187e4c(puVar1);
  }
  param_1[3] = (long)&PTR_LAB_04a426b8;
  FUN_0018b1a0(param_1 + 3);
  return;
}

