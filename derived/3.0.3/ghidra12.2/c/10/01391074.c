
undefined8 * FUN_01391074(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_051a9970 != (undefined8 *)0x0) {
    return DAT_051a9970;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x240);
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
        goto LAB_013910fc;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x240,8);
  }
LAB_013910fc:
  FUN_038c69f0(puVar3 + 0x44,param_1,3);
  *(undefined4 *)(puVar3 + 2) = 0;
  DAT_051a9938 = puVar3 + 0x44;
  puVar3[0x44] = &PTR_FUN_04993bb0;
  *puVar3 = &PTR_LAB_04993bd0;
  puVar3[1] = 0;
  memset(puVar3 + 3,0,0x1e8);
  puVar3[0x43] = 0x800000000;
  DAT_051a9970 = puVar3;
  puVar3[0x40] = &PTR_LAB_04993b70;
  puVar3[0x42] = puVar3 + 0x41;
  puVar3[0x41] = puVar3 + 0x41;
  return puVar3;
}

