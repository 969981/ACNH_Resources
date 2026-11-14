
void FUN_01b5921c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  
  puVar2 = PTR_DAT_04bc0618;
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = *(void **)(PTR_DAT_04bc0618 + 8);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined4 *)puVar2 = 0;
  }
  puVar2 = PTR_DAT_04bc0620;
  pvVar4 = *(void **)(PTR_DAT_04bc0620 + 8);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined4 *)puVar2 = 0;
  }
  puVar2 = PTR_DAT_04bc0628;
  pvVar4 = *(void **)(PTR_DAT_04bc0628 + 8);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined4 *)puVar2 = 0;
  }
  puVar2 = PTR_DAT_04bc0630;
  pvVar4 = *(void **)(PTR_DAT_04bc0630 + 8);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined4 *)puVar2 = 0;
  }
  puVar2 = PTR_DAT_04bc0638;
  pvVar4 = *(void **)(PTR_DAT_04bc0638 + 8);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined4 *)puVar2 = 0;
  }
  return;
}

