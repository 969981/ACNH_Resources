
void FUN_02cbdd5c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined4 local_50;
  undefined2 local_4c;
  byte local_4a;
  undefined4 local_48;
  
  puVar2 = PTR_DAT_04bb3350;
  lVar7 = *(long *)(param_1 + 0x98);
  local_58 = PTR_DAT_04bc39b0 + 0x10;
  local_4a = *(byte *)(param_1 + 0x1f8);
  local_50 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  if (7 < local_4a) {
    local_4a = 0xff;
  }
  local_4c = 1;
  local_48 = 0xffffffff;
  lVar6 = *(long *)(lVar7 + 0xb8);
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "ClientListPhotoSelectSeq";
  if (lVar6 == 0) {
    lVar8 = 1;
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) goto LAB_02cbde74;
LAB_02cbde34:
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
      goto LAB_02cbde84;
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)(lVar3 + 0xa8);
    *(long *)(lVar3 + 0xa8) = lVar6;
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) {
LAB_02cbde74:
      plVar4 = malloc(0x1d0a8);
      goto LAB_02cbde84;
    }
    plVar4 = *(long **)(lVar7 + 0xb8);
    if (plVar4 == (long *)0x0) goto LAB_02cbde34;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x1d0a8,8);
LAB_02cbde84:
  FUN_02cbfbf0(plVar4,&local_68,&local_58);
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  plVar5 = (long *)(param_1 + 0x50);
  lVar6 = *plVar5;
  plVar1 = (long *)((long)*(int *)(param_1 + 100) + (long)plVar4);
  *plVar5 = (long)plVar1;
  *plVar1 = lVar6;
  plVar1[1] = (long)plVar5;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar1;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  plVar4[9] = param_1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  plVar4[0x13] = lVar7;
  *(undefined4 *)(plVar4 + 0x15) = 1;
  FUN_0386890c(plVar4,&local_58);
  *(undefined4 *)(plVar4 + 0x15) = 2;
  (**(code **)(*plVar4 + 0x48))(plVar4);
  if (lVar8 != 1) {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar7 + 0xa8) = lVar8;
  }
  *(long **)(param_1 + 0x210) = plVar4;
  return;
}

