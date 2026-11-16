
void FUN_029b47a0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_04a97990;
  param_1[2] = 0;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  plVar1 = param_1 + 0x20;
  lVar2 = 0x3ff;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = param_1 + 10;
  do {
    plVar1[-0xb] = (long)plVar1;
    plVar1[-0x16] = (long)(plVar1 + -0xb);
    lVar2 = lVar2 + -3;
    *plVar1 = (long)(plVar1 + 0xb);
    plVar1 = plVar1 + 0x21;
  } while (lVar2 != 0);
  param_1[8] = param_1 + 10;
  param_1[0x2bff] = 0;
  *(undefined4 *)(param_1 + 9) = 0x400;
  puVar3 = (undefined8 *)((long)param_1 + 0x16064);
  do {
    *puVar3 = 0;
    puVar3[1] = 0x3f80000000000000;
    puVar3[4] = 0x3f800000;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3 = puVar3 + 5;
  } while (puVar3 != (undefined8 *)((long)param_1 + 0x1b064));
  *(undefined4 *)(param_1 + 0x2c0c) = 0;
  *(undefined1 *)((long)param_1 + 0x1b06c) = 0;
  param_1[0x2c0a] = (undefined8 *)((long)param_1 + 0x16064);
  param_1[0x2c0b] = 0x400;
  *(undefined4 *)(param_1 + 0x360d) = 2;
  *(undefined4 *)(param_1 + 0x360e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3612) = 0;
  *(undefined4 *)(param_1 + 0x3615) = 0;
  *(undefined1 *)(param_1 + 0x3618) = 0;
  *(undefined1 *)(param_1 + 0x361a) = 0;
  param_1[0x360f] = &PTR_LAB_04a97930;
  *(undefined4 *)((long)param_1 + 0x1b094) = 0x40400000;
  *(undefined8 *)((long)param_1 + 0x1b0ac) = 0x40400000;
  *(undefined8 *)((long)param_1 + 0x1b0b4) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1b0c4) = 0x3f80000000000000;
  param_1[0x3610] = 0;
  param_1[0x3611] = 0;
  param_1[0x3613] = 0;
  param_1[0x3614] = 0;
  *(undefined1 *)(param_1 + 0x361c) = 0;
  *(undefined1 *)((long)param_1 + 0x1b11c) = 0;
  param_1[0x361b] = &PTR_LAB_04a97970;
  *(undefined4 *)((long)param_1 + 0x1b104) = 0;
  *(undefined8 *)((long)param_1 + 0x1b0fc) = 0;
  *(undefined8 *)((long)param_1 + 0x1b0f4) = 0;
  *(undefined8 *)((long)param_1 + 0x1b0ec) = 0;
  *(undefined8 *)((long)param_1 + 0x1b0e4) = 0;
  param_1[0x3621] = 0x40000000;
  param_1[0x3622] = 0x3f80000000000000;
  param_1[0x3624] = 0xffffffffffffffff;
  param_1[0x3625] = 0x3f800000;
  param_1[0x3626] = 0xffffffff00000000;
  param_1[0x3627] = 0x100000000;
  return;
}

