
long * FUN_01a52a4c(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (DAT_053003f0 != (long *)0x0) {
    return DAT_053003f0;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    plVar6 = malloc(0x240);
  }
  else {
    plVar6 = param_1;
    if (param_1 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar7 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_01a52ad4;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x240,8);
  }
LAB_01a52ad4:
  FUN_038c69f0(plVar6 + 0x44,param_1,3);
  puVar2 = PTR_DAT_04bcb440;
  puVar1 = (undefined8 *)((long)plVar6 + 0x1c);
  DAT_053003e8 = plVar6 + 0x44;
  *(undefined1 *)((long)plVar6 + 0x9b) = 0;
  plVar6[2] = (long)puVar1;
  *(undefined4 *)(plVar6 + 3) = 0x80;
  plVar6[0x44] = (long)&PTR_FUN_049ffa58;
  *plVar6 = (long)(puVar2 + 0x10);
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar6[1] = (long)(PTR_DAT_04bb2d88 + 0x10);
  uVar4 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar6 + 0x14) = uVar4;
  plVar6[0x1a] = 0;
  plVar6[0x1b] = (long)&PTR_LAB_049ffb28;
  plVar6[0x17] = 0;
  *(undefined8 *)((long)plVar6 + 0xbd) = 0;
  *(undefined4 *)(plVar6 + 0x19) = 0;
  plVar6[0x1f] = (long)&PTR_LAB_049ffb50;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar6 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar6 + 0x18b) = 0;
  plVar6[0x23] = (long)puVar2;
  puVar1 = (undefined8 *)((long)plVar6 + 0x14c);
  plVar6[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar6[0x37] = 0;
  puVar2 = PTR_DAT_04bb2bc0;
  plVar6[0x33] = 0;
  plVar6[0x34] = 0;
  plVar6[0x35] = 0;
  *(undefined4 *)(plVar6 + 0x36) = 0;
  *(undefined4 *)(plVar6 + 0x32) = 0xffffffff;
  *(undefined4 *)(plVar6 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar6 + 0x39) = 0;
  plVar6[0x3a] = 0;
  plVar6[0x27] = (long)(puVar2 + 0x10);
  puVar3 = PTR_DAT_04bb8fa0;
  puVar2 = PTR_DAT_04bb8f98;
  *(undefined4 *)(plVar6 + 0x3b) = 0;
  plVar6[0x3c] = 0;
  *(undefined2 *)(plVar6 + 0x3f) = 1;
  plVar6[0x43] = 0;
  plVar6[0x42] = 0;
  plVar6[0x41] = 0;
  *puVar2 = 1;
  *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
  *(undefined4 *)(puVar3 + 0x48) = 0xffffffff;
  *(undefined8 *)puVar3 = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
  *plVar6 = (long)&PTR_LAB_049ffa78;
  plVar6[0x40] = (long)&LAB_01a52c80;
  DAT_053003f0 = plVar6;
  plVar6[0x3d] = 0;
  plVar6[0x3e] = 0;
  return plVar6;
}

