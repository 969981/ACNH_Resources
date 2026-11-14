
undefined8 * FUN_01942fd8(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (DAT_052c8808 != (undefined8 *)0x0) {
    return DAT_052c8808;
  }
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar7 = malloc(0x238);
  }
  else {
    plVar6 = param_1;
    if (param_1 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        puVar7 = (undefined8 *)0x0;
        goto LAB_01943060;
      }
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x238,8);
  }
LAB_01943060:
  FUN_038c69f0(puVar7 + 0x43,param_1,3);
  puVar2 = PTR_DAT_04bb3238;
  DAT_052c87d0 = puVar7 + 0x43;
  *(undefined4 *)(puVar7 + 6) = 0x80;
  *puVar7 = 0xffffffffffffffff;
  puVar7[0x43] = &PTR_FUN_049e0e18;
  puVar3 = PTR_DAT_04bcb440;
  puVar7[1] = 0;
  uVar4 = *(undefined4 *)puVar2;
  *(undefined1 *)((long)puVar7 + 0xb3) = 0;
  *(undefined4 *)(puVar7 + 1) = uVar4;
  puVar7[2] = 0;
  puVar7[3] = puVar3 + 0x10;
  *(undefined4 *)(puVar7 + 2) = uVar4;
  puVar1 = (undefined8 *)((long)puVar7 + 0x34);
  puVar7[5] = puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar7[4] = PTR_DAT_04bb2d88 + 0x10;
  uVar4 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(puVar7 + 0x17) = uVar4;
  puVar7[0x1d] = 0;
  puVar7[0x1e] = &PTR_LAB_049e0f00;
  puVar7[0x1a] = 0;
  *(undefined8 *)((long)puVar7 + 0xd5) = 0;
  *(undefined4 *)(puVar7 + 0x1c) = 0;
  puVar7[0x22] = &PTR_LAB_049e0f28;
  puVar7[0x18] = 0;
  puVar7[0x19] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(puVar7 + 0x2c) = 0x40;
  *(undefined1 *)((long)puVar7 + 0x1a3) = 0;
  puVar7[0x26] = puVar2;
  puVar1 = (undefined8 *)((long)puVar7 + 0x164);
  puVar7[0x2b] = puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar7[0x3a] = 0;
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(puVar7 + 0x35) = 0xffffffff;
  *(undefined4 *)(puVar7 + 0x3b) = 0xffffffff;
  puVar7[0x38] = 0;
  puVar7[0x36] = 0;
  puVar7[0x37] = 0;
  *(undefined4 *)(puVar7 + 0x39) = 0;
  *(undefined4 *)(puVar7 + 0x3c) = 0;
  puVar7[0x3d] = 0;
  *(undefined4 *)(puVar7 + 0x3e) = 0;
  puVar7[0x41] = 0;
  DAT_052c8808 = puVar7;
  puVar7[0x2a] = puVar2 + 0x10;
  DAT_052c87e8 = 1;
  DAT_052c87ec = 0xffffffffffffffff;
  DAT_052c87f4 = 0xffffffff;
  puVar7[3] = &PTR_FUN_049e0e38;
  *(undefined8 *)((long)puVar7 + 0x20d) = 0;
  puVar7[0x3f] = 0;
  puVar7[0x40] = &LAB_01943200;
  return puVar7;
}

