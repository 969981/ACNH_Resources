
void FUN_033270a0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x1860);
  if (*(long **)(param_1 + 0x1898) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1898) + 8))();
  }
  plVar4 = *(long **)(param_1 + 0x1860);
  *(undefined8 *)(param_1 + 0x1888) = 0;
  *(undefined8 *)(param_1 + 0x1878) = 0;
  if (plVar4 != (long *)0x0) {
    lVar2 = *(long *)(param_1 + 0x1870);
    lVar3 = *(long *)(param_1 + 0x1868);
    *(undefined8 *)(param_1 + 0x1870) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x1868) = 0;
    if ((undefined8 *)*plVar4 == puVar1) {
      *plVar4 = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar2;
    }
  }
  *(undefined8 *)(param_1 + 0x1870) = 0;
  pvVar5 = *(void **)(param_1 + 0x1848);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x1868) = 0;
  if (pvVar5 != (void *)0x0) {
    if (*(long **)((long)pvVar5 + 0x5a0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar5 + 0x5a0) + 8))();
    }
    FUN_03286c9c(pvVar5);
    if (DAT_05ae7600 == 0) {
      free(pvVar5);
      pvVar5 = *(void **)(param_1 + 0x1840);
      goto joined_r0x03327168;
    }
    plVar4 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
    }
  }
  pvVar5 = *(void **)(param_1 + 0x1840);
joined_r0x03327168:
  if (pvVar5 != (void *)0x0) {
    if (*(long **)((long)pvVar5 + 0x5a0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar5 + 0x5a0) + 8))();
    }
    FUN_03286c9c(pvVar5);
    if (DAT_05ae7600 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
  }
  FUN_033271f8(param_1 + 0x17f0);
  FUN_0331a35c(param_1);
  return;
}

