
undefined8 * FUN_009302a8(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_04cf47c8 != (undefined8 *)0x0) {
    return DAT_04cf47c8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0xb0);
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
        goto LAB_00930330;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0xb0,8);
  }
LAB_00930330:
  FUN_038c69f0(puVar3 + 0x12,param_1,3);
  DAT_04cf47c0 = puVar3 + 0x12;
  puVar3[0x12] = &PTR_FUN_04928858;
  *(undefined4 *)(puVar3 + 1) = 0xffffffff;
  *(undefined4 *)(puVar3 + 7) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0xd) = 0xffffffff;
  *puVar3 = &PTR_LAB_04928878;
  DAT_04cf47c8 = puVar3;
  puVar3[2] = &PTR_LAB_049288d8;
  puVar3[3] = puVar3;
  puVar3[4] = &LAB_009303f4;
  puVar3[5] = 0;
  puVar3[6] = &PTR_LAB_04928898;
  puVar3[8] = &PTR_LAB_04928900;
  puVar3[9] = puVar3;
  puVar3[0xb] = 0;
  puVar3[0xc] = &PTR_LAB_049288b8;
  puVar3[10] = &LAB_00930418;
  puVar3[0xe] = &PTR_LAB_04928928;
  puVar3[0xf] = puVar3;
  puVar3[0x10] = &LAB_00930460;
  puVar3[0x11] = 0;
  return puVar3;
}

