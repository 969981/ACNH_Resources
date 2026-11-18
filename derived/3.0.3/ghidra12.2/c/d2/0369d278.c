
long * FUN_0369d278(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (DAT_05aafde0 != (long *)0x0) {
    return DAT_05aafde0;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar5 = malloc(0x220);
  }
  else {
    plVar5 = param_1;
    if (param_1 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar6 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_0369d300;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x220,8);
  }
LAB_0369d300:
  FUN_038c69f0(plVar5 + 0x40,param_1,3);
  puVar2 = PTR_DAT_04bcb440;
  puVar1 = (undefined8 *)((long)plVar5 + 0x1c);
  DAT_05aafdd8 = plVar5 + 0x40;
  *(undefined1 *)((long)plVar5 + 0x9b) = 0;
  plVar5[2] = (long)puVar1;
  *(undefined4 *)(plVar5 + 3) = 0x80;
  plVar5[0x40] = (long)&PTR_FUN_04b43760;
  *plVar5 = (long)(puVar2 + 0x10);
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar5[1] = (long)(PTR_DAT_04bb2d88 + 0x10);
  uVar3 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar5 + 0x14) = uVar3;
  plVar5[0x1a] = 0;
  plVar5[0x1b] = (long)&PTR_LAB_04b43848;
  plVar5[0x17] = 0;
  *(undefined8 *)((long)plVar5 + 0xbd) = 0;
  *(undefined4 *)(plVar5 + 0x19) = 0;
  plVar5[0x1f] = (long)&PTR_LAB_04b43870;
  plVar5[0x15] = 0;
  plVar5[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar5 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar5 + 0x18b) = 0;
  plVar5[0x23] = (long)puVar2;
  puVar1 = (undefined8 *)((long)plVar5 + 0x14c);
  plVar5[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  plVar5[0x37] = 0;
  plVar5[0x33] = 0;
  plVar5[0x34] = 0;
  plVar5[0x35] = 0;
  *(undefined4 *)(plVar5 + 0x36) = 0;
  *(undefined4 *)(plVar5 + 0x32) = 0xffffffff;
  *(undefined4 *)(plVar5 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar5 + 0x39) = 0;
  plVar5[0x3a] = 0;
  plVar5[0x27] = (long)(puVar2 + 0x10);
  *PTR_DAT_04bcaae8 = 1;
  puVar2 = PTR_DAT_04bcaaf0;
  *(undefined4 *)(plVar5 + 0x3b) = 0;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  *plVar5 = (long)&PTR_FUN_04b43780;
  *(undefined8 *)((long)plVar5 + 0x1f5) = 0;
  plVar5[0x3e] = 0;
  DAT_05aafde0 = plVar5;
  plVar5[0x3c] = 0;
  plVar5[0x3d] = (long)&LAB_0369d490;
  return plVar5;
}

