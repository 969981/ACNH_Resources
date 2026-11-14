
void FUN_01dcff34(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a0));
  puVar2 = PTR_DAT_04bb2698;
  pvVar5 = *(void **)(param_1 + 0x58);
  if (pvVar5 != (void *)0x0) {
    pvVar6 = *(void **)((long)pvVar5 + 0xd8);
    *(undefined ***)((long)pvVar5 + 200) = &PTR_FUN_048fa7c0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
      *(undefined8 *)((long)pvVar5 + 0xd8) = 0;
      *(undefined4 *)((long)pvVar5 + 0xd0) = 0;
    }
    pvVar6 = *(void **)((long)pvVar5 + 0xb8);
    *(undefined ***)((long)pvVar5 + 0xa8) = &PTR_FUN_048fa7c0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
      *(undefined8 *)((long)pvVar5 + 0xb8) = 0;
      *(undefined4 *)((long)pvVar5 + 0xb0) = 0;
    }
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  pvVar5 = *(void **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (*(long **)(param_1 + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xe0) + 8))();
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (*(long **)(param_1 + 0xe8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xe8) + 8))();
  }
  pvVar5 = *(void **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf0) + 8))();
  }
  pvVar5 = *(void **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (pvVar5 != (void *)0x0) {
    FUN_01d6c104(pvVar5);
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  lVar4 = *(long *)PTR_DAT_04bb36f0;
  *(undefined1 *)(param_1 + 0x161) = 0;
  iVar1 = 10;
  if (*(uint *)(lVar4 + 0x20) < 0xb) {
    iVar1 = 0;
  }
  *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)iVar1 * 0x38 + 0x2c) = 0;
  iVar1 = 10;
  if (*(uint *)(lVar4 + 0x20) < 0xb) {
    iVar1 = 0;
  }
  *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)iVar1 * 0x38 + 0x2d) = 0;
  iVar1 = 10;
  if (*(uint *)(lVar4 + 0x20) < 0xb) {
    iVar1 = 0;
  }
  *(undefined4 *)(*(long *)(lVar4 + 0x28) + (long)iVar1 * 0x38) = 0;
  iVar1 = 10;
  if (*(uint *)(lVar4 + 0x20) < 0xb) {
    iVar1 = 0;
  }
  *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)iVar1 * 0x38 + 0x2f) = 0;
  FUN_006d57d8(*(undefined8 *)(DAT_04c88f78 + 0x110));
  (**(code **)(**(long **)(param_1 + 0x168) + 0x20))();
  pvVar5 = *(void **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x168) = 0;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a0));
  return;
}

