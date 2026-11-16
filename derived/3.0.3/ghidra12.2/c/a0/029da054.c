
void FUN_029da054(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_04a987f8;
  uVar2 = nn::os::GetSystemTick();
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0xffffffffffffffff;
  param_1[4] = 0x1e;
  param_1[0x15] = 0xffffffffffffff9c;
  *(undefined8 *)((long)param_1 + 0x34) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x3c) = 0xffffffffffffffff;
  uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  *(undefined8 *)((long)param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x54) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  param_1[3] = (undefined8 *)((long)param_1 + 0x2c);
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0xb4) = 0;
  *(uint *)(param_1 + 1) = uVar2;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(undefined8 *)((long)param_1 + 100) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x6c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x74) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x7c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x29] = 0;
  *(uint *)(param_1 + 2) = uVar2;
  *(uint *)((long)param_1 + 0x14) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  param_1[0x26] = 0;
  param_1[0x2a] = 0xffffffff;
  param_1[0x27] = 0xffffffffffffffff;
  param_1[0x28] = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x8c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x94) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x9c) = 0xffffffffffffffff;
  uVar2 = nn::os::GetSystemTick();
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  param_1[0x2d] = 0;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  *(undefined1 *)((long)param_1 + 0x17c) = 0;
  *(uint *)(param_1 + 0x2b) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x15c) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0x2c) = uVar2;
  *(uint *)((long)param_1 + 0x164) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  param_1[0x2e] = 0xffffffffffffffff;
  return;
}

