
void * FUN_007ca91c(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_04cad3b8 != (void *)0x0) {
    return DAT_04cad3b8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0xca8);
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
        goto LAB_007ca9a4;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0xca8,8);
  }
LAB_007ca9a4:
  FUN_038c69f0((long)pvVar3 + 0xc88,param_1,3);
  *(undefined ***)((long)pvVar3 + 0xc88) = &PTR_FUN_04916400;
  DAT_04cad388 = (long)pvVar3 + 0xc88;
  FUN_007ca9f4(pvVar3);
  DAT_04cad3b8 = pvVar3;
  return pvVar3;
}

