
void FUN_01c11b5c(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  long *__s;
  undefined4 local_70 [2];
  long local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined4 *)(param_1 + 2) = 0xb;
  *(undefined4 *)(param_1 + 8) = 0x40;
  uVar1 = (long)param_1 + 0xf6;
  __s = param_1 + 0x1c;
  *__s = 0;
  puVar4 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[6] = (long)(puVar4 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  param_1[0x11] = (long)(puVar4 + 0x10);
  param_1[0x12] = (long)param_1 + 0x9c;
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0xee) = 0;
  *param_1 = (long)&PTR_LAB_04917d78;
  param_1[1] = (long)__s;
  uVar2 = uVar1;
  if (uVar1 <= (long)param_1 + 0xe2U) {
    uVar2 = (long)param_1 + 0xe2U;
  }
  memset(__s,0,((uVar2 - (long)param_1) - 0xe1 & 0xfffffffffffffffe) + 2);
  local_68 = param_2 + 0x20;
  local_70[0] = 10;
  if (uVar1 <= ((ulong)__s | 2)) {
    uVar1 = (ulong)__s | 2;
  }
  memset(__s,0,(uVar1 + ~(ulong)__s & 0xfffffffffffffffe) + 2);
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = -0x100000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  local_50 = 0;
  local_38 = 1;
  local_34 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_60 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_58 = 0;
  FUN_02906b00(&local_60,param_1,local_70);
  iVar3 = *(int *)(param_2 + 0x34);
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x40))(param_1);
  uVar6 = 1;
  if (iVar3 == 1) {
    uVar6 = 2;
  }
  *puVar5 = uVar6;
  return;
}

