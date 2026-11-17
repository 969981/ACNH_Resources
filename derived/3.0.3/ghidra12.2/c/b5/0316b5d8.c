
long * FUN_0316b5d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04bb3350;
  lVar6 = *(long *)(param_1 + 0xb8);
  if (lVar6 == 0) {
    lVar7 = 1;
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (*(long *)PTR_DAT_04bb2698 == 0) goto LAB_0316b68c;
LAB_0316b64c:
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
      goto LAB_0316b69c;
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)(lVar3 + 0xa8);
    *(long *)(lVar3 + 0xa8) = lVar6;
    if (DAT_05ae7600 == 0) {
LAB_0316b68c:
      plVar4 = malloc(0xaabe0);
      goto LAB_0316b69c;
    }
    plVar4 = *(long **)(param_1 + 0xb8);
    lVar6 = DAT_05ae7600;
    if (plVar4 == (long *)0x0) goto LAB_0316b64c;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0xaabe0,8);
LAB_0316b69c:
  FUN_03268790(plVar4,param_2,param_3);
  plVar4[0x13] = param_1;
  *(undefined4 *)(plVar4 + 0x15) = 1;
  FUN_0386890c(plVar4,param_3);
  *(undefined4 *)(plVar4 + 0x15) = 2;
  (**(code **)(*plVar4 + 0x48))(plVar4);
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  plVar5 = (long *)(param_1 + 0x40);
  lVar6 = *plVar5;
  plVar1 = (long *)((long)*(int *)(param_1 + 0x54) + (long)plVar4);
  *plVar5 = (long)plVar1;
  *plVar1 = lVar6;
  plVar1[1] = (long)plVar5;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar1;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  if (lVar7 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar7;
  }
  return plVar4;
}

