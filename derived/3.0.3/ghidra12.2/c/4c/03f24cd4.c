
void FUN_03f24cd4(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_04ba8518;
  puVar1 = PTR_DAT_04bb2698;
  if (*(char *)(param_1 + 1) != '\0') {
    pvVar3 = (void *)param_1[7];
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
      param_1[7] = 0;
      *(undefined4 *)(param_1 + 6) = 0;
    }
    pvVar3 = (void *)param_1[0xc];
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
      param_1[0xc] = 0;
      *(undefined4 *)(param_1 + 0xb) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}

