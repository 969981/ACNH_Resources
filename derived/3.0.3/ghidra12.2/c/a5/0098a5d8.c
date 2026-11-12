
undefined8 * FUN_0098a5d8(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_04cfae30 != (undefined8 *)0x0) {
    return DAT_04cfae30;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x11f0);
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
        goto LAB_0098a660;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x11f0,8);
  }
LAB_0098a660:
  FUN_038c69f0(puVar3 + 0x23a,param_1,3);
  puVar3[0x23a] = &PTR_FUN_0492aee0;
  DAT_04cfae18 = puVar3 + 0x23a;
  puVar3[4] = 0x800000000;
  *puVar3 = &PTR_LAB_0492af00;
  puVar3[1] = &PTR_LAB_0492a928;
  puVar3[2] = puVar3 + 2;
  puVar3[3] = puVar3 + 2;
  FUN_00939880(puVar3 + 5);
  DAT_04cfae30 = puVar3;
  *(undefined1 *)(puVar3 + 0x239) = 0;
  return puVar3;
}

