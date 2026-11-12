
void * FUN_0094f428(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_04cf8698 != (void *)0x0) {
    return DAT_04cf8698;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0xe50);
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
        goto LAB_0094f4b0;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0xe50,8);
  }
LAB_0094f4b0:
  FUN_038c69f0((long)pvVar3 + 0xe30,param_1,3);
  *(undefined ***)((long)pvVar3 + 0xe30) = &PTR_FUN_04929be8;
  DAT_04cf8598 = (long)pvVar3 + 0xe30;
  FUN_0094f500(pvVar3);
  DAT_04cf8698 = pvVar3;
  return pvVar3;
}

