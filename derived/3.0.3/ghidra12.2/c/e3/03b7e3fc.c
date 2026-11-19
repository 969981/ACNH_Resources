
void FUN_03b7e3fc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar4 = *(long *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    pvVar3 = *(void **)(lVar4 + 0x10);
    if (pvVar3 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
    }
    *(undefined8 *)(lVar4 + 0x10) = 0;
    lVar4 = *(long *)(param_1 + 0xa0);
    pvVar3 = *(void **)(lVar4 + 0x28);
    if (pvVar3 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
    }
    *(undefined8 *)(lVar4 + 0x28) = 0;
    lVar4 = *(long *)(param_1 + 0xa0);
    pvVar3 = *(void **)(lVar4 + 0x40);
    if (pvVar3 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
    }
    *(undefined8 *)(lVar4 + 0x40) = 0;
    lVar4 = *(long *)(param_1 + 0xa0);
    pvVar3 = *(void **)(lVar4 + 0x58);
    if (pvVar3 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
    }
    *(undefined8 *)(lVar4 + 0x58) = 0;
    lVar4 = *(long *)(param_1 + 0xa0);
    pvVar3 = *(void **)(lVar4 + 0x70);
    if (pvVar3 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
    }
    *(undefined8 *)(lVar4 + 0x70) = 0;
    lVar4 = *(long *)(param_1 + 0xa0);
    pvVar3 = *(void **)(lVar4 + 0x88);
    if (pvVar3 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
    }
    *(undefined8 *)(lVar4 + 0x88) = 0;
    pvVar3 = *(void **)(param_1 + 0xa0);
    if (pvVar3 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}

