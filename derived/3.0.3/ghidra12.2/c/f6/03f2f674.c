
void * FUN_03f2f674(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_05b05848 != (void *)0x0) {
    return DAT_05b05848;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0xa98);
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
        goto LAB_03f2f6fc;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0xa98,8);
  }
LAB_03f2f6fc:
  FUN_038c69f0((long)pvVar3 + 0xa78,param_1,3);
  *(undefined ***)((long)pvVar3 + 0xa78) = &PTR_FUN_04ba8b58;
  DAT_05b057e8 = (long)pvVar3 + 0xa78;
  FUN_03f2f74c(pvVar3);
  DAT_05b05848 = pvVar3;
  return pvVar3;
}

