
void FUN_03ca0ac0(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_68 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = 0;
  pMVar1 = (MutexType *)(PTR_DAT_04bd44e8 + 0x20);
  nn::os::LockMutex(pMVar1);
  puVar5 = PTR_DAT_04bd44c8;
  local_58 = *(undefined8 *)PTR_DAT_04bd44c8;
  *(undefined8 **)PTR_DAT_04bd44c8 = &local_68;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
  puVar4 = PTR_DAT_04bbd7c0;
  puVar3 = PTR_DAT_04bb2698;
  iVar2 = *(int *)(param_1 + 0x70);
  while (iVar2 != 0) {
    if (iVar2 < 1) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = *(long **)(param_1 + 0x60);
      if (*plVar7 != 0) {
        *(long *)(*plVar7 + 8) = plVar7[1];
      }
      if ((long *)plVar7[1] != (long *)0x0) {
        *(long *)plVar7[1] = *plVar7;
      }
      *plVar7 = 0;
      plVar7[1] = 0;
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
    }
    pvVar8 = (void *)0x0;
    if (plVar7 != (long *)0x0) {
      pvVar8 = (void *)((long)plVar7 - (long)*(int *)(param_1 + 0x74));
    }
    FUN_00367be0(*(undefined8 *)((long)pvVar8 + 0x18),*(undefined8 *)(*(long *)puVar4 + 0x48));
    plVar7 = *(long **)((long)pvVar8 + 0x18);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))(plVar7);
      FUN_00367b50(plVar7);
    }
    if (*(long **)((long)pvVar8 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar8 + 0x10) + 8))();
    }
    lVar6 = *(long *)puVar3;
    if (lVar6 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(lVar6,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    iVar2 = *(int *)(param_1 + 0x70);
  }
  *(undefined8 *)puVar5 = local_58;
  FUN_00367a40(PTR_LAB_04bd44d8,PTR_LAB_04bd44e0,0);
  nn::os::UnlockMutex(pMVar1);
  (**(code **)(**(long **)PTR_DAT_04bb26b8 + 0xd8))
            (*(long **)PTR_DAT_04bb26b8,*(undefined8 *)(param_1 + 0x58));
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  }
  if (*(char *)(param_1 + 0x26) != '\0') {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))((long *)(param_1 + 0x10));
    pvVar8 = *(void **)(param_1 + 0x18);
    if (pvVar8 != (void *)0x0) {
      lVar6 = *(long *)puVar3;
      if (lVar6 == 0) {
        free(pvVar8);
      }
      else {
        plVar7 = (long *)FUN_038cb610(lVar6,pvVar8);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x26) = 0;
  }
  return;
}

