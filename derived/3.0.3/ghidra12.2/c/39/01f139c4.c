
/* WARNING: Removing unreachable block (ram,0x01f13af4) */

void FUN_01f139c4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  FUN_01e9dbb0();
  *(undefined8 *)((long)param_1 + 0xaf34) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0xaf3c) = 0xfffe;
  *param_1 = &PTR_FUN_04a64498;
  FUN_0277d4ac((undefined8 *)((long)param_1 + 0xaf3c));
  *(undefined4 *)((long)param_1 + 0xaf7c) = 0;
  *(undefined8 *)((long)param_1 + 0xaf54) = 0x3800000038;
  *(undefined8 *)((long)param_1 + 0xaf5c) = 0;
  *(undefined8 *)((long)param_1 + 0xaf44) = 0;
  *(undefined8 *)((long)param_1 + 0xaf4c) = 0;
  *(undefined8 *)((long)param_1 + 0xaf62) = 0;
  *(undefined8 *)((long)param_1 + 0xaf6c) = 0;
  param_1[0x15f0] = 0xfffe;
  *(undefined8 *)((long)param_1 + 0xaf71) = 0;
  FUN_0277d4ac();
  param_1[0x15f1] = 0xfffe;
  FUN_0277d4ac();
  uVar1 = *(undefined4 *)PTR_DAT_04bb3238;
  param_1[0x15f4] = &PTR_LAB_04a647f8;
  *(undefined1 *)(param_1 + 0x15f3) = 0;
  param_1[0x15f7] = 0;
  param_1[0x15f8] = &PTR_LAB_04a64848;
  uVar5 = DAT_053a5a38;
  *(undefined4 *)(param_1 + 0x15f2) = uVar1;
  *(undefined4 *)((long)param_1 + 0xaf94) = uVar1;
  uVar1 = DAT_053a5a44;
  *(undefined4 *)((long)param_1 + 0xaa34) = uVar5;
  uVar4 = DAT_053a5a30;
  uVar3 = DAT_053a5a28;
  *(undefined4 *)(param_1 + 0x1548) = uVar1;
  *(undefined8 *)((long)param_1 + 0xaa24) = uVar3;
  *(undefined8 *)((long)param_1 + 0xaa2c) = uVar4;
  param_1[0x1547] = DAT_053a5a3c;
  param_1[0x15f5] = param_1;
  param_1[0x15f6] = &LAB_01f13b44;
  param_1[0x158e] = param_1 + 0x15f4;
  puVar2 = PTR_LAB_04bc1df0;
  param_1[0x15fb] = 0;
  param_1[0x15f9] = param_1;
  param_1[0x15fa] = puVar2;
  if (*(int *)(param_1 + 0x1599) < *(int *)((long)param_1 + 0xaccc)) {
    *(undefined8 **)(param_1[0x159a] + (long)*(int *)(param_1 + 0x1599) * 8) = param_1 + 0x15f8;
    *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
  }
  return;
}

