
void * FUN_008763ec(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_04cea100 != (void *)0x0) {
    return DAT_04cea100;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x1510);
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
        goto LAB_00876474;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x1510,8);
  }
LAB_00876474:
  FUN_038c69f0((long)pvVar3 + 0x14f0,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x14f0) = &PTR_FUN_0491db58;
  DAT_04ce9748 = (long)pvVar3 + 0x14f0;
  FUN_008764c8(pvVar3);
  DAT_04cea100 = pvVar3;
  return pvVar3;
}

