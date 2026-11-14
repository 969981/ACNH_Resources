
undefined8 * FUN_0173aa60(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar6 = malloc(0x3a8);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar7 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x3a8,8);
    }
  }
  FUN_01739fc0(puVar6,param_1,param_2);
  *(undefined1 *)(puVar6 + 0x51) = 0;
  puVar1 = (undefined8 *)((long)puVar6 + 0x2a4);
  *puVar6 = &PTR_LAB_049bfea8;
  puVar6[0x53] = puVar1;
  *(undefined4 *)(puVar6 + 0x54) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x2e3) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar3 = PTR_DAT_04bb2bc0;
  puVar1 = (undefined8 *)((long)puVar6 + 0x2fc);
  puVar6[0x5e] = puVar1;
  *(undefined4 *)(puVar6 + 0x5f) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x33b) = 0;
  puVar2 = puVar3 + 0x10;
  puVar6[0x52] = puVar2;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar1 = (undefined8 *)((long)puVar6 + 0x354);
  puVar6[0x5d] = puVar2;
  puVar6[0x69] = puVar1;
  *(undefined4 *)(puVar6 + 0x6a) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x393) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined1 *)(puVar6 + 0x74) = 0;
  puVar6[0x68] = puVar3 + 0x10;
  puVar6[0x73] = 1;
  return puVar6;
}

