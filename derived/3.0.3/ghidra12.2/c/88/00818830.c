
bool FUN_00818830(long param_1,long *param_2,long *param_3,int param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 local_c8;
  undefined **ppuStack_c0;
  undefined8 local_b8;
  undefined *puStack_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined *local_70;
  char *local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xb30));
  if (*(int *)(param_1 + 0xb08) < 1) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = *(long **)(param_1 + 0xb00);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(param_1 + 0xb08) = *(int *)(param_1 + 0xb08) + -1;
  }
  lVar3 = 0;
  if (plVar4 != (long *)0x0) {
    lVar3 = (long)plVar4 - (long)*(int *)(param_1 + 0xb0c);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb30));
  if (lVar3 != 0) {
    plVar4 = *(long **)(*(long *)(param_1 + 0x10) + (long)param_4 * 8);
    nn::os::LockMutex((MutexType *)(plVar4 + 0x4d));
    (**(code **)(*plVar4 + 0x40))(plVar4,param_2,param_3,param_5);
    nn::os::UnlockMutex((MutexType *)(plVar4 + 0x4d));
    pvVar6 = *(void **)(lVar3 + 0x20);
    (**(code **)(*param_3 + 0x18))(param_3);
    pvVar7 = (void *)param_3[1];
    if (pvVar6 != pvVar7) {
      (**(code **)(*param_3 + 0x18))(param_3);
      lVar5 = 0;
      do {
        if (*(char *)(param_3[1] + lVar5) == '\0') goto LAB_0081898c;
        lVar1 = param_3[1] + lVar5;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_0081898c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_0081898c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_0081898c:
      iVar2 = (int)lVar5;
      if (*(int *)(lVar3 + 0x28) <= (int)lVar5) {
        iVar2 = *(int *)(lVar3 + 0x28) + -1;
      }
      memcpy(pvVar6,pvVar7,(long)iVar2);
      *(undefined1 *)((long)pvVar6 + (long)iVar2) = 0;
    }
    *(int *)(lVar3 + 0x108) = param_4;
    pvVar6 = *(void **)(lVar3 + 0xb8);
    (**(code **)(*param_5 + 0x18))(param_5);
    pvVar7 = (void *)param_5[1];
    if (pvVar6 != pvVar7) {
      (**(code **)(*param_5 + 0x18))(param_5);
      lVar5 = 0;
      do {
        if (*(char *)(param_5[1] + lVar5) == '\0') goto LAB_00818a2c;
        lVar1 = param_5[1] + lVar5;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_00818a2c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_00818a2c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_00818a2c:
      iVar2 = (int)lVar5;
      if (*(int *)(lVar3 + 0xc0) <= (int)lVar5) {
        iVar2 = *(int *)(lVar3 + 0xc0) + -1;
      }
      memcpy(pvVar6,pvVar7,(long)iVar2);
      *(undefined1 *)((long)pvVar6 + (long)iVar2) = 0;
    }
    *(int *)(lVar3 + 0x158) = (int)param_2[9];
    if (*(long *)(param_1 + 0xa00) != 0) {
      local_a8 = 0;
      puStack_b0 = PTR_DAT_04bb5070 + 0x10;
      local_b8 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      local_90 = param_1 + 0xa08;
      lStack_78 = param_1 + 0xa28;
      uStack_98 = *(undefined8 *)(param_1 + 0x9e8);
      local_80 = 0;
      ppuStack_c0 = &puStack_b0;
      local_68 = "ResLoad";
      local_a6 = 2;
      local_a0 = 0;
      local_c8 = 0;
      lStack_88 = lVar3;
      FUN_03f45184(*(long *)(param_1 + 0xa00),&local_c8);
    }
    *param_2 = lVar3;
  }
  return lVar3 != 0;
}

