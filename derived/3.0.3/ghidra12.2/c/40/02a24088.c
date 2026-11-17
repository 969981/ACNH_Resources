
void * FUN_02a24088(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  if (DAT_055f6860 != (void *)0x0) {
    return DAT_055f6860;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x19fb20);
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
        goto LAB_02a24118;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x19fb20,8);
  }
LAB_02a24118:
  puVar1 = (undefined8 *)((long)pvVar4 + 0x19fb00);
  FUN_038c69f0(puVar1,param_1,3);
  *puVar1 = &PTR_FUN_04a99b20;
  DAT_055f5f50 = puVar1;
  FUN_02a24170(pvVar4);
  DAT_055f6860 = pvVar4;
  return pvVar4;
}

