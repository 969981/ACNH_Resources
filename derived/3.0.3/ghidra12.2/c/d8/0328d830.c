
void FUN_0328d830(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  int iVar7;
  
  puVar3 = PTR_DAT_04bb2698;
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    iVar7 = 0;
    do {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x28) <= iVar7 + *(int *)(param_1 + 0x2c)) {
        iVar1 = *(int *)(param_1 + 0x28);
      }
      pvVar6 = *(void **)(*(long *)(param_1 + 0x20) +
                         (long)(iVar7 + (*(int *)(param_1 + 0x2c) - iVar1)) * 8);
      FUN_03286f10(pvVar6);
      FUN_03286c9c(pvVar6);
      lVar4 = *(long *)puVar3;
      if (lVar4 == 0) {
        free(pvVar6);
      }
      else {
        plVar5 = (long *)FUN_038cb610(lVar4,pvVar6);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
  pvVar6 = *(void **)(param_1 + 0x20);
  if (pvVar6 != (void *)0x0) {
    lVar4 = *(long *)puVar3;
    if (lVar4 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar4,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}

