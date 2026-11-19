
undefined8 * FUN_03986a74(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05ae9310 != (undefined8 *)0x0) {
    return DAT_05ae9310;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0xae0);
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
        goto LAB_03986afc;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0xae0,8);
  }
LAB_03986afc:
  FUN_038c69f0(puVar3 + 0x158,param_1,3);
  DAT_05ae9308 = puVar3 + 0x158;
  puVar3[1] = 0xdd00000000;
  puVar3[2] = puVar3 + 3;
  puVar3[0x158] = &PTR_FUN_04b68b30;
  *puVar3 = &PTR_FUN_04b68b50;
  FUN_03908644(puVar3 + 0xe0);
  FUN_03908644(puVar3 + 0xf1);
  FUN_03908644(puVar3 + 0x102);
  FUN_03908644(puVar3 + 0x113);
  FUN_03908644(puVar3 + 0x124);
  FUN_03908644(puVar3 + 0x135);
  FUN_03908644(puVar3 + 0x146);
  DAT_05ae9310 = puVar3;
  *(undefined1 *)(puVar3 + 0x157) = 1;
  return puVar3;
}

