
void FUN_016100c4(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  if (*param_1 != param_2) {
    if (*param_1 != 0) {
      *param_1 = 0;
      puVar1 = PTR_DAT_04bb2698;
      pvVar4 = (void *)param_1[2];
      if (pvVar4 != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(pvVar4);
        }
        else {
          plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
          }
        }
        param_1[2] = 0;
        *(undefined4 *)(param_1 + 1) = 0;
      }
      pvVar4 = (void *)param_1[6];
      if (pvVar4 != (void *)0x0) {
        lVar3 = *(long *)puVar1;
        if (lVar3 == 0) {
          free(pvVar4);
        }
        else {
          plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
          }
        }
        param_1[6] = 0;
        *(undefined4 *)(param_1 + 5) = 0;
      }
      pvVar4 = (void *)param_1[4];
      if (pvVar4 != (void *)0x0) {
        lVar3 = *(long *)puVar1;
        if (lVar3 == 0) {
          free(pvVar4);
        }
        else {
          plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
          }
        }
        param_1[4] = 0;
        *(undefined4 *)(param_1 + 3) = 0;
      }
    }
    *param_1 = param_2;
  }
  return;
}

