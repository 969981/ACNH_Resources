
void FUN_01e9fc50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  *param_1 = &PTR_FUN_04a5e430;
  piVar3 = *(int **)PTR_DAT_04bb47d0;
  if ((piVar3 != (int *)0x0) &&
     ((*piVar3 != 0 || piVar3[2] != 0) && *piVar3 == *(int *)(param_1 + 0x1134))) {
    *(undefined1 *)(piVar3 + 0x2c) = 1;
  }
  puVar1 = (undefined8 *)param_1[0x1139];
  while (puVar1 != param_1 + 0x1138) {
    puVar2 = puVar1 + -2;
    puVar1 = (undefined8 *)puVar1[1];
    (**(code **)*puVar2)();
  }
  FUN_03ebae78(param_1 + 0x1102);
  param_1[0x1121] = &PTR_FUN_0498d548;
  param_1[0x111c] = &PTR_FUN_0498d548;
  param_1[0x1117] = &PTR_FUN_0498d548;
  param_1[0x1112] = &PTR_FUN_0498d548;
  param_1[0x110d] = &PTR_FUN_0498d548;
  puVar1 = param_1 + 0x106c;
  do {
    puVar1 = (undefined8 *)puVar1[1];
  } while (puVar1 != param_1 + 0x106c);
  param_1[0x1024] = &PTR_LAB_04983720;
  FUN_01bfff88(param_1 + 0xfec);
  param_1[0xf8b] = &PTR_LAB_04a6eed8;
  FUN_03ebae78(param_1 + 0xf8d);
  FUN_03ebae78(param_1 + 0xf96);
  param_1[0xf6a] = &PTR_FUN_0498d548;
  param_1[0xf01] = &PTR_FUN_0498d548;
  param_1[0xf22] = &PTR_LAB_04a5ec88;
  FUN_00905440(param_1 + 0xee5);
  puVar1 = (undefined8 *)param_1[0xae0];
  while (puVar1 != param_1 + 0xadf) {
    puVar2 = puVar1 + -2;
    puVar1 = (undefined8 *)puVar1[1];
    (**(code **)*puVar2)();
  }
  (**(code **)(*(long *)param_1[0x2f] + 0x20))();
  param_1[0x2f] = 0;
  return;
}

