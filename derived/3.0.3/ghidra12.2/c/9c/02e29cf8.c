
void FUN_02e29cf8(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  
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
  if (param_3 != 0) {
    bVar4 = *(byte *)(param_3 + 0xe);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar4;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04ad36e0;
  memset(param_1 + 0x42,0,0x11c);
  *(undefined2 *)((long)param_1 + 0x334) = 0;
  *(undefined1 **)((long)param_1 + 0x32c) = &DAT_3f8000003f800000;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 **)((long)param_1 + 0x344) = &DAT_3f8000003f800000;
  *(undefined2 *)((long)param_1 + 0x34c) = 0;
  param_1[0x6a] = 0;
  lVar3 = nn::os::GetSystemTick();
  param_1[0x6b] = lVar3;
  lVar3 = nn::os::GetSystemTick();
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6c] = lVar3;
  *(undefined2 *)((long)param_1 + 0x36c) = 1;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)((long)param_1 + 0x374) = 0;
  memset(param_1 + 0x42,0,0x108);
  return;
}

