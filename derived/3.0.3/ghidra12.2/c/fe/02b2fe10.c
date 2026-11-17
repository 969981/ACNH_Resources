
void FUN_02b2fe10(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  
  puVar2 = PTR_DAT_04bb2020;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  pcStack_90 = "Structure";
  FUN_00751ec0(param_1,&local_98,param_2,param_3);
  puVar3 = PTR_DAT_04bb3380;
  *param_1 = (long)&PTR_FUN_04aa1d88;
  param_1[0x19] = (long)"mAirportSetOffsetUnitX";
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 8;
  param_1[0x18] = (long)(puVar3 + 0x10);
  plVar7 = param_1 + 5;
  lVar6 = *plVar7;
  if (*plVar7 != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x10);
    } while (lVar6 != 0);
    plVar7 = (long *)(lVar5 + 0x10);
  }
  *plVar7 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  puVar4 = (undefined4 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar4 = 10;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 10;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  param_1[0x1f] = (long)"mAirportSetOffsetUnitZ";
  param_1[0x20] = 0;
  plVar7 = param_1 + 0x1e;
  *plVar7 = (long)(puVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x22) = 8;
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar7);
  puVar4 = (undefined4 *)(**(code **)(*plVar7 + 0xf0))(plVar7);
  *puVar4 = 3;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x23) = 3;
  }
  puVar1 = puVar2 + 0x10;
  local_68 = 8;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  pcStack_90 = "mAirportColor0";
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_a8 = &DAT_3f8000003f800000;
  puStack_a0 = &DAT_3f8000003f800000;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_02b30520(param_1 + 0x24,&local_98,&local_a8,param_1);
  pcStack_90 = "mAirportColor1";
  local_68 = 8;
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_a8 = &DAT_3f8000003f800000;
  puStack_a0 = &DAT_3f8000003f800000;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_02b30520(param_1 + 0x53,&local_98,&local_a8,param_1);
  pcStack_90 = "mAirplaneColor0";
  local_68 = 8;
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_a8 = &DAT_3f8000003f800000;
  puStack_a0 = &DAT_3f8000003f800000;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_02b30520(param_1 + 0x82,&local_98,&local_a8,param_1);
  pcStack_90 = "mAirplaneColor1";
  local_68 = 8;
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  local_a8 = &DAT_3f8000003f800000;
  puStack_a0 = &DAT_3f8000003f800000;
  local_98 = puVar1;
  local_88 = puVar1;
  local_78 = puVar1;
  FUN_02b30520(param_1 + 0xb1,&local_98,&local_a8,param_1);
  param_1[0xe2] = 0;
  param_1[0xe1] = (long)"mOfficeSetOffsetUnitX";
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 8;
  param_1[0xe0] = (long)(puVar3 + 0x10);
  param_1[0xe5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe0);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xe0] + 0xf0))(param_1 + 0xe0);
  *puVar4 = 3;
  if ((*(uint *)(param_1 + 0xe4) >> 7 & 1) == 0) {
    param_1[0xe5] = 0;
    *(undefined4 *)(param_1 + 0xe5) = 3;
  }
  param_1[0xe8] = 0;
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) & 0xfeffffff;
  param_1[0xe7] = (long)"mOfficeSetOffsetUnitZ";
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xea) = 8;
  param_1[0xe6] = (long)(puVar3 + 0x10);
  param_1[0xeb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe6);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xe6] + 0xf0))(param_1 + 0xe6);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0xea) >> 7 & 1) == 0) {
    param_1[0xeb] = 0;
    *(undefined4 *)(param_1 + 0xeb) = 0;
  }
  param_1[0xee] = 0;
  *(uint *)(param_1 + 0xea) = *(uint *)(param_1 + 0xea) & 0xfeffffff;
  param_1[0xed] = (long)"mTanukichiTentSetOffsetUnitX";
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 8;
  param_1[0xec] = (long)(puVar3 + 0x10);
  param_1[0xf1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xec);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xec] + 0xf0))(param_1 + 0xec);
  *puVar4 = 3;
  if ((*(uint *)(param_1 + 0xf0) >> 7 & 1) == 0) {
    param_1[0xf1] = 0;
    *(undefined4 *)(param_1 + 0xf1) = 3;
  }
  *(uint *)(param_1 + 0xf0) = *(uint *)(param_1 + 0xf0) & 0xfeffffff;
  param_1[0xf3] = (long)"mTanukichiTentSetOffsetUnitZ";
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 8;
  param_1[0xf2] = (long)(puVar3 + 0x10);
  param_1[0xf7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xf2);
  puVar4 = (undefined4 *)(**(code **)(param_1[0xf2] + 0xf0))(param_1 + 0xf2);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0xf6) >> 7 & 1) == 0) {
    param_1[0xf7] = 0;
    *(undefined4 *)(param_1 + 0xf7) = 0;
  }
  *(uint *)(param_1 + 0xf6) = *(uint *)(param_1 + 0xf6) & 0xfeffffff;
  local_98 = puVar2 + 0x10;
  local_68 = 8;
  pcStack_90 = "mNpcHouseCurtainColorArray";
  param_1[0xf9] = (long)"mNpcHouseCurtainColorArray";
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 8;
  puStack_80 = &DAT_0407ebb1;
  puStack_70 = &DAT_0407ebb1;
  puVar2 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0xfd] = 0;
  param_1[0xf8] = (long)puVar2;
  local_a8 = &DAT_3f8000003f800000;
  puStack_a0 = &DAT_3f8000003f800000;
  local_88 = local_98;
  local_78 = local_98;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xf8);
  param_1[0x100] = 0;
  param_1[0x103] = (long)(param_1 + 0x10b);
  param_1[0xff] = 0;
  param_1[0x10b] = (long)(param_1 + 0x113);
  param_1[0xfe] = 0;
  param_1[0x113] = (long)(param_1 + 0x11b);
  param_1[0x101] = (long)(param_1 + 0x103);
  param_1[0x11b] = (long)(param_1 + 0x123);
  param_1[0x15b] = 0;
  param_1[0x123] = (long)(param_1 + 299);
  param_1[0x102] = (long)(param_1 + 0x103);
  param_1[299] = (long)(param_1 + 0x133);
  param_1[0x133] = (long)(param_1 + 0x13b);
  param_1[0x13b] = (long)(param_1 + 0x143);
  param_1[0x143] = (long)(param_1 + 0x14b);
  param_1[0x14b] = (long)(param_1 + 0x153);
  param_1[0x153] = (long)(param_1 + 0x15b);
  if (param_1 + 0x163 != (long *)0x0) {
    param_1[0x100] = (long)(param_1 + 0x163);
    *(undefined4 *)((long)param_1 + 0x7fc) = 0xc;
  }
  param_1[0xf8] = (long)&PTR_LAB_04aa24e8;
  iVar8 = 0xc;
  do {
    if ((int)param_1[0xff] < *(int *)((long)param_1 + 0x7fc)) {
      plVar7 = (long *)param_1[0x101];
      if (plVar7 != (long *)0x0) {
        param_1[0x101] = *plVar7;
      }
      FUN_00744b60(plVar7,&local_98,&local_a8,0);
      *plVar7 = (long)&DAT_04aa2668;
      if ((int)param_1[0xff] < *(int *)((long)param_1 + 0x7fc)) {
        *(long **)(param_1[0x100] + (long)(int)param_1[0xff] * 8) = plVar7;
        *(int *)(param_1 + 0xff) = (int)param_1[0xff] + 1;
      }
    }
    else {
      plVar7 = (long *)0x0;
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,param_1 + 0xf8);
    iVar8 = iVar8 + -1;
    *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xfffffffc;
  } while (iVar8 != 0);
  param_1[0x171] = 0;
  param_1[0x170] = (long)"mTsuSetOffsetUnitX";
  param_1[0x172] = 0;
  *(undefined4 *)(param_1 + 0x173) = 8;
  param_1[0x16f] = (long)(puVar3 + 0x10);
  param_1[0x174] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x16f);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x16f] + 0xf0))(param_1 + 0x16f);
  *puVar4 = 4;
  if ((*(uint *)(param_1 + 0x173) >> 7 & 1) == 0) {
    param_1[0x174] = 0;
    *(undefined4 *)(param_1 + 0x174) = 4;
  }
  param_1[0x177] = 0;
  *(uint *)(param_1 + 0x173) = *(uint *)(param_1 + 0x173) & 0xfeffffff;
  param_1[0x176] = (long)"mTsuSetOffsetUnitZ";
  param_1[0x178] = 0;
  *(undefined4 *)(param_1 + 0x179) = 8;
  param_1[0x175] = (long)(puVar3 + 0x10);
  param_1[0x17a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x175);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x175] + 0xf0))(param_1 + 0x175);
  *puVar4 = 4;
  if ((*(uint *)(param_1 + 0x179) >> 7 & 1) == 0) {
    param_1[0x17a] = 0;
    *(undefined4 *)(param_1 + 0x17a) = 4;
  }
  param_1[0x17d] = 0;
  *(uint *)(param_1 + 0x179) = *(uint *)(param_1 + 0x179) & 0xfeffffff;
  param_1[0x17c] = (long)"mWheBaseUnitX";
  param_1[0x17e] = 0;
  *(undefined4 *)(param_1 + 0x17f) = 8;
  param_1[0x17b] = (long)(puVar3 + 0x10);
  param_1[0x180] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x17b);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x17b] + 0xf0))(param_1 + 0x17b);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x17f) >> 7 & 1) == 0) {
    param_1[0x180] = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  param_1[0x183] = 0;
  *(uint *)(param_1 + 0x17f) = *(uint *)(param_1 + 0x17f) & 0xfeffffff;
  param_1[0x182] = (long)"mWheBaseUnitZ";
  param_1[0x184] = 0;
  *(undefined4 *)(param_1 + 0x185) = 8;
  param_1[0x181] = (long)(puVar3 + 0x10);
  param_1[0x186] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x181);
  puVar4 = (undefined4 *)(**(code **)(param_1[0x181] + 0xf0))(param_1 + 0x181);
  *puVar4 = 0;
  if ((*(uint *)(param_1 + 0x185) >> 7 & 1) == 0) {
    param_1[0x186] = 0;
    *(undefined4 *)(param_1 + 0x186) = 0;
  }
  *(uint *)(param_1 + 0x185) = *(uint *)(param_1 + 0x185) & 0xfeffffff;
  return;
}

