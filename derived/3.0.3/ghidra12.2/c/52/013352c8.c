
void FUN_013352c8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined *local_68;
  char *local_60;
  undefined *local_58;
  char *pcStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  FUN_00751ec0();
  plVar5 = param_1 + 0x18;
  *plVar5 = (long)(PTR_DAT_04bd0d40 + 0x10);
  local_68 = PTR_DAT_04bb2020;
  *param_1 = (long)&PTR_FUN_0498fb30;
  local_38 = 0;
  local_68 = local_68 + 0x10;
  param_1[0x19] = 0;
  puVar1 = PTR_DAT_04bb2698;
  local_60 = "mItemList";
  pcStack_50 = "ItemList";
  puStack_40 = &DAT_0407ebb1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_58 = local_68;
  local_48 = local_68;
  if (*(long *)puVar1 != 0) {
    lVar2 = FUN_038cb610(*(long *)puVar1,plVar5);
    param_1[0x19] = lVar2;
    if (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar2 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
      }
      plVar4 = (long *)(lVar2 + 0x70);
      lVar3 = *plVar4;
      plVar5 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)plVar5);
      *plVar4 = (long)plVar5;
      *plVar5 = lVar3;
      plVar5[1] = (long)plVar4;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 8) = plVar5;
      }
      *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  plVar5 = param_1 + 0x1c;
  *plVar5 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(local_68 + 0x18))(&local_68);
  param_1[0x1f] = 0;
  param_1[0x1d] = (long)local_60;
  param_1[0x1e] = 0;
  puVar1 = PTR_DAT_04bb60a0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x20) = local_38;
  *plVar5 = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar5);
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x18] = (long)&PTR_LAB_04990000;
  param_1[0x22] = 0;
  *plVar5 = (long)&PTR_FUN_049900c0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return;
}

