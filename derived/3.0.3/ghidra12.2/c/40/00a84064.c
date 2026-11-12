
void * FUN_00a84064(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  if (DAT_04da7238 != (void *)0x0) {
    return DAT_04da7238;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x65b40);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        pvVar4 = (void *)0x0;
        goto LAB_00a840f4;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x65b40,8);
  }
LAB_00a840f4:
  puVar1 = (undefined8 *)((long)pvVar4 + 0x65b20);
  FUN_038c69f0(puVar1,param_1,3);
  *puVar1 = &PTR_FUN_0492ebc8;
  DAT_04da6fd8 = puVar1;
  FUN_00a84150(pvVar4);
  DAT_04da7238 = pvVar4;
  return pvVar4;
}

