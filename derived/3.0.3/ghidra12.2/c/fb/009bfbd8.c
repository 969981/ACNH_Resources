
void * FUN_009bfbd8(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_04d07da8 != (void *)0x0) {
    return DAT_04d07da8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x240);
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
        goto LAB_009bfc60;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x240,8);
  }
LAB_009bfc60:
  FUN_038c69f0((long)pvVar3 + 0x220,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x220) = &PTR_FUN_0492c948;
  DAT_04d07c70 = (long)pvVar3 + 0x220;
  FUN_009bfcb0(pvVar3);
  DAT_04d07da8 = pvVar3;
  return pvVar3;
}

