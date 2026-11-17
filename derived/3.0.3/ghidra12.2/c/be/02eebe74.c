
void FUN_02eebe74(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *local_70;
  char *pcStack_68;
  undefined **local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined2 local_53;
  undefined4 local_50;
  undefined8 *local_48;
  
  local_58 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_48 = (undefined8 *)0x0;
  local_53 = 0xff00;
  local_54 = 1;
  local_50 = 0xffffffff;
  local_60 = &PTR_LAB_04adf500;
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x210) + 0x590);
  if (((*PTR_DAT_04bc7310 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc7310), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc7308 = PTR_DAT_04bc4d08 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7310);
  }
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    uVar4 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc7308);
    if ((uVar4 & 1) == 0) {
      puVar8 = (undefined8 *)0x0;
    }
  }
  puVar2 = PTR_DAT_04bb3350;
  lVar11 = *(long *)(param_1 + 0x98);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  lVar9 = *(long *)(lVar11 + 0xb8);
  pcStack_68 = "LoadTipsCtrlSeq";
  local_48 = puVar8;
  if (lVar9 == 0) {
    lVar10 = 1;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) goto LAB_02eebfc4;
LAB_02eebf88:
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
      goto LAB_02eebfd0;
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar9;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
LAB_02eebfc4:
      plVar6 = malloc(0x238);
      goto LAB_02eebfd0;
    }
    plVar6 = *(long **)(lVar11 + 0xb8);
    if (plVar6 == (long *)0x0) goto LAB_02eebf88;
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x238,8);
LAB_02eebfd0:
  FUN_030e6f68(plVar6,&local_70,&local_60);
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  plVar7 = (long *)(param_1 + 0x50);
  lVar9 = *plVar7;
  plVar1 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar6);
  *plVar7 = (long)plVar1;
  *plVar1 = lVar9;
  plVar1[1] = (long)plVar7;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar1;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar6[9] = param_1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  plVar6[0x13] = lVar11;
  *(undefined4 *)(plVar6 + 0x15) = 1;
  FUN_0386890c(plVar6,&local_60);
  *(undefined4 *)(plVar6 + 0x15) = 2;
  (**(code **)(*plVar6 + 0x48))(plVar6);
  if (lVar10 != 1) {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar9 + 0xa8) = lVar10;
  }
  *(long **)(param_1 + 0x220) = plVar6;
  return;
}

