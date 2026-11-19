
void * FUN_03c54058(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_05aedac0 != (void *)0x0) {
    return DAT_05aedac0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x130);
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
        goto LAB_03c540e0;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x130,8);
  }
LAB_03c540e0:
  FUN_038c69f0((long)pvVar3 + 0x110,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x110) = &PTR_FUN_04b810d0;
  DAT_05aedab8 = (long)pvVar3 + 0x110;
  FUN_03c54130(pvVar3);
  DAT_05aedac0 = pvVar3;
  return pvVar3;
}

