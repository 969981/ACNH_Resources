
undefined8 * FUN_02290e6c(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (DAT_054733d0 != (undefined8 *)0x0) {
    return DAT_054733d0;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar5 = malloc(0x938);
  }
  else {
    plVar4 = param_1;
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (undefined8 *)0x0;
        goto LAB_02290ef4;
      }
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x938,8);
  }
LAB_02290ef4:
  FUN_038c69f0(puVar5 + 0x123,param_1,3);
  puVar5[2] = 0;
  DAT_054733c8 = puVar5 + 0x123;
  puVar5[0x123] = &PTR_FUN_04a7d098;
  *puVar5 = &PTR_LAB_04a7d0b8;
  puVar5[1] = 0xffffffff00000000;
  puVar1 = (undefined8 *)((long)puVar5 + 0x4c);
  *(undefined8 *)((long)puVar5 + 0x1c) = 0x3f800000;
  *(undefined4 *)(puVar5 + 3) = 0;
  puVar5[8] = puVar1;
  *(undefined4 *)(puVar5 + 9) = 0x80;
  *(undefined1 *)((long)puVar5 + 0xcb) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar5[0x1c] = 0xffffffff00000000;
  *(undefined4 *)(puVar5 + 0x1a) = 7;
  puVar2 = PTR_DAT_04bb2d88;
  *(undefined8 *)((long)puVar5 + 0xf4) = 0x3f800000;
  puVar1 = (undefined8 *)((long)puVar5 + 0x124);
  puVar5[0x1b] = 0;
  *(undefined2 *)((long)puVar5 + 0xd4) = 0;
  *(undefined8 *)((long)puVar5 + 0x24) = 0;
  *(undefined8 *)((long)puVar5 + 0x2c) = 0;
  puVar5[0x1d] = 0;
  *(undefined4 *)(puVar5 + 0x1e) = 0;
  puVar5[0x23] = puVar1;
  *(undefined4 *)(puVar5 + 0x24) = 0x80;
  *(undefined1 *)((long)puVar5 + 0x1a3) = 0;
  puVar5[7] = puVar2 + 0x10;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar5[0x22] = puVar2 + 0x10;
  *(undefined8 *)((long)puVar5 + 0x104) = 0;
  *(undefined4 *)(puVar5 + 0x35) = 7;
  *(undefined2 *)((long)puVar5 + 0x1ac) = 0;
  *(undefined8 *)((long)puVar5 + 0xfc) = 0;
  puVar5[0x36] = 0;
  *(undefined4 *)((long)puVar5 + 0x1b7) = 0;
  *(undefined4 *)(puVar5 + 0x3a) = 0;
  puVar5[0x38] = &PTR_FUN_04a9c918;
  puVar5[0x39] = 0;
  puVar5[0x3b] = &PTR_FUN_0498d548;
  puVar5[0x3c] = &DAT_048f9750;
  puVar5[0x3d] = 0;
  puVar5[0x3e] = &DAT_048f9750;
  puVar2 = PTR_DAT_04bbc5d8;
  puVar5[0x42] = 0;
  puVar5[0x3f] = 0;
  puVar5[0x40] = puVar2 + 0x10;
  puVar5[0x44] = 0;
  puVar5[0x45] = &PTR_FUN_0498d548;
  puVar5[0x47] = 0;
  puVar5[0x46] = &DAT_048f9750;
  puVar5[0x49] = 0;
  puVar5[0x48] = &DAT_048f9750;
  puVar5[0x4a] = &PTR_FUN_0498d548;
  puVar5[0x4c] = 0;
  puVar5[0x4b] = &DAT_048f9750;
  puVar5[0x4e] = 0;
  puVar5[0x4d] = &DAT_048f9750;
  puVar5[0x41] = &PTR_FUN_048f9730;
  puVar5[0x43] = &PTR_FUN_048f9730;
  FUN_02ad636c(puVar5 + 0x4f);
  puVar5[0x11b] = &PTR_FUN_0498d548;
  puVar5[0x11d] = 0;
  puVar5[0x11c] = &DAT_048f9750;
  puVar5[0x11f] = 0;
  puVar5[0x11e] = &DAT_048f9750;
  *(undefined4 *)(puVar5 + 0x120) = 1;
  DAT_054733d0 = puVar5;
  return puVar5;
}

