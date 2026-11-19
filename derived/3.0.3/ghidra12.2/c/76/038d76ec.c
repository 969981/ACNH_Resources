
void FUN_038d76ec(undefined8 *param_1,int param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,uint *param_6)

{
  undefined2 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_1;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_04b64428;
  param_1[1] = 0;
  if (DAT_05ae7600 != 0) {
    lVar6 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar8 = (long *)(lVar6 + 0x70);
      lVar7 = *plVar8;
      plVar2 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
      *plVar8 = (long)plVar2;
      *plVar2 = lVar7;
      plVar2[1] = (long)plVar8;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 8) = plVar2;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar9 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
      }
    }
  }
  puVar1 = (undefined2 *)((long)param_1 + 0x54);
  *(undefined1 *)((long)param_1 + 0x73) = 0;
  *(undefined4 *)(param_1 + 10) = 0x20;
  param_1[9] = puVar1;
  if (puVar1 != (undefined2 *)&DAT_040ad2e5) {
    *(undefined1 *)((long)param_1 + 0x57) = 0;
    *(undefined1 *)((long)param_1 + 0x56) = 0x73;
    *puVar1 = 0x7a73;
  }
  puVar4 = PTR_DAT_04bb2028;
  param_1[0x10] = param_5;
  param_1[8] = puVar4 + 0x10;
  *param_1 = &PTR_FUN_04b64a20;
  FUN_038d8300(param_1 + 0x11,param_3,param_4);
  *(uint *)(param_1 + 0xf) = param_2 + 0x1fU & 0xffffffe0;
  uVar3 = *param_6;
  *(uint *)(param_1 + 0x2b) = uVar3;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)param_1[0x2e],-1,(ulong)uVar3);
  if (*(int *)((long)param_1 + 0x154) == 0) {
    nn::os::StartThread((ThreadType *)param_1[0x2e]);
    uVar5 = nn::os::GetThreadId((ThreadType *)param_1[0x2e]);
    *(undefined4 *)(param_1 + 0x2a) = uVar5;
    if (*(int *)((long)param_1 + 0x154) == 0) {
      *(undefined4 *)((long)param_1 + 0x154) = 1;
    }
  }
  return;
}

