
void FUN_0285a0f4(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  
  *param_1 = 0x134b;
  FUN_0277d4ac();
  param_1[1] = 0x134b;
  FUN_0277d4ac();
  param_1[2] = 0x139b;
  FUN_0277d4ac(param_1 + 2);
  puVar2 = PTR_DAT_04bb3170;
  *(undefined2 *)((long)param_1 + 0x1e) = 0x4000;
  uVar1 = *(undefined2 *)puVar2;
  *(undefined2 *)(param_1 + 3) = uVar1;
  *(undefined2 *)((long)param_1 + 0x1a) = uVar1;
  *(undefined2 *)((long)param_1 + 0x1c) = uVar1;
  *(undefined1 *)(param_1 + 4) = 0x10;
  return;
}

