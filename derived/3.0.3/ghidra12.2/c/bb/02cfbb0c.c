
void FUN_02cfbb0c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar4 = PTR_DAT_04bd4738;
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
  param_1[0x35] = (long)(puVar4 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != (undefined8 *)0x0) {
    bVar7 = *(byte *)((long)param_3 + 0xe);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar7;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 2);
  }
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04ab9a48;
  param_1[0x44] = 0;
  uVar2 = *(undefined4 *)PTR_DAT_04bb3238;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((long)param_1 + 0x22c) = uVar2;
  if (((*PTR_DAT_04bc5e30 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc5e30), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc5e28 = PTR_DAT_04bc5020 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc5e30);
  }
  if ((param_3 == (undefined8 *)0x0) ||
     (uVar6 = (**(code **)*param_3)(param_3,PTR_DAT_04bc5e28), (uVar6 & 1) == 0)) {
    iVar5 = (int)param_1[0x44];
  }
  else {
    iVar5 = *(int *)((long)param_3 + 0x14);
    *(int *)(param_1 + 0x44) = iVar5;
    *(undefined4 *)((long)param_1 + 0x224) = *(undefined4 *)(param_3 + 3);
  }
  if ((iVar5 == 0) && (sVar3 = *(short *)PTR_DAT_04bb6298, sVar3 != -1)) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      *(undefined4 *)(param_1 + 0x44) = 3;
    }
  }
  return;
}

