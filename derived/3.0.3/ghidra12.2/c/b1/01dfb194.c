
void * FUN_01dfb194(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_0538adc8 != (void *)0x0) {
    return DAT_0538adc8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x730);
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
        goto LAB_01dfb21c;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x730,8);
  }
LAB_01dfb21c:
  FUN_038c69f0((long)pvVar3 + 0x710,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x710) = &PTR_FUN_04a5c3a8;
  DAT_0538adb8 = (long)pvVar3 + 0x710;
  FUN_01dfb294(pvVar3);
  DAT_0538adc8 = pvVar3;
  return pvVar3;
}

