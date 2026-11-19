
void FUN_03a7c330(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_FUN_04b707c8;
  param_1[0x49] = (long)&PTR_LAB_04b70820;
  if ((long *)param_1[0x89] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x89] + 8))();
  }
  if ((long *)param_1[0x88] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x88] + 8))();
  }
  if ((long *)param_1[0x8d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8d] + 8))();
  }
  if ((long *)param_1[0x8e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8e] + 8))();
  }
  if ((long *)param_1[0x8f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8f] + 8))();
  }
  puVar1 = PTR_DAT_04bb2698;
  plVar4 = (long *)param_1[0x8a];
  if (plVar4 != (long *)0x0) {
    pvVar6 = (void *)param_1[0xcf];
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
      plVar4 = (long *)param_1[0x8a];
      param_1[0xcf] = 0;
      *(undefined4 *)(param_1 + 0xce) = 0;
      if (plVar4 == (long *)0x0) goto LAB_03a7c420;
    }
    (**(code **)(*plVar4 + 8))();
  }
LAB_03a7c420:
  pvVar6 = (void *)param_1[0xcb];
  if (pvVar6 != (void *)0x0) {
    lVar5 = *(long *)puVar1;
    if (lVar5 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar5,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[0xcb] = 0;
    *(undefined4 *)(param_1 + 0xca) = 0;
    *(undefined4 *)((long)param_1 + 0x654) = 0;
  }
  pvVar6 = (void *)param_1[0xcd];
  if (pvVar6 != (void *)0x0) {
    lVar5 = *(long *)puVar1;
    if (lVar5 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar5,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[0xcd] = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)((long)param_1 + 0x664) = 0;
  }
  if ((long *)param_1[0x83] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x83] + 8))();
  }
  if ((long *)param_1[0x84] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x84] + 8))();
  }
  if ((long *)param_1[0x85] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x85] + 8))();
  }
  lVar5 = param_1[0x86];
  if (lVar5 != 0) {
    if (*(long **)(lVar5 + 0x250) != (long *)0x0) {
      (**(code **)(**(long **)(lVar5 + 0x250) + 8))();
      *(undefined8 *)(lVar5 + 0x250) = 0;
    }
    if (*(long *)(lVar5 + 0x248) != 0) {
      FUN_039c3f70();
    }
    if ((long *)param_1[0x86] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x86] + 8))();
    }
  }
  puVar3 = PTR_DAT_04bbd578;
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  puVar2 = PTR_DAT_04bd12f8 + 0x10;
  param_1[0xc6] = (long)puVar1;
  param_1[0xc2] = (long)puVar1;
  param_1[0xb2] = (long)puVar2;
  if ((param_1[0xbe] != 0 || param_1[0xbd] != 0) && (lVar5 = param_1[0xc0], lVar5 != 0)) {
    plVar4 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x4c) + 0x590);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + -1;
    param_1[0xc0] = 0;
  }
  param_1[0xb2] = (long)puVar1;
  param_1[0xa2] = (long)puVar2;
  if ((param_1[0xae] != 0 || param_1[0xad] != 0) && (lVar5 = param_1[0xb0], lVar5 != 0)) {
    plVar4 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x4c) + 0x510);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + -1;
    param_1[0xb0] = 0;
  }
  puVar2 = PTR_DAT_04bd1068;
  puVar3 = puVar3 + 0x10;
  param_1[0xa2] = (long)puVar3;
  param_1[0x9e] = (long)puVar3;
  param_1[0x9a] = (long)puVar3;
  param_1[0x96] = (long)puVar3;
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x90] = (long)(puVar2 + 0x10);
  param_1[2] = (long)puVar1;
  param_1[0x49] = (long)(PTR_DAT_04bd1070 + 0x10);
  lVar5 = param_1[3];
  *param_1 = (long)(PTR_DAT_04bd18d8 + 0x10);
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 2));
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[3] = 1;
  return;
}

