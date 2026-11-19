
void * FUN_03c0dd0c(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_05aec700 != (void *)0x0) {
    return DAT_05aec700;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x2a8);
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
        goto LAB_03c0dd94;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x2a8,8);
  }
LAB_03c0dd94:
  FUN_038c69f0((long)pvVar3 + 0x288,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x288) = &PTR_FUN_04b7cca8;
  DAT_05aec6f8 = (long)pvVar3 + 0x288;
  FUN_03c0dde4(pvVar3);
  DAT_05aec700 = pvVar3;
  return pvVar3;
}

