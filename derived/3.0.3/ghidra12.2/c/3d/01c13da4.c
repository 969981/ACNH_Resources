
void FUN_01c13da4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *__s;
  undefined4 local_80 [2];
  long local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined4 *)(param_1 + 2) = 0xb;
  *(undefined4 *)(param_1 + 8) = 0x40;
  uVar1 = (long)param_1 + 0xf6;
  __s = param_1 + 0x1c;
  *__s = 0;
  puVar3 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[6] = puVar3 + 0x10;
  param_1[7] = (long)param_1 + 0x44;
  param_1[0x11] = puVar3 + 0x10;
  param_1[0x12] = (long)param_1 + 0x9c;
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0xee) = 0;
  *param_1 = &PTR_LAB_04917d78;
  param_1[1] = __s;
  uVar2 = uVar1;
  if (uVar1 <= (long)param_1 + 0xe2U) {
    uVar2 = (long)param_1 + 0xe2U;
  }
  memset(__s,0,((uVar2 - (long)param_1) - 0xe1 & 0xfffffffffffffffe) + 2);
  local_78 = param_2 + 4;
  local_80[0] = 10;
  *(undefined4 *)(param_1 + 0x1f) = 2;
  if (uVar1 <= ((ulong)__s | 2)) {
    uVar1 = (ulong)__s | 2;
  }
  memset(__s,0,(uVar1 + ~(ulong)__s & 0xfffffffffffffffe) + 2);
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  local_60 = 0;
  local_48 = 1;
  local_44 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_70 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_68 = 0;
  FUN_02906b00(&local_70,param_1,local_80);
  uVar4 = 2;
  if (*(byte *)(param_2 + 0x18) < 4) {
    uVar4 = (uint)*(byte *)(param_2 + 0x18);
  }
  *(uint *)(param_1 + 0x1f) = uVar4;
  return;
}

