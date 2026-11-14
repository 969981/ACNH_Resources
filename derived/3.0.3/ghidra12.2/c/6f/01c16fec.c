
undefined8 * FUN_01c16fec(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (DAT_05349958 != (undefined8 *)0x0) {
    return DAT_05349958;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar6 = malloc(0x228);
  }
  else {
    plVar5 = param_1;
    if (param_1 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        puVar6 = (undefined8 *)0x0;
        goto LAB_01c17074;
      }
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x228,8);
  }
LAB_01c17074:
  FUN_038c69f0(puVar6 + 0x41,param_1,3);
  puVar2 = PTR_DAT_04bcb440;
  DAT_05349758 = puVar6 + 0x41;
  *(undefined4 *)(puVar6 + 4) = 0x80;
  puVar6[0x41] = &PTR_FUN_04a3fd10;
  puVar1 = (undefined8 *)((long)puVar6 + 0x24);
  *(undefined1 *)((long)puVar6 + 0xa3) = 0;
  puVar6[3] = puVar1;
  *puVar6 = &PTR_FUN_04a3fd30;
  puVar6[1] = puVar2 + 0x10;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar6[2] = PTR_DAT_04bb2d88 + 0x10;
  uVar3 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(puVar6 + 0x15) = uVar3;
  puVar6[0x1b] = 0;
  puVar6[0x1c] = &PTR_LAB_04a3fe00;
  puVar6[0x18] = 0;
  *(undefined8 *)((long)puVar6 + 0xc5) = 0;
  *(undefined4 *)(puVar6 + 0x1a) = 0;
  puVar6[0x20] = &PTR_LAB_04a3fe28;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(puVar6 + 0x2a) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x193) = 0;
  puVar6[0x24] = puVar2;
  puVar1 = (undefined8 *)((long)puVar6 + 0x154);
  puVar6[0x29] = puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(puVar6 + 0x33) = 0xffffffff;
  *(undefined4 *)(puVar6 + 0x39) = 0xffffffff;
  puVar6[0x38] = 0;
  puVar6[0x36] = 0;
  puVar6[0x34] = 0;
  puVar6[0x35] = 0;
  *(undefined4 *)(puVar6 + 0x37) = 0;
  *(undefined4 *)(puVar6 + 0x3a) = 0;
  puVar6[0x3b] = 0;
  *(undefined4 *)(puVar6 + 0x3c) = 0;
  DAT_05349958 = puVar6;
  puVar6[0x28] = puVar2 + 0x10;
  DAT_05349760 = 1;
  DAT_05349774 = 0xffffffff;
  DAT_05349764 = 0xffffffffffffffff;
  DAT_0534976c = 0xffffffffffffffff;
  puVar6[1] = &PTR_FUN_04a3fd50;
  *(undefined8 *)((long)puVar6 + 0x1fd) = 0;
  puVar6[0x3f] = 0;
  puVar6[0x3d] = 0;
  puVar6[0x3e] = &LAB_01c17200;
  return puVar6;
}

