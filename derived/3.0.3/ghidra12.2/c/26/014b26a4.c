
undefined8 * FUN_014b26a4(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  if (DAT_051e7870 != (undefined8 *)0x0) {
    return DAT_051e7870;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar4 = malloc(0x40);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar6 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_014b2730;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40,8);
  }
LAB_014b2730:
  FUN_038c69f0(puVar4 + 4,param_1,3);
  puVar4[2] = 0;
  puVar4[4] = &PTR_FUN_049a6638;
  DAT_051e7868 = puVar4 + 4;
  *puVar4 = &PTR_LAB_049a6658;
  puVar4[1] = 0;
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    puVar5 = malloc(0x30);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar5 = (undefined8 *)(lVar6 + 8);
    if (lVar2 != 0) {
      puVar5 = (undefined8 *)(lVar2 + 0xa8);
    }
    puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x30,8);
  }
  *(undefined4 *)(puVar5 + 1) = 0xffffffff;
  *puVar5 = &PTR_LAB_049a66b8;
  puVar4[3] = puVar5;
  DAT_051e7870 = puVar4;
  puVar5[2] = &PTR_LAB_049a66d8;
  puVar5[3] = puVar4;
  puVar5[4] = &LAB_014b280c;
  puVar5[5] = 0;
  return puVar4;
}

