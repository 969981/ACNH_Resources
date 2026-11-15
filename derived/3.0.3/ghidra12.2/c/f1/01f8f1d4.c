
void FUN_01f8f1d4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_28;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  local_28 = 0xfffe;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  FUN_0277d4ac(&local_28);
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0x61) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0x41c8000041800000;
  *(undefined8 *)(param_1 + 0x14) = 0xbf800000bf800000;
  uVar1 = (undefined4)local_28;
  uVar2 = local_28._4_4_;
  param_1[0x16] = 0xbf800000;
  local_28 = 0xfffe;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar2;
  FUN_0277d4ac(&local_28);
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined8 *)(param_1 + 0x25) = 0;
  param_1[0x27] = 0;
  param_1[0x1b] = (undefined4)local_28;
  param_1[0x1c] = local_28._4_4_;
  **(undefined1 **)(param_1 + 0x2a) = 0;
  **(undefined1 **)(param_1 + 0x38) = 0;
  return;
}

