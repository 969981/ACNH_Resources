
undefined8 * FUN_01d80b88(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05373400 != (undefined8 *)0x0) {
    return DAT_05373400;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x88);
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
        goto LAB_01d80c10;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x88,8);
  }
LAB_01d80c10:
  FUN_038c69f0(puVar3 + 0xd,param_1,3);
  DAT_053733f8 = puVar3 + 0xd;
  puVar3[0xd] = &PTR_FUN_04a5a740;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[1] = puVar3 + 1;
  puVar3[2] = puVar3 + 1;
  *puVar3 = &PTR_LAB_04a5a760;
  FUN_038e18e4(puVar3 + 4);
  DAT_05373400 = puVar3;
  return puVar3;
}

