
undefined8 * FUN_038c11d8(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05ae7458 != (undefined8 *)0x0) {
    return DAT_05ae7458;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x4b8);
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
        goto LAB_038c1260;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x4b8,8);
  }
LAB_038c1260:
  FUN_038c69f0(puVar3 + 0x93,param_1,3);
  puVar3[0x21] = 0;
  puVar3[0x88] = 0;
  DAT_05ae7450 = puVar3 + 0x93;
  puVar3[0x93] = &PTR_FUN_04b63f88;
  *puVar3 = &PTR_LAB_04b63fa8;
  puVar3[0x8f] = 0;
  *(undefined1 *)(puVar3 + 0x90) = 0;
  *(undefined4 *)((long)puVar3 + 0x484) = 0;
  puVar3[0x91] = 0;
  *(undefined8 *)((long)puVar3 + 0x48d) = 0;
  DAT_05ae7458 = puVar3;
  return puVar3;
}

