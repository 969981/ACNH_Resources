
void FUN_03817664(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  
  param_1[8] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x80;
  *(undefined1 *)((long)param_1 + 100) = 0;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  *(undefined1 *)((long)param_1 + 0xe3) = 0;
  *(undefined1 *)((long)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x80;
  *(undefined1 *)((long)param_1 + 0x17b) = 0;
  param_1[10] = puVar1;
  param_1[0xb] = (undefined1 *)((long)param_1 + 100);
  param_1[0x1d] = puVar1;
  param_1[0x1e] = (undefined1 *)((long)param_1 + 0xfc);
  *param_1 = &PTR_LAB_04b5b7d0;
  param_1[1] = 0;
  uVar3 = nn::os::GetSystemTick();
  *(undefined4 *)(param_1 + 0x32) = 0;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  *(undefined4 *)(param_1 + 0x3b) = 0xffff0000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  *(undefined1 *)((long)param_1 + 0x194) = 0xff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar2 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  *(uint *)(param_1 + 0x30) = uVar3;
  param_1[0x49] = &PTR_FUN_04ba8ad8;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  param_1[0x4c] = &PTR_FUN_04ba93e0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((long)param_1 + 0x254) = 0;
  param_1[0x4b] = 0;
  *(uint *)((long)param_1 + 0x184) = uVar2;
  *(uint *)(param_1 + 0x31) = uVar3;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  *(uint *)((long)param_1 + 0x18c) = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  uVar3 = nn::os::GetSystemTick();
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)(param_1 + 0x30) = uVar3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0x184) = uVar3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0x31) = uVar3;
  *(uint *)((long)param_1 + 0x18c) = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  return;
}

