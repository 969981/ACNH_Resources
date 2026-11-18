
void FUN_033add48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar8 = *(long *)(param_1 + 0xb8);
  if (lVar8 == 0) {
    lVar8 = *(long *)PTR_DAT_04bb2698;
    lVar9 = 1;
    if (lVar8 == 0) goto LAB_033addf4;
LAB_033addb8:
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar5 = (long *)(lVar8 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
      goto LAB_033ade00;
    }
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = lVar8;
    lVar8 = *(long *)puVar2;
    if (lVar8 == 0) {
LAB_033addf4:
      plVar5 = malloc(0x278);
      goto LAB_033ade00;
    }
    plVar5 = *(long **)(param_1 + 0xb8);
    if (plVar5 == (long *)0x0) goto LAB_033addb8;
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x278,8);
LAB_033ade00:
  FUN_02ece77c(plVar5,param_2,param_3);
  *plVar5 = (long)(PTR_DAT_04bca150 + 0x10);
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    plVar6 = malloc(0x28);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar1 = (undefined8 *)(lVar8 + 8);
    if (lVar4 != 0) {
      puVar1 = (undefined8 *)(lVar4 + 0xa8);
    }
    plVar6 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x28,8);
  }
  plVar7 = plVar6 + 1;
  *plVar7 = 0;
  puVar2 = PTR_DAT_04bc7130;
  plVar6[2] = 0;
  plVar6[3] = (long)plVar6;
  plVar6[4] = (long)(plVar5 + 0x44);
  *plVar6 = (long)(puVar2 + 0x10);
  lVar8 = plVar5[0x44];
  plVar5[0x44] = (long)plVar7;
  plVar6[2] = (long)(plVar5 + 0x44);
  *plVar7 = lVar8;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar7;
  }
  plVar5[0x13] = param_1;
  *(int *)(plVar5 + 0x46) = (int)plVar5[0x46] + 1;
  *(undefined4 *)(plVar5 + 0x15) = 1;
  FUN_0386890c(plVar5,param_3);
  *(undefined4 *)(plVar5 + 0x15) = 2;
  (**(code **)(*plVar5 + 0x48))(plVar5);
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  plVar6 = (long *)(param_1 + 0x40);
  lVar8 = *plVar6;
  plVar5 = (long *)((long)*(int *)(param_1 + 0x54) + (long)plVar5);
  *plVar6 = (long)plVar5;
  *plVar5 = lVar8;
  plVar5[1] = (long)plVar6;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar5;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  if (lVar9 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar9;
  }
  return;
}

