
void FUN_03b612d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  MutexType *pMVar9;
  
  puVar5 = PTR_DAT_04bd1f00;
  *(undefined4 *)(param_1 + 2) = 0;
  puVar4 = PTR_DAT_04bd1ef0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar6 = PTR_DAT_04bd1f08;
  plVar1 = param_1 + 7;
  pMVar9 = (MutexType *)(param_1 + 10);
  *(undefined2 *)pMVar9 = 0;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  param_1[7] = (long)plVar1;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[1] = (long)(puVar4 + 0x10);
  param_1[3] = (long)(puVar4 + 0x10);
  param_1[5] = (long)(puVar6 + 0x10);
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = (long)plVar1;
  param_1[9] = -0x100000000;
  nn::os::InitializeMutex(pMVar9,true,0);
  *(undefined4 *)(param_1 + 6) = 0xffff;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x20;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  nn::os::LockMutex(pMVar9);
  FUN_03b55fd0(plVar1);
  *(undefined2 *)((long)param_1 + 0x32) = 0;
  nn::os::UnlockMutex(pMVar9);
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *param_1 = (long)&PTR_LAB_04b778f8;
  param_1[0x17] = (long)&DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x23) = 0xffff;
  *(undefined1 *)((long)param_1 + 0x7f) = 1;
  param_1[0x10] = (long)&PTR_LAB_04b77940;
  param_1[0x11] = (long)&DAT_3f8000003f800000;
  plVar2 = param_1 + 0x1d;
  param_1[0x13] = (long)&PTR_LAB_04b77940;
  param_1[0x14] = (long)&DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((long)param_1 + 0x7b) = 0;
  param_1[0x1b] = 0;
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x1f0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x75) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = (long)&PTR_LAB_04b77960;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = (long)plVar2;
  param_1[0x1e] = (long)plVar2;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)((long)param_1 + 0x7d) = 0;
  *(undefined1 *)((long)param_1 + 0x7e) = 0;
  *(undefined1 *)((long)param_1 + 0x7f) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x3f800000;
  plVar7 = (long *)param_1[0x12];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))();
    param_1[0x12] = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x3f800000;
  plVar7 = (long *)param_1[0x15];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))();
    param_1[0x15] = 0;
  }
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0xbc) = 0x3f800000;
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 0x10))();
    param_1[0x18] = 0;
  }
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x1f0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xda) = 0;
  plVar7 = (long *)param_1[0x1e];
  while (plVar7 != plVar2) {
    plVar8 = (long *)plVar7[1];
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7 = plVar8;
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = (long)(param_1 + 0x1d);
  param_1[0x1e] = (long)plVar2;
  uVar3 = *(ushort *)(param_1 + 0x23);
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  nn::os::LockMutex(pMVar9);
  FUN_03b55fd0(plVar1);
  *(undefined2 *)((long)param_1 + 0x32) = 0;
  nn::os::UnlockMutex(pMVar9);
  *(ushort *)(param_1 + 6) = uVar3 | 0x4000;
  return;
}

