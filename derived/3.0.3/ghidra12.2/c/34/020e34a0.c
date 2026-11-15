
void * FUN_020e34a0(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_053e4ff0 != (void *)0x0) {
    return DAT_053e4ff0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x428);
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
        goto LAB_020e3528;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x428,8);
  }
LAB_020e3528:
  FUN_038c69f0((long)pvVar3 + 0x408,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x408) = &PTR_FUN_04a73f70;
  DAT_053e4fe8 = (long)pvVar3 + 0x408;
  FUN_020e36b0(pvVar3);
  DAT_053e4ff0 = pvVar3;
  return pvVar3;
}

