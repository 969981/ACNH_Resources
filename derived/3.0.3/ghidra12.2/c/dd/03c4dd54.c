
void FUN_03c4dd54(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined *local_78;
  char *local_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  *param_1 = &PTR_FUN_04b804e8;
  FUN_038e18e4(param_1 + 1);
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  FUN_038e3114(param_1 + 10,0,0x7fff);
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_038e3114(param_1 + 0x14,0,0x7fff);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_78 = PTR_DAT_04bb2020;
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_48 = 0;
  param_1[0x20] = &PTR_LAB_04b80508;
  param_1[0x21] = "SoundShapeParamsSet";
  local_78 = local_78 + 0x10;
  local_70 = "SoundShapeParams";
  puStack_60 = &DAT_040a8aaf;
  puStack_50 = &DAT_0407ebb1;
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x25] = 0;
  param_1[0x26] = puVar1;
  lVar3 = *(long *)PTR_DAT_04bb2698;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  local_68 = local_78;
  local_58 = local_78;
  if (lVar3 != 0) {
    lVar3 = FUN_038cb610(lVar3,param_1 + 0x26);
    param_1[0x27] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar5;
      plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)(param_1 + 0x26));
      *plVar5 = (long)plVar2;
      *plVar2 = lVar4;
      plVar2[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar2;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  param_1[0x2a] = PTR_DAT_04bb3050 + 0x10;
  (**(code **)(local_78 + 0x18))(&local_78);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = local_48;
  puVar1 = PTR_DAT_04bb60a0;
  param_1[0x2f] = 0;
  param_1[0x2a] = puVar1 + 0x10;
  param_1[0x2b] = local_70;
  (**(code **)(param_1[0x20] + 0x140))(param_1 + 0x20,param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x26] = &PTR_LAB_04b80668;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x30] = 0;
  param_1[0x2a] = &PTR_LAB_04b80728;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_038e18e4(param_1 + 0x36);
  return;
}

