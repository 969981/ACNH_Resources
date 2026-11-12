
void * FUN_007cd600(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_04cad400 != (void *)0x0) {
    return DAT_04cad400;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x1f90);
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
        goto LAB_007cd688;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x1f90,8);
  }
LAB_007cd688:
  FUN_038c69f0((long)pvVar3 + 0x1f70,param_1,3);
  *(undefined4 *)((long)pvVar3 + 0x10) = 0;
  DAT_04cad3f8 = (long)pvVar3 + 0x1f70;
  *(undefined ***)((long)pvVar3 + 0x1f70) = &PTR_FUN_04916568;
  lVar4 = 99;
  *(void **)pvVar3 = pvVar3;
  *(void **)((long)pvVar3 + 8) = pvVar3;
  *(long *)((long)pvVar3 + 0x18) = (long)pvVar3 + 0x30;
  plVar2 = (long *)((long)pvVar3 + 0xd0);
  do {
    plVar2[-10] = (long)plVar2;
    plVar2[-0x14] = (long)(plVar2 + -10);
    lVar4 = lVar4 + -3;
    *plVar2 = (long)(plVar2 + 10);
    plVar2 = plVar2 + 0x1e;
  } while (lVar4 != 0);
  *(long *)((long)pvVar3 + 0x20) = (long)pvVar3 + 0x30;
  *(undefined8 *)((long)pvVar3 + 0x1f20) = 0;
  *(undefined4 *)((long)pvVar3 + 0x28) = 100;
  DAT_04cad400 = pvVar3;
  return pvVar3;
}

