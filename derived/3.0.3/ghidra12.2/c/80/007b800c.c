
void * FUN_007b800c(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_04cac4e0 != (void *)0x0) {
    return DAT_04cac4e0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x5d8);
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
        goto LAB_007b8094;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x5d8,8);
  }
LAB_007b8094:
  FUN_038c69f0((long)pvVar3 + 0x5b8,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x5b8) = &PTR_FUN_049126f0;
  DAT_04caad28 = (long)pvVar3 + 0x5b8;
  FUN_007b80e4(pvVar3);
  DAT_04cac4e0 = pvVar3;
  return pvVar3;
}

