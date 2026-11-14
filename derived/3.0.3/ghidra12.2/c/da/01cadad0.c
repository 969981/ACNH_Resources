
void FUN_01cadad0(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = (long)(PTR_DAT_04bc0fd8 + 0x10);
  if (param_2[0x18] != 0) {
    param_2[0x19] = param_2[0x18];
    FUN_00187e4c();
  }
  puVar3 = (undefined8 *)param_2[0xf];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_2[0x10];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -5;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_2[0xf];
    }
    param_2[0x10] = (long)puVar3;
    FUN_00187e4c(puVar1);
  }
  if (param_2[6] != 0) {
    param_2[7] = param_2[6];
    FUN_00187e4c();
  }
  if (param_2[2] == 0) {
    return;
  }
  param_2[3] = param_2[2];
  FUN_00187e4c();
  return;
}

