
void FUN_02ce17a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *param_1 = &PTR_LAB_04ab86e8;
  *(undefined1 *)(param_1 + 1) = 0xff;
  FUN_02ce08e0(param_1 + 2);
  FUN_02cde8f4(param_1 + 0xf);
  FUN_01a55b08(param_1 + 0x2a);
  puVar1 = PTR_DAT_04bc0010 + 0x68;
  param_1[0x1e00] = PTR_DAT_04bc0010 + 0x10;
  param_1[0x1e01] = puVar1;
  memset(param_1 + 0x1e02,0,72000);
  lVar8 = 9000;
  puVar6 = param_1 + 0x1e02;
  do {
    *puVar6 = 0xfffe;
    FUN_0277d4ac(puVar6);
    lVar8 = lVar8 + -1;
    puVar6 = puVar6 + 1;
  } while (lVar8 != 0);
  lVar8 = 9000;
  uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar3 = PTR_DAT_04bb37e0[2];
  uVar4 = PTR_DAT_04bb37e0[3];
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  puVar7 = (undefined4 *)((long)param_1 + 0xf014);
  do {
    *(undefined2 *)(puVar7 + -1) = uVar5;
    lVar8 = lVar8 + -1;
    *(undefined1 *)((long)puVar7 + -2) = uVar3;
    *(undefined1 *)((long)puVar7 + -1) = uVar4;
    *puVar7 = uVar2;
    puVar7 = puVar7 + 2;
  } while (lVar8 != 0);
  lVar8 = 9000;
  puVar7 = (undefined4 *)((long)param_1 + 0xf014);
  do {
    *(undefined2 *)(puVar7 + -1) = uVar5;
    lVar8 = lVar8 + -1;
    *(undefined1 *)((long)puVar7 + -2) = uVar3;
    *(undefined1 *)((long)puVar7 + -1) = uVar4;
    *puVar7 = uVar2;
    puVar7 = puVar7 + 2;
  } while (lVar8 != 0);
  *(undefined4 *)(param_1 + 0x412a) = 0x50;
  memset((void *)((long)param_1 + 0x20954),0,0x468);
  param_1[0x41b8] = 0;
  param_1[0x41b9] = 0;
  puVar6 = param_1 + 0x41c0;
  param_1[0x41ba] = param_1 + 0x41bc;
  for (lVar8 = 0x2326; puVar6[-4] = puVar6 + -2, lVar8 != 0; lVar8 = lVar8 + -2) {
    puVar6[-2] = puVar6;
    puVar6 = puVar6 + 4;
  }
  param_1[0x41bb] = param_1 + 0x41bc;
  param_1[0x880a] = 0;
  if (param_1 + 0x880c != (undefined8 *)0x0) {
    param_1[0x41b8] = 0x232800000000;
    param_1[0x41b9] = param_1 + 0x880c;
  }
  memset(param_1 + 0xab34,0,78000);
  param_1[0xd14a] = 0xffffffffffffffff;
  param_1[0xd14b] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xd14c) = 0xffffffff;
  param_1[0xd14e] = 0;
  param_1[0xd14f] = 0;
  param_1[0xd150] = 0;
  param_1[0xd151] = 0;
  param_1[0xd152] = 0;
  param_1[0xd153] = 0;
  param_1[0xd154] = 0;
  param_1[0xd155] = 0;
  param_1[0xd156] = 0;
  param_1[0xd157] = 0;
  param_1[0xd158] = 0;
  param_1[0xd159] = 0;
  param_1[0xd15a] = 0;
  param_1[0xd15b] = 0;
  param_1[0xd15c] = 0;
  param_1[0xd15d] = 0;
  param_1[0xd15e] = 0;
  param_1[0xd15f] = 0;
  *(undefined4 *)(param_1 + 0xd160) = 0;
  *(undefined1 **)((long)param_1 + 0x68a64) = &DAT_ffffffff00000006;
  *(undefined4 *)((long)param_1 + 0x68a6c) = 0xffffffff;
  *(undefined1 **)((long)param_1 + 0x68a74) = &DAT_ffffffff00000006;
  *(undefined4 *)((long)param_1 + 0x68a7c) = 0xffffffff;
  *(undefined1 **)((long)param_1 + 0x68a84) = &DAT_ffffffff00000006;
  *(undefined4 *)((long)param_1 + 0x68a8c) = 0xffffffff;
  *(undefined1 **)((long)param_1 + 0x68a94) = &DAT_ffffffff00000006;
  *(undefined4 *)((long)param_1 + 0x68a9c) = 0xffffffff;
  *(undefined1 **)((long)param_1 + 0x68aa4) = &DAT_ffffffff00000006;
  *(undefined4 *)((long)param_1 + 0x68aac) = 0xffffffff;
  *(undefined1 **)((long)param_1 + 0x68ab4) = &DAT_ffffffff00000006;
  *(undefined4 *)((long)param_1 + 0x68abc) = 0xffffffff;
  *(undefined1 **)((long)param_1 + 0x68ac4) = &DAT_ffffffff00000006;
  *(undefined4 *)((long)param_1 + 0x68acc) = 0xffffffff;
  *(undefined1 **)((long)param_1 + 0x68ad4) = &DAT_ffffffff00000006;
  *(undefined4 *)((long)param_1 + 0x68adc) = 0xffffffff;
  *(undefined1 **)((long)param_1 + 0x68ae4) = &DAT_ffffffff00000006;
  *(undefined4 *)((long)param_1 + 0x68aec) = 0xffffffff;
  *(undefined1 **)((long)param_1 + 0x68af4) = &DAT_ffffffff00000006;
  *(undefined4 *)((long)param_1 + 0x68afc) = 0xffffffff;
  return;
}

