
undefined8 * FUN_00908ca8(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (DAT_04cf00a0 != (undefined8 *)0x0) {
    return DAT_04cf00a0;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar6 = malloc(0x268);
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
        goto LAB_00908d30;
      }
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x268,8);
  }
LAB_00908d30:
  FUN_038c69f0(puVar6 + 0x49,param_1,3);
  puVar6[2] = 0;
  puVar6[3] = 0;
  DAT_04cf0098 = puVar6 + 0x49;
  puVar6[0x49] = &PTR_FUN_04926e88;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar1 = PTR_DAT_04bcb440 + 0x10;
  *(undefined4 *)(puVar6 + 0xc) = 0x80;
  *(undefined1 *)((long)puVar6 + 0xe3) = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[8] = 0;
  puVar6[9] = puVar1;
  puVar2 = (undefined8 *)((long)puVar6 + 100);
  puVar6[0xb] = puVar2;
  if (puVar2 != &DAT_0407ebb1) {
    *(undefined1 *)puVar2 = 0;
  }
  puVar6[10] = PTR_DAT_04bb2d88 + 0x10;
  uVar3 = FUN_006bd550(&DAT_0407ebb1,0);
  puVar6[0x20] = 0;
  *(undefined8 *)((long)puVar6 + 0x105) = 0;
  puVar6[0x23] = 0;
  puVar6[0x24] = &PTR_LAB_049272a0;
  *(undefined4 *)(puVar6 + 0x1d) = uVar3;
  *(undefined4 *)(puVar6 + 0x22) = 0;
  puVar6[0x28] = &PTR_LAB_049272c8;
  puVar6[0x1e] = 0;
  puVar6[0x1f] = 0;
  puVar1 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(puVar6 + 0x32) = 0x40;
  *(undefined1 *)((long)puVar6 + 0x1d3) = 0;
  puVar6[0x2c] = puVar1;
  puVar2 = (undefined8 *)((long)puVar6 + 0x194);
  puVar6[0x31] = puVar2;
  if (puVar2 != &DAT_0407ebb1) {
    *(undefined1 *)puVar2 = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  puVar6[0x40] = 0;
  puVar6[0x3c] = 0;
  puVar6[0x3d] = 0;
  puVar6[0x3e] = 0;
  *(undefined4 *)(puVar6 + 0x3f) = 0;
  *(undefined4 *)(puVar6 + 0x3b) = 0xffffffff;
  *(undefined4 *)(puVar6 + 0x41) = 0xffffffff;
  *(undefined4 *)(puVar6 + 0x42) = 0;
  puVar6[0x43] = 0;
  puVar6[0x30] = puVar1 + 0x10;
  *PTR_DAT_04bb5a28 = 1;
  puVar1 = PTR_DAT_04bb5a30;
  *(undefined4 *)(puVar6 + 0x44) = 0;
  puVar6[0x45] = 0;
  puVar6[0x47] = 0;
  DAT_04cf00a0 = puVar6;
  *(undefined8 *)puVar1 = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 8) = 0xffffffff;
  puVar6[9] = &PTR_FUN_04926ea8;
  puVar6[0x46] = &LAB_00908ed0;
  *(undefined8 *)((long)puVar6 + 0x23d) = 0;
  return puVar6;
}

