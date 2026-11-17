
void FUN_03051d58(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != (undefined8 *)0x0) {
    bVar5 = *(byte *)((long)param_3 + 0xe);
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar5;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 2);
  }
  param_1[0x43] = 0;
  *param_1 = (long)&PTR_FUN_04af6d70;
  param_1[0x44] = (long)&DAT_04af6f78;
  *(undefined8 *)((long)param_1 + 0x22c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x234) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x49) = 1;
  param_1[0x3e] = -1;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((long)param_1 + 0x23c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x24c) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0x100;
  puVar1 = PTR_DAT_04bc5170 + 0x10;
  param_1[0x42] = 0;
  *(undefined1 *)((long)param_1 + 0x264) = 0;
  param_1[0x48] = (long)puVar1;
  puVar1 = PTR_DAT_04bc7de8;
  *(undefined8 *)((long)param_1 + 0x254) = 0;
  *(undefined8 *)((long)param_1 + 0x25c) = 0;
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc7de8), iVar3 != 0)) {
    *(undefined **)PTR_DAT_04bc7de0 = PTR_DAT_04bc5020 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7de8);
  }
  if (((param_3 != (undefined8 *)0x0) &&
      (uVar4 = (**(code **)*param_3)(param_3,PTR_DAT_04bc7de0), (uVar4 & 1) != 0)) &&
     (param_3[3] != 0)) {
    param_1[0x44] = param_3[3];
  }
  return;
}

