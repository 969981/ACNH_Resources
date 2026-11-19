
void FUN_038e2440(long *param_1,long *param_2,ThreadType *param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined4 local_58 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  
  puVar5 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[1] = 0;
  puVar5 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar8 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
    param_1[1] = lVar8;
    if (lVar8 != 0) {
      if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = lVar8 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
      }
      plVar12 = (long *)(lVar8 + 0x70);
      lVar10 = *plVar12;
      plVar1 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)param_1);
      *plVar12 = (long)plVar1;
      *plVar1 = lVar10;
      plVar1[1] = (long)plVar12;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar1;
      }
      *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
      if (lVar13 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
      }
    }
  }
  puVar4 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_04b651f0;
  param_1[0xf] = 0;
  param_1[4] = (long)(puVar4 + 0x10);
  param_1[5] = (long)"sead::MainThread";
  uVar11 = *(undefined8 *)(param_3 + 0x58);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(int *)(param_1 + 0x10) = (int)uVar11;
  param_1[0x16] = 0;
  param_1[0x18] = 0x7fffffff;
  local_38 = 0;
  *(undefined4 *)(param_1 + 0x17) = 1;
  *(undefined4 *)(param_1 + 0x19) = param_4;
  *(undefined4 *)((long)param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  uVar6 = nn::os::GetSystemTick();
  param_1[0x1f] = 0;
  uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  param_1[0x1d] = (long)param_3;
  param_1[0x1e] = 0;
  uVar3 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0xd4) = uVar6;
  *(uint *)(param_1 + 0x1b) = uVar3;
  uVar6 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0xdc) = uVar6;
  *(uint *)(param_1 + 0x1c) = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
  uVar7 = nn::os::GetThreadPriority(param_3);
  lVar8 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  param_1[0x13] = (long)param_1;
  if (lVar8 == 0) {
    puVar9 = malloc(0x100);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar8 + 8);
      if (lVar13 != 0) {
        puVar2 = (undefined8 *)(lVar13 + 0xa8);
      }
      param_2 = (long *)*puVar2;
      if (param_2 == (long *)0x0) {
        puVar9 = (ulong *)0x0;
        goto LAB_038e2614;
      }
    }
    puVar9 = (ulong *)(**(code **)(*param_2 + 0x30))(param_2,0x100,8);
  }
LAB_038e2614:
  param_1[0xf] = (long)puVar9;
  nn::os::InitializeMessageQueue((MessageQueueType *)(param_1 + 6),puVar9,0x20);
  nn::os::GetCurrentStackInfo((ulong *)&local_38,(ulong *)local_58);
  param_1[0x1f] = CONCAT44(uStack_34,local_38);
  uVar6 = *(uint *)(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x10) = local_58[0];
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)param_1[0x1d],-1,(ulong)uVar6);
  return;
}

