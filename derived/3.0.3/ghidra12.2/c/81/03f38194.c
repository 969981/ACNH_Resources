
void FUN_03f38194(undefined8 *param_1,int param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,uint *param_6)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_1;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_04b64428;
  param_1[1] = 0;
  if (DAT_05ae7600 != 0) {
    lVar5 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar5;
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar7 = (long *)(lVar5 + 0x70);
      lVar6 = *plVar7;
      plVar1 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)param_1);
      *plVar7 = (long)plVar1;
      *plVar1 = lVar6;
      plVar1[1] = (long)plVar7;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar1;
      }
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + 1;
      if (lVar8 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x73) = 0;
  *(undefined4 *)(param_1 + 10) = 0x20;
  param_1[9] = (undefined *)((long)param_1 + 0x54);
  if ((undefined *)((long)param_1 + 0x54) != &DAT_040a58fa) {
    *(undefined1 *)((long)param_1 + 0x56) = 0;
    *(undefined2 *)((long)param_1 + 0x54) = 0x737a;
  }
  puVar3 = PTR_DAT_04bb2028;
  param_1[0x10] = param_5;
  param_1[8] = puVar3 + 0x10;
  *param_1 = &PTR_FUN_04ba8cc8;
  FUN_03f38de4(param_1 + 0x11,param_3,param_4);
  *(uint *)(param_1 + 0xf) = param_2 + 0x1fU & 0xffffffe0;
  uVar2 = *param_6;
  *(uint *)(param_1 + 0x2b) = uVar2;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)param_1[0x2e],-1,(ulong)uVar2);
  if (*(int *)((long)param_1 + 0x154) == 0) {
    nn::os::StartThread((ThreadType *)param_1[0x2e]);
    uVar4 = nn::os::GetThreadId((ThreadType *)param_1[0x2e]);
    *(undefined4 *)(param_1 + 0x2a) = uVar4;
    if (*(int *)((long)param_1 + 0x154) == 0) {
      *(undefined4 *)((long)param_1 + 0x154) = 1;
    }
  }
  return;
}

