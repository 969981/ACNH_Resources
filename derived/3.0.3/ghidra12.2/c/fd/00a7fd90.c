
void * FUN_00a7fd90(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_04da58c0 != (void *)0x0) {
    return DAT_04da58c0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x170);
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
        goto LAB_00a7fe18;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x170,8);
  }
LAB_00a7fe18:
  FUN_038c69f0((long)pvVar3 + 0x150,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x150) = &PTR_FUN_0492ea58;
  DAT_04da58b8 = (long)pvVar3 + 0x150;
  FUN_00a7fe68(pvVar3);
  DAT_04da58c0 = pvVar3;
  return pvVar3;
}

