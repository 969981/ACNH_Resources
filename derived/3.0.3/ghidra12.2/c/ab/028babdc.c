
void * FUN_028babdc(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_055b1af8 != (void *)0x0) {
    return DAT_055b1af8;
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
        goto LAB_028bac64;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x130,8);
  }
LAB_028bac64:
  FUN_038c69f0((long)pvVar3 + 0x110,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x110) = &PTR_FUN_04a92188;
  DAT_055b1af0 = (long)pvVar3 + 0x110;
  FUN_028bacb4(pvVar3);
  DAT_055b1af8 = pvVar3;
  return pvVar3;
}

