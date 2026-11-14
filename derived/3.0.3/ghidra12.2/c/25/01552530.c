
void FUN_01552530(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x10) != 0) {
    pvVar4 = (void *)(*(long *)(param_1 + 0x10) + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  lVar5 = 0;
  do {
    lVar1 = param_1 + lVar5;
    if (*(long *)(lVar1 + 0x20) != 0) {
      pvVar4 = (void *)(*(long *)(lVar1 + 0x20) + -8);
      if (*(long *)puVar2 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined4 *)(lVar1 + 0x18) = 0;
    }
    if (*(long *)(lVar1 + 0x30) != 0) {
      pvVar4 = (void *)(*(long *)(lVar1 + 0x30) + -8);
      if (*(long *)puVar2 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined4 *)(lVar1 + 0x28) = 0;
    }
    if (*(long *)(lVar1 + 0x40) != 0) {
      pvVar4 = (void *)(*(long *)(lVar1 + 0x40) + -8);
      if (*(long *)puVar2 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(undefined4 *)(lVar1 + 0x38) = 0;
    }
    if (*(long *)(lVar1 + 0x50) != 0) {
      pvVar4 = (void *)(*(long *)(lVar1 + 0x50) + -8);
      if (*(long *)puVar2 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      *(undefined8 *)(lVar1 + 0x50) = 0;
      *(undefined4 *)(lVar1 + 0x48) = 0;
    }
    if (*(long *)(lVar1 + 0x60) != 0) {
      pvVar4 = (void *)(*(long *)(lVar1 + 0x60) + -8);
      if (*(long *)puVar2 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      *(undefined8 *)(lVar1 + 0x60) = 0;
      *(undefined4 *)(lVar1 + 0x58) = 0;
    }
    if (*(long *)(lVar1 + 0x70) != 0) {
      pvVar4 = (void *)(*(long *)(lVar1 + 0x70) + -8);
      if (*(long *)puVar2 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      *(undefined8 *)(lVar1 + 0x70) = 0;
      *(undefined4 *)(lVar1 + 0x68) = 0;
    }
    lVar5 = lVar5 + 0x60;
  } while (lVar5 != 0x300);
  return;
}

