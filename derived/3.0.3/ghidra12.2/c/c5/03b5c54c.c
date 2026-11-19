
void FUN_03b5c54c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_04b776e8;
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    puVar1 = PTR_DAT_04bb2698;
    pvVar3 = (void *)param_1[6];
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
      param_1[6] = 0;
    }
    pvVar3 = (void *)param_1[3];
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
      param_1[3] = 0;
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  return;
}

