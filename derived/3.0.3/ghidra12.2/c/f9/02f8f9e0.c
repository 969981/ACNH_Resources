
void FUN_02f8f9e0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  void *__ptr;
  int *piVar6;
  
  puVar2 = PTR_DAT_04bb2698;
  __ptr = (void *)param_1[0x48];
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
      piVar6 = (int *)param_1[0x47];
      goto joined_r0x02f8fa2c;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
    }
  }
  piVar6 = (int *)param_1[0x47];
joined_r0x02f8fa2c:
  if (piVar6 != (int *)0x0) {
    if (0 < *piVar6) {
      lVar4 = 0;
      puVar1 = PTR_DAT_04bb2df8 + 0x10;
      do {
        lVar5 = *(long *)(*(long *)(piVar6 + 2) + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *(undefined **)(lVar5 + 0x170) = puVar1;
        *(undefined **)(lVar5 + 0x10) = puVar1;
      } while (lVar4 < *piVar6);
    }
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      free(piVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,piVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,piVar6);
      }
    }
  }
  piVar6 = (int *)param_1[0x46];
  if (piVar6 != (int *)0x0) {
    if (0 < *piVar6) {
      lVar4 = 0;
      puVar1 = PTR_DAT_04bb2df8 + 0x10;
      do {
        lVar5 = lVar4 * 8;
        lVar4 = lVar4 + 1;
        *(undefined **)(*(long *)(*(long *)(piVar6 + 2) + lVar5) + 0x10) = puVar1;
      } while (lVar4 < *piVar6);
    }
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      free(piVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,piVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,piVar6);
      }
    }
  }
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

