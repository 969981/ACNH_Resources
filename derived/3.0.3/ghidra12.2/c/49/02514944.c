
void * FUN_02514944(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_054f5738 != (void *)0x0) {
    return DAT_054f5738;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x23e8);
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
        goto LAB_025149cc;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x23e8,8);
  }
LAB_025149cc:
  FUN_038c69f0((long)pvVar3 + 0x23c8,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x23c8) = &PTR_FUN_04a82100;
  DAT_054f0620 = (long)pvVar3 + 0x23c8;
  FUN_02514a24(pvVar3);
  DAT_054f5738 = pvVar3;
  return pvVar3;
}

