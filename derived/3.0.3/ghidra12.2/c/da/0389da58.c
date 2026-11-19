
undefined8 * FUN_0389da58(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05ae6ef8 != (undefined8 *)0x0) {
    return DAT_05ae6ef8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x1a0);
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
        puVar3 = (undefined8 *)0x0;
        goto LAB_0389dae0;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x1a0,8);
  }
LAB_0389dae0:
  FUN_038c69f0(puVar3 + 0x30,param_1,3);
  puVar3[0x30] = &PTR_FUN_04b61ce8;
  DAT_05ae6ef0 = puVar3 + 0x30;
  FUN_0387e200(puVar3);
  *puVar3 = &PTR_LAB_04b61d08;
  *(undefined4 *)(puVar3 + 0x15) = 8;
  FUN_038e18e4(puVar3 + 0x16);
  FUN_038e18e4(puVar3 + 0x1e);
  *(undefined1 *)(puVar3 + 0x26) = 0;
  puVar3[0x27] = 0;
  FUN_038e18e4(puVar3 + 0x28);
  DAT_05ae6ef8 = puVar3;
  return puVar3;
}

