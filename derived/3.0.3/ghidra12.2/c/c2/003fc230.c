
void FUN_003fc230(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = (long)(PTR_DAT_04bd2860 + 0x10);
  if ((long *)param_1[0x54] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x54] + 8))();
  }
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 8))();
  }
  if (param_1[0x4f] != 0) {
    FUN_00187e4c();
  }
  FUN_003fc310(param_1 + 0x3f);
  puVar3 = (undefined8 *)param_1[0x3c];
  param_1[0x37] = (long)&PTR_LAB_04a428b8;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0x3d];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -5;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[0x3c];
    }
    param_1[0x3d] = (long)puVar3;
    FUN_00187e4c(puVar1);
  }
  FUN_001fbac0(param_1 + 0x1f);
  FUN_0019a368(param_1);
  return;
}

