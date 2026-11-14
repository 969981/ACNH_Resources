
void * FUN_0194f2c4(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_052cc470 != (void *)0x0) {
    return DAT_052cc470;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x1008);
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
        goto LAB_0194f34c;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x1008,8);
  }
LAB_0194f34c:
  FUN_038c69f0((long)pvVar3 + 0xfe8,param_1,3);
  *(undefined ***)((long)pvVar3 + 0xfe8) = &PTR_FUN_049e1238;
  DAT_052cba18 = (long)pvVar3 + 0xfe8;
  FUN_0194f39c(pvVar3);
  DAT_052cc470 = pvVar3;
  return pvVar3;
}

