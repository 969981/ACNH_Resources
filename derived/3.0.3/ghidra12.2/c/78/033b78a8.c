
void FUN_033b78a8(undefined8 *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined *local_a8;
  char *local_a0;
  undefined *local_98;
  undefined1 *puStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined4 local_78;
  undefined *local_70;
  undefined *puStack_68;
  
  param_1[4] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar2 = PTR_DAT_04bd4738;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_04b242b0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  plVar12 = param_1 + 1;
  *plVar12 = (long)(puVar2 + 0x10);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0x94) = 0xfffe;
  FUN_0277d4ac();
  plVar13 = param_1 + 0x1e;
  *plVar13 = (long)(PTR_DAT_04bb60a0 + 0x10);
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x14] = 0x7f7fffff7f7fffff;
  param_1[0x15] = 0xff7fffffff7fffff;
  puVar2 = PTR_DAT_04bcb4d0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0xffffffff00000000;
  param_1[0x17] = puVar2 + 0x10;
  param_1[0x18] = 0;
  puVar2 = PTR_DAT_04bb3170;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((long)param_1 + 0x233) = 0;
  *(undefined1 *)((long)param_1 + 0x134) = 0;
  *(undefined2 *)((long)param_1 + 0x9c) = *(undefined2 *)puVar2;
  param_1[0x1f] = "UI3DSetParamList";
  param_1[0x20] = 0;
  param_1[0x25] = (long)param_1 + 0x134;
  *(undefined4 *)(param_1 + 0x26) = 0x100;
  puVar2 = PTR_DAT_04bb21f8;
  *(undefined4 *)(param_1 + 0x4c) = 0x40;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x48] = plVar13;
  param_1[0x49] = 0;
  *(undefined1 *)((long)param_1 + 0x2a3) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = puVar2 + 0x10;
  pcVar1 = (char *)((long)param_1 + 0x264);
  param_1[0x4b] = pcVar1;
  if (pcVar1 != "DefaultName") {
    *(undefined4 *)((long)param_1 + 0x26b) = 0x656d614e;
    uVar5 = s_DefaultName_0405c6e7._0_8_;
    *(undefined1 *)((long)param_1 + 0x26f) = 0;
    *(undefined8 *)pcVar1 = uVar5;
  }
  puVar3 = PTR_DAT_04bb2bc0;
  *(undefined1 *)(param_1 + 0x55) = 1;
  puVar2 = PTR_DAT_04bb2020;
  param_1[0x1e] = &PTR_LAB_04b24478;
  param_1[0x4a] = puVar3 + 0x10;
  puVar2 = puVar2 + 0x10;
  local_a0 = "mPaletteList";
  puStack_90 = &DAT_04091b2c;
  puStack_80 = &DAT_0407ebb1;
  local_78 = 0;
  puVar3 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x57] = 0;
  param_1[0x56] = puVar3;
  puVar3 = PTR_DAT_04bb2698;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  local_a8 = puVar2;
  local_98 = puVar2;
  local_88 = puVar2;
  if (*(long *)puVar3 != 0) {
    lVar7 = FUN_038cb610(*(long *)puVar3,param_1 + 0x56);
    param_1[0x57] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar10 = (long *)(lVar7 + 0x70);
      lVar8 = *plVar10;
      plVar11 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)(param_1 + 0x56));
      *plVar10 = (long)plVar11;
      *plVar11 = lVar8;
      plVar11[1] = (long)plVar10;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar11;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  param_1[0x5a] = PTR_DAT_04bb3050 + 0x10;
  (**(code **)(local_a8 + 0x18))(&local_a8);
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5b] = local_a0;
  *(undefined4 *)(param_1 + 0x5e) = local_78;
  puVar3 = PTR_DAT_04bb60a0;
  param_1[0x5f] = 0;
  param_1[0x5a] = puVar3 + 0x10;
  (**(code **)(param_1[0x1e] + 0x140))(plVar13,param_1 + 0x5a);
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x56] = &PTR_LAB_04b24620;
  param_1[0x5a] = &PTR_LAB_04b246e0;
  param_1[0x1e] = &PTR_LAB_04b242d0;
  *(undefined8 *)((long)param_1 + 0x33c) = 0;
  local_a0 = "UI3DSetParam";
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x66] = &PTR_LAB_04b26190;
  *(undefined1 *)(param_1 + 0x67) = 0;
  puStack_68 = &DAT_040eb845;
  local_a8 = puVar2;
  local_70 = puVar2;
  FUN_033c6980(param_1 + 0x69,&local_a8,&local_70,0);
  param_1[0xfb] = "UI3DDisplayUseParamList";
  param_1[0xf9] = 0;
  *(undefined1 *)((long)param_1 + 0x814) = 0;
  param_1[0x101] = (undefined1 *)((long)param_1 + 0x814);
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0xfe) = 0;
  param_1[0xfa] = puVar3 + 0x10;
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x102) = 0x100;
  *(undefined1 *)((long)param_1 + 0x913) = 0;
  puVar2 = PTR_DAT_04bb21f8 + 0x10;
  *(undefined1 *)(param_1 + 0x123) = 0;
  param_1[0x124] = param_1 + 0xfa;
  param_1[0x125] = 0;
  *(undefined4 *)(param_1 + 0x128) = 0x40;
  *(undefined1 *)((long)param_1 + 0x983) = 0;
  param_1[0x100] = puVar2;
  pcVar1 = (char *)((long)param_1 + 0x944);
  param_1[0x127] = pcVar1;
  if (pcVar1 != "DefaultName") {
    *(undefined1 *)((long)param_1 + 0x94f) = 0;
    *(undefined4 *)((long)param_1 + 0x94b) = 0x656d614e;
    *(undefined8 *)pcVar1 = s_DefaultName_0405c6e7._0_8_;
  }
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  param_1[0x126] = puVar2;
  *(undefined1 *)(param_1 + 0x131) = 1;
  puVar3 = PTR_DAT_04bb2020;
  param_1[0xfa] = &PTR_LAB_04b24d80;
  puVar6 = PTR_DAT_04bd0d40;
  local_78 = 0;
  puVar3 = puVar3 + 0x10;
  local_a0 = "mPaletteList";
  puStack_90 = &DAT_04091b2c;
  puStack_80 = &DAT_0407ebb1;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x132] = puVar6 + 0x10;
  puVar6 = PTR_DAT_04bb2698;
  param_1[0x135] = 0;
  local_a8 = puVar3;
  local_98 = puVar3;
  local_88 = puVar3;
  if (*(long *)puVar6 != 0) {
    lVar7 = FUN_038cb610(*(long *)puVar6,param_1 + 0x132);
    param_1[0x133] = lVar7;
    if (lVar7 != 0) {
      if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar7 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
      }
      plVar11 = (long *)(lVar7 + 0x70);
      lVar8 = *plVar11;
      plVar13 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)(param_1 + 0x132));
      *plVar11 = (long)plVar13;
      *plVar13 = lVar8;
      plVar13[1] = (long)plVar11;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar13;
      }
      *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  param_1[0x136] = PTR_DAT_04bb3050 + 0x10;
  (**(code **)(local_a8 + 0x18))(&local_a8);
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x137] = local_a0;
  *(undefined4 *)(param_1 + 0x13a) = local_78;
  puVar6 = PTR_DAT_04bb60a0;
  param_1[0x13b] = 0;
  param_1[0x136] = puVar6 + 0x10;
  (**(code **)(param_1[0xfa] + 0x140))(param_1 + 0xfa,param_1 + 0x136);
  *(undefined4 *)(param_1 + 0x141) = 0;
  param_1[0x132] = &PTR_LAB_04b24f28;
  param_1[0x140] = 0;
  param_1[0x13f] = 0;
  param_1[0x13e] = 0;
  param_1[0x13d] = 0;
  param_1[0x13c] = 0;
  param_1[0x136] = &PTR_LAB_04b24fe8;
  param_1[0xfa] = &PTR_LAB_04b24bd8;
  memset(param_1 + 0x144,0,0x770);
  param_1[0x142] = puVar2;
  *(undefined1 *)((long)param_1 + 0xa84) = 0;
  param_1[0x14f] = (undefined1 *)((long)param_1 + 0xa84);
  *(undefined1 *)((long)param_1 + 0xb44) = 0;
  param_1[0x167] = (undefined1 *)((long)param_1 + 0xb44);
  *(undefined1 *)((long)param_1 + 0xba4) = 0;
  param_1[0x173] = (undefined1 *)((long)param_1 + 0xba4);
  *(undefined1 *)((long)param_1 + 0xc04) = 0;
  param_1[0x17f] = (undefined1 *)((long)param_1 + 0xc04);
  *(undefined1 *)((long)param_1 + 0xc64) = 0;
  param_1[0x18b] = (undefined1 *)((long)param_1 + 0xc64);
  *(undefined1 *)((long)param_1 + 0xcc4) = 0;
  param_1[0x197] = (undefined1 *)((long)param_1 + 0xcc4);
  *(undefined4 *)(param_1 + 0x14d) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xd24) = 0;
  param_1[0x1a3] = (undefined1 *)((long)param_1 + 0xd24);
  param_1[0x14e] = puVar2;
  *(undefined1 *)((long)param_1 + 0xd84) = 0;
  param_1[0x1af] = (undefined1 *)((long)param_1 + 0xd84);
  *(undefined4 *)(param_1 + 0x159) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xde4) = 0;
  param_1[0x1bb] = (undefined1 *)((long)param_1 + 0xde4);
  param_1[0x15a] = puVar2;
  *(undefined1 *)((long)param_1 + 0xe44) = 0;
  param_1[0x1c7] = (undefined1 *)((long)param_1 + 0xe44);
  *(undefined4 *)(param_1 + 0x165) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xea4) = 0;
  param_1[0x1d3] = (undefined1 *)((long)param_1 + 0xea4);
  param_1[0x166] = puVar2;
  *(undefined1 *)((long)param_1 + 0xf04) = 0;
  param_1[0x1df] = (undefined1 *)((long)param_1 + 0xf04);
  *(undefined4 *)(param_1 + 0x171) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xf64) = 0;
  param_1[0x1eb] = (undefined1 *)((long)param_1 + 0xf64);
  *(undefined1 *)((long)param_1 + 0xfc4) = 0;
  param_1[0x172] = puVar2;
  param_1[0x203] = (long)param_1 + 0x1024;
  *(undefined4 *)(param_1 + 0x17d) = 0xffffffff;
  param_1[0x20f] = (long)param_1 + 0x1084;
  param_1[0x17e] = puVar2;
  param_1[0x21b] = (long)param_1 + 0x10e4;
  *(undefined4 *)(param_1 + 0x189) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xa24) = 0;
  param_1[0x143] = (undefined1 *)((long)param_1 + 0xa24);
  *(undefined4 *)(param_1 + 0x144) = 0x40;
  *(undefined1 *)((long)param_1 + 0xae4) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0x40;
  param_1[0x15b] = (undefined1 *)((long)param_1 + 0xae4);
  *(undefined4 *)(param_1 + 0x15c) = 0x40;
  *(undefined4 *)(param_1 + 0x168) = 0x40;
  *(undefined4 *)(param_1 + 0x174) = 0x40;
  *(undefined4 *)(param_1 + 0x180) = 0x40;
  *(undefined4 *)(param_1 + 0x18c) = 0x40;
  param_1[0x18a] = puVar2;
  *(undefined4 *)(param_1 + 0x195) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x198) = 0x40;
  param_1[0x196] = puVar2;
  *(undefined4 *)(param_1 + 0x1a1) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a4) = 0x40;
  param_1[0x1a2] = puVar2;
  *(undefined4 *)(param_1 + 0x1ad) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b0) = 0x40;
  param_1[0x1ae] = puVar2;
  *(undefined4 *)(param_1 + 0x1b9) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1bc) = 0x40;
  param_1[0x1ba] = puVar2;
  *(undefined4 *)(param_1 + 0x1c5) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c8) = 0x40;
  param_1[0x1c6] = puVar2;
  *(undefined4 *)(param_1 + 0x1d1) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d4) = 0x40;
  param_1[0x1d2] = puVar2;
  *(undefined4 *)(param_1 + 0x1dd) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e0) = 0x40;
  param_1[0x1de] = puVar2;
  *(undefined4 *)(param_1 + 0x1e9) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = 0x40;
  param_1[0x1ea] = puVar2;
  *(undefined4 *)(param_1 + 0x1f5) = 0xffffffff;
  param_1[0x1f7] = (long)param_1 + 0xfc4;
  *(undefined4 *)(param_1 + 0x1f8) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1003) = 0;
  param_1[0x1f6] = puVar2;
  *(undefined4 *)(param_1 + 0x201) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x204) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1063) = 0;
  *(undefined1 *)((long)param_1 + 0x1024) = 0;
  param_1[0x202] = puVar2;
  *(undefined4 *)(param_1 + 0x20d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x210) = 0x40;
  *(undefined1 *)((long)param_1 + 0x10c3) = 0;
  *(undefined1 *)((long)param_1 + 0x1084) = 0;
  param_1[0x20e] = puVar2;
  *(undefined4 *)(param_1 + 0x219) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21c) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1123) = 0;
  *(undefined1 *)((long)param_1 + 0x10e4) = 0;
  param_1[0x21a] = puVar2;
  *(undefined4 *)(param_1 + 0x225) = 0xffffffff;
  param_1[0x227] = (undefined1 *)((long)param_1 + 0x1144);
  *(undefined4 *)(param_1 + 0x228) = 0x40;
  *(undefined1 *)((long)param_1 + 0x1183) = 0;
  *(undefined1 *)((long)param_1 + 0x1144) = 0;
  param_1[0x226] = puVar2;
  *(undefined4 *)(param_1 + 0x231) = 0xffffffff;
  param_1[0x232] = PTR_DAT_04bb2d80 + 0x10;
  *(undefined4 *)(param_1 + 0x236) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x237) = 0;
  FUN_03ebac90(plVar12,4,0,0,0);
  local_a0 = "State::cIdle";
  local_a8 = puVar3;
  FUN_03ebaf40(plVar12,0,&local_a8);
  puVar9 = (undefined8 *)param_1[7];
  puVar9[2] = FUN_033b8218;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04b26168;
  puVar9[1] = param_1;
  puVar9[4] = &LAB_033b826c;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  local_a0 = "State::cDisplayActor";
  local_a8 = puVar3;
  FUN_03ebaf40(plVar12,1,&local_a8);
  puVar9 = (undefined8 *)(param_1[7] + (ulong)(1 < *(uint *)(param_1 + 6)) * 0x40);
  puVar9[4] = &LAB_033b844c;
  puVar9[5] = 0;
  *puVar9 = &PTR_LAB_04b26168;
  puVar9[1] = param_1;
  puVar9[2] = &LAB_033b8270;
  puVar9[3] = 0;
  puVar9[6] = &LAB_033b85d0;
  puVar9[7] = 0;
  local_a0 = "State::cDisplayPost2D";
  local_a8 = puVar3;
  FUN_03ebaf40(plVar12,2,&local_a8);
  puVar9 = (undefined8 *)(param_1[7] + (ulong)(2 < *(uint *)(param_1 + 6)) * 0x80);
  puVar9[4] = &LAB_033b8864;
  puVar9[5] = 0;
  *puVar9 = &PTR_LAB_04b26168;
  puVar9[1] = param_1;
  puVar9[2] = &LAB_033b87a8;
  puVar9[3] = 0;
  puVar9[6] = &LAB_033b8868;
  puVar9[7] = 0;
  local_a0 = "State::cReduction3DLayer";
  local_a8 = puVar3;
  FUN_03ebaf40(plVar12,3,&local_a8);
  lVar7 = 0xc0;
  if (*(uint *)(param_1 + 6) < 4) {
    lVar7 = 0;
  }
  puVar9 = (undefined8 *)(param_1[7] + lVar7);
  puVar9[2] = &LAB_033b8924;
  puVar9[3] = 0;
  *puVar9 = &PTR_LAB_04b26168;
  puVar9[1] = param_1;
  puVar9[6] = &LAB_033b89d8;
  puVar9[7] = 0;
  puVar9[4] = &LAB_033b89d4;
  puVar9[5] = 0;
  uVar4 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_1 + 0x14);
  *(uint *)(param_1 + 2) = uVar4;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 6) <= uVar4) {
      uVar4 = 0;
    }
    puVar9 = *(undefined8 **)(param_1[7] + (long)(int)uVar4 * 0x40);
    if (puVar9 != (undefined8 *)0x0) {
      (*(code *)*puVar9)();
    }
  }
  return;
}

