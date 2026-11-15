
void FUN_01e7b7bc(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 local_48;
  
  *param_1 = 0;
  puVar2 = PTR_DAT_04bbc1a0;
  *(undefined8 *)(param_1 + 10) = 0;
  puVar1 = PTR_DAT_04bb2010;
  param_1[0x11] = 0;
  *(undefined **)(param_1 + 2) = puVar2 + 0x10;
  *(undefined **)(param_1 + 4) = puVar1 + 0x10;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined **)(param_1 + 8) = puVar1 + 0x10;
  *(undefined8 *)(param_1 + 0xf) = 0xfffe00000000;
  FUN_0277d4ac(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0x61) = 0;
  puVar5 = (undefined8 *)(param_1 + 0x1b);
  *puVar5 = 0xfffe;
  *(undefined8 *)(param_1 + 0x12) = 0x41c8000041800000;
  *(undefined8 *)(param_1 + 0x14) = 0xbf800000bf800000;
  param_1[0x16] = 0xbf800000;
  FUN_0277d4ac(puVar5);
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((long)param_1 + 0xd3) = 0;
  puVar1 = PTR_DAT_04bb2028;
  param_1[0x2c] = 0x20;
  param_1[0x3a] = 0x20;
  *(undefined1 *)((long)param_1 + 0x10b) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  local_48 = 0xfffe;
  *(undefined **)(param_1 + 0x28) = puVar1 + 0x10;
  *(undefined4 **)(param_1 + 0x2a) = param_1 + 0x2d;
  *(undefined **)(param_1 + 0x36) = puVar1 + 0x10;
  *(undefined4 **)(param_1 + 0x38) = param_1 + 0x3b;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  FUN_0277d4ac(&local_48);
  uVar3 = (undefined4)local_48;
  uVar4 = local_48._4_4_;
  *(undefined8 *)(param_1 + 0x12) = 0x41c8000041800000;
  *(undefined8 *)(param_1 + 0x14) = 0xbf800000bf800000;
  param_1[0x16] = 0xbf800000;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0x61) = 0;
  local_48 = 0xfffe;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar4;
  FUN_0277d4ac(&local_48);
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined4 *)puVar5 = (undefined4)local_48;
  param_1[0x1c] = local_48._4_4_;
  param_1[0x1d] = 0;
  *(undefined8 *)(param_1 + 0x25) = 0;
  param_1[0x27] = 0;
  **(undefined1 **)(param_1 + 0x2a) = 0;
  **(undefined1 **)(param_1 + 0x38) = 0;
  return;
}

