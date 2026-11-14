
void * FUN_01b722a4(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_05336138 != (void *)0x0) {
    return DAT_05336138;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0xea0);
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
        goto LAB_01b7232c;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0xea0,8);
  }
LAB_01b7232c:
  FUN_038c69f0((long)pvVar3 + 0xe80,param_1,3);
  *(undefined ***)((long)pvVar3 + 0xe80) = &PTR_FUN_04a38b00;
  DAT_05336130 = (long)pvVar3 + 0xe80;
  FUN_01b7237c(pvVar3);
  DAT_05336138 = pvVar3;
  return pvVar3;
}

