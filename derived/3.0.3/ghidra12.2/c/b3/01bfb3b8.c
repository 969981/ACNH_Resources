
void FUN_01bfb3b8(undefined8 *param_1)

{
  long lVar1;
  
  FUN_01bf7258(param_1 + 0x19);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  (**(code **)(param_1[0x2e] + 0x30))(param_1 + 0x2e);
  FUN_01c02654(*param_1);
  lVar1 = param_1[4];
  (**(code **)(**(long **)(lVar1 + 0x20) + 0xb8))();
  *(undefined2 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0xffffffff00000000;
  *(undefined8 *)(lVar1 + 0x30) = 0xffffffffffffffff;
  *(undefined4 *)(*(long *)(lVar1 + 8) + 8) = 0;
  *(undefined4 *)(*(long *)(lVar1 + 0x10) + 0x22e8) = 0;
  FUN_01b9c95c();
  *(undefined4 *)(*(long *)(lVar1 + 0x18) + 8) = 0;
  lVar1 = param_1[5];
  FUN_01bfd8a4(lVar1);
  *(undefined4 *)(lVar1 + 0x21ac) = 0;
  (**(code **)(*(long *)param_1[6] + 0x10))();
  *(undefined8 *)param_1[3] = 0;
  FUN_01bf7ffc(param_1);
  *(undefined1 *)param_1[0x4b8] = 0;
  param_1[0x4c2] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  param_1[0x4c3] = 0xffffffff;
  *(undefined1 *)param_1[0x4c6] = 0;
  return;
}

