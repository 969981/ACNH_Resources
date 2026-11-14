
void FUN_01c676e0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uStack_31;
  
  if (((long *)param_1[0x97] != (long *)0x0) && (param_1[0x98] != 0)) {
    (**(code **)(*(long *)param_1[0x97] + 0x38))();
  }
  FUN_01c67860(param_1 + 0x6e);
  if ((char)param_1[0x6d] != '\0') {
    *(undefined1 *)(param_1 + 0x6d) = 0;
  }
  if ((char)param_1[0x5c] != '\0') {
    if ((char)param_1[0x5b] != '\0') {
      *(undefined1 *)(param_1 + 0x5b) = 0;
    }
    if (*(uint *)(param_1 + 0x54) != 0xffffffff) {
      (*(code *)(&PTR_LAB_04a42808)[*(uint *)(param_1 + 0x54)])(&uStack_31,param_1 + 0x2e);
    }
    *(undefined1 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  }
  if ((char)param_1[0x2c] != '\0') {
    puVar3 = (undefined8 *)param_1[0x22];
    param_1[0x19] = (long)&PTR_LAB_04a428d8;
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
      param_1[0x23] = (long)puVar3;
      FUN_00187e4c(puVar1);
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  if ((char)param_1[0x18] != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  *param_1 = (long)(PTR_DAT_04bc0ec0 + 0x10);
  FUN_038e1c80(param_1 + 0xd);
  puVar3 = (undefined8 *)param_1[9];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[10];
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -5;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[9];
    }
    param_1[10] = (long)puVar3;
    FUN_00187e4c(puVar1);
  }
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    *(undefined1 *)((long)param_1 + 0xc) = 0;
  }
  return;
}

