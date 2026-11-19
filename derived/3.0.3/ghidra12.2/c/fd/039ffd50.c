
void * FUN_039ffd50(undefined8 param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  undefined *local_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  uVar2 = FUN_03a4e250(*(long *)(*(long *)PTR_DAT_04bd15b8 + 8) + 0x4d8,&local_40);
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar5 = malloc(0x5770);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto LAB_039ffe08;
      }
    }
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x5770,8);
  }
LAB_039ffe08:
  FUN_03a02de8(pvVar5,uVar2);
  puVar1 = PTR_DAT_04bbdcb8;
  uVar2 = *(undefined8 *)(*(long *)PTR_DAT_04bb4e50 + 0x58);
  *(long *)((long)pvVar5 + 0x56c0) = *(long *)PTR_DAT_04bbdcb8 + 0x50;
  *(undefined8 *)((long)pvVar5 + 0x5590) = *(undefined8 *)(param_2 + 0x18);
  FUN_039ffed0(pvVar5,param_2,param_3,uVar2);
  lVar6 = *(long *)puVar1;
  nn::os::LockMutex((MutexType *)(lVar6 + 0xb8));
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(void **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = pvVar5;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
  }
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0xb8));
  plVar4 = *(long **)(lVar6 + 0x48);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,pvVar5,param_3);
  }
  return pvVar5;
}

