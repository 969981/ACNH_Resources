
void * FUN_01697b54(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_05234ef0 != (void *)0x0) {
    return DAT_05234ef0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0xb68);
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
        goto LAB_01697bdc;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0xb68,8);
  }
LAB_01697bdc:
  FUN_038c69f0((long)pvVar3 + 0xb48,param_1,3);
  *(undefined ***)((long)pvVar3 + 0xb48) = &PTR_FUN_049bb2e8;
  DAT_05234ec8 = (long)pvVar3 + 0xb48;
  FUN_01697c2c(pvVar3);
  DAT_05234ef0 = pvVar3;
  return pvVar3;
}

