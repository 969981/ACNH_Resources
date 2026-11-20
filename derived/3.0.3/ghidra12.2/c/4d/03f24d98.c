
void FUN_03f24d98(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(char *)(param_1 + 8) != '\0') {
    pvVar3 = *(void **)(param_1 + 0x38);
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
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    pvVar3 = *(void **)(param_1 + 0x60);
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
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}

