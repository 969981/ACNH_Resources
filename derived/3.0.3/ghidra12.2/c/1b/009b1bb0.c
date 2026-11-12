
void * FUN_009b1bb0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  if (DAT_04d02f58 != (void *)0x0) {
    return DAT_04d02f58;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0xf5bc0);
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
        goto LAB_009b1c40;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0xf5bc0,8);
  }
LAB_009b1c40:
  puVar1 = (undefined8 *)((long)pvVar4 + 0xf5ba0);
  FUN_038c69f0(puVar1,param_1,3);
  *puVar1 = &PTR_FUN_0492c768;
  DAT_04d02f40 = puVar1;
  FUN_009b1c94(pvVar4);
  DAT_04d02f58 = pvVar4;
  return pvVar4;
}

