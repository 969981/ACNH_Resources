
void FUN_03b428a8(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  FUN_03b42d30();
  plVar4 = *(long **)(param_1 + 0x120);
  if (plVar4 == (long *)0x0) goto LAB_03b42920;
  lVar3 = plVar4[1];
  if (lVar3 == 0) {
LAB_03b4290c:
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  else {
    if (DAT_05aebc00 == '\0') {
      FUN_03b46714(lVar3 + 8);
      plVar2 = (long *)plVar4[1];
    }
    else {
      FUN_03b5f940(lVar3 + 0x50);
      plVar2 = (long *)plVar4[1];
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar4[1] = 0;
    plVar4 = *(long **)(param_1 + 0x120);
    if (plVar4 != (long *)0x0) goto LAB_03b4290c;
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
LAB_03b42920:
  if (*(long **)(param_1 + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x128) + 8))();
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  puVar1 = PTR_DAT_04bb2698;
  pvVar5 = *(void **)(param_1 + 0xe0);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x1f8) = 0;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

