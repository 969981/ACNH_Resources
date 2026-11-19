
void FUN_03bce940(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  size_t __size;
  void *pvVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2698;
  if ((char)param_1[0x30] != '\0') {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) {
      plVar3 = malloc(0x110);
    }
    else {
      plVar3 = (long *)param_1[0x21];
      if (plVar3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar3 = (long *)(lVar6 + 8);
        if (lVar4 != 0) {
          plVar3 = (long *)(lVar4 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)0x0;
          goto LAB_03bce9c8;
        }
      }
      plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x110,8);
    }
LAB_03bce9c8:
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "sead::AudioTaskThread";
    FUN_038e1f88(plVar3,&local_40,param_1[0x21],*(undefined4 *)((long)param_1 + 0x184),0,0x7fffffff,
                 0x2000,0x40);
    puVar2 = PTR_DAT_04bd2360;
    plVar3[0x21] = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    param_1[0x2f] = (long)plVar3;
  }
  if ((char)param_1[0x33] == '\0') goto LAB_03bceaac;
  __size = FUN_003cc870(param_1 + 3);
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    pvVar5 = malloc(__size);
  }
  else {
    plVar3 = (long *)param_1[0x21];
    if (plVar3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar3 = (long *)(lVar6 + 8);
      if (lVar4 != 0) {
        plVar3 = (long *)(lVar4 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto LAB_03bcea90;
      }
    }
    pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,__size,0x1000);
  }
LAB_03bcea90:
  param_1[0x22] = (long)pvVar5;
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c));
  param_1[1] = (long)pvVar5;
  param_1[2] = __size;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c));
LAB_03bceaac:
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c));
  (**(code **)(*param_1 + 0x78))(param_1);
  (**(code **)(*param_1 + 0x88))(param_1);
  if ((long *)param_1[0x2f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2f] + 0x30))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c));
  if ((char)param_1[0x33] != '\0') {
    FUN_03b38a74();
  }
  *(undefined1 *)(param_1 + 0x23) = 1;
  return;
}

