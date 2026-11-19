
void * FUN_03c0a9c8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  if (DAT_05aec528 != (void *)0x0) {
    return DAT_05aec528;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x3fe10);
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
        goto LAB_03c0aa58;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x3fe10,8);
  }
LAB_03c0aa58:
  puVar1 = (undefined8 *)((long)pvVar4 + 0x3fdf0);
  FUN_038c69f0(puVar1,param_1,3);
  *puVar1 = &PTR_FUN_04b7ca60;
  DAT_05aec520 = puVar1;
  FUN_03c0aab0(pvVar4);
  DAT_05aec528 = pvVar4;
  return pvVar4;
}

