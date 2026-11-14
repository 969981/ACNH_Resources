
void FUN_01c6e800(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((char)param_1[0x21] != '\0') {
    *param_1 = (long)(PTR_DAT_04bc0fd8 + 0x10);
    if (param_1[0x18] != 0) {
      param_1[0x19] = param_1[0x18];
      FUN_00187e4c();
    }
    puVar3 = (undefined8 *)param_1[0xf];
    if (puVar3 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)param_1[0x10];
      puVar1 = puVar3;
      if (puVar2 != puVar3) {
        do {
          puVar2 = puVar2 + -5;
          (**(code **)*puVar2)(puVar2);
        } while (puVar2 != puVar3);
        puVar1 = (undefined8 *)param_1[0xf];
      }
      param_1[0x10] = (long)puVar3;
      FUN_00187e4c(puVar1);
    }
    if (param_1[6] != 0) {
      param_1[7] = param_1[6];
      FUN_00187e4c();
    }
    if (param_1[2] != 0) {
      param_1[3] = param_1[2];
      FUN_00187e4c();
    }
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  return;
}

