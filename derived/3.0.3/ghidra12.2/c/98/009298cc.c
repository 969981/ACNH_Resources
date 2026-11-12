
undefined8 * FUN_009298cc(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_04cf1af0 != (undefined8 *)0x0) {
    return DAT_04cf1af0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x50);
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
        goto LAB_00929954;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x50,8);
  }
LAB_00929954:
  FUN_038c69f0(puVar3 + 6,param_1,3);
  DAT_04cf1ae8 = puVar3 + 6;
  *(undefined4 *)(puVar3 + 1) = 0xffffffff;
  puVar3[5] = 0;
  puVar3[6] = &PTR_FUN_04928590;
  *puVar3 = &PTR_LAB_049285b0;
  DAT_04cf1af0 = puVar3;
  puVar3[2] = &PTR_LAB_049285d0;
  puVar3[3] = puVar3;
  puVar3[4] = &LAB_009299c8;
  return puVar3;
}

