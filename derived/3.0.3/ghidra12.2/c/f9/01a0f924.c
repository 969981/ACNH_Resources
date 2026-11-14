
void * FUN_01a0f924(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_052d2598 != (void *)0x0) {
    return DAT_052d2598;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x388);
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
        goto LAB_01a0f9ac;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x388,8);
  }
LAB_01a0f9ac:
  FUN_038c69f0((long)pvVar3 + 0x368,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x368) = &PTR_FUN_049f9fb8;
  DAT_052d1ed8 = (long)pvVar3 + 0x368;
  FUN_01a0f9fc(pvVar3);
  DAT_052d2598 = pvVar3;
  return pvVar3;
}

