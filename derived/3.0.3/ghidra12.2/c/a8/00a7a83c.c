
void * FUN_00a7a83c(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_04da56d0 != (void *)0x0) {
    return DAT_04da56d0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x408);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        pvVar3 = (void *)0x0;
        goto LAB_00a7a8c4;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x408,8);
  }
LAB_00a7a8c4:
  FUN_038c69f0((long)pvVar3 + 1000,param_1,3);
  *(undefined ***)((long)pvVar3 + 1000) = &PTR_FUN_0492e8c8;
  DAT_04da56c8 = (long)pvVar3 + 1000;
  FUN_00a7a920(pvVar3);
  DAT_04da56d0 = pvVar3;
  return pvVar3;
}

