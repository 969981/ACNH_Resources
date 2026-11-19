
void * FUN_0384a9f0(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_05ae2a30 != (void *)0x0) {
    return DAT_05ae2a30;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x3200);
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
        goto LAB_0384aa78;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x3200,8);
  }
LAB_0384aa78:
  FUN_038c69f0((long)pvVar3 + 0x31e0,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x31e0) = &PTR_FUN_04b5e248;
  DAT_05ae2a18 = (long)pvVar3 + 0x31e0;
  FUN_0384aacc(pvVar3);
  DAT_05ae2a30 = pvVar3;
  return pvVar3;
}

