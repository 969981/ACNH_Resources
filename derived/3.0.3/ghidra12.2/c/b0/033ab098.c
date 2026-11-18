
void FUN_033ab098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar5 = *(long *)(param_1 + 0xb8);
  if (lVar5 == 0) {
    lVar6 = 1;
    lVar5 = *(long *)PTR_DAT_04bb2698;
    if (*(long *)PTR_DAT_04bb2698 == 0) goto LAB_033ab148;
LAB_033ab10c:
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar3 = (long *)(lVar5 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
      goto LAB_033ab154;
    }
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = lVar5;
    if (DAT_05ae7600 == 0) {
LAB_033ab148:
      plVar3 = malloc(0x66c0);
      goto LAB_033ab154;
    }
    plVar3 = *(long **)(param_1 + 0xb8);
    lVar5 = DAT_05ae7600;
    if (plVar3 == (long *)0x0) goto LAB_033ab10c;
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x66c0,8);
LAB_033ab154:
  FUN_03033590(plVar3,param_2,param_3);
  plVar3[0x13] = param_1;
  *(undefined4 *)(plVar3 + 0x15) = 1;
  FUN_0386890c(plVar3,param_3);
  *(undefined4 *)(plVar3 + 0x15) = 2;
  (**(code **)(*plVar3 + 0x48))(plVar3);
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  plVar4 = (long *)(param_1 + 0x40);
  lVar5 = *plVar4;
  plVar3 = (long *)((long)*(int *)(param_1 + 0x54) + (long)plVar3);
  *plVar4 = (long)plVar3;
  *plVar3 = lVar5;
  plVar3[1] = (long)plVar4;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar3;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  if (lVar6 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar6;
  }
  return;
}

