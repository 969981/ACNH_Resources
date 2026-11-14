
undefined8 * FUN_01de2d08(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05384078 != (undefined8 *)0x0) {
    return DAT_05384078;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x68);
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
        goto LAB_01de2d90;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x68,8);
  }
LAB_01de2d90:
  FUN_038c69f0(puVar3 + 9,param_1,3);
  puVar3[9] = &PTR_FUN_04a5bbe0;
  DAT_05384070 = puVar3 + 9;
  *puVar3 = 0;
  FUN_038e18e4(puVar3 + 1);
  DAT_05384078 = puVar3;
  return puVar3;
}

