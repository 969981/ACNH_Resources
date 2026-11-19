
void FUN_03c40e20(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined4 uVar15;
  undefined *local_98;
  char *local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  
  puVar4 = PTR_DAT_04bb3050;
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar5 = PTR_DAT_04bb60a0;
  lVar9 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar9;
  lVar9 = param_2[6];
  *param_1 = (long)(puVar5 + 0x10);
  *(int *)(param_1 + 4) = (int)lVar9;
  plVar11 = param_1 + 5;
  *plVar11 = 0;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  puVar1 = PTR_DAT_04bd2f00;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[7] = (long)"sceneFadeOutSec";
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[6] = (long)(puVar2 + 0x10);
  lVar9 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar14 = lVar9;
      lVar9 = *(long *)(lVar14 + 0x10);
    } while (lVar9 != 0);
    plVar11 = (long *)(lVar14 + 0x10);
  }
  *plVar11 = (long)(param_1 + 6);
  param_1[9] = (long)param_1;
  uVar15 = 0x3f000000;
  if ((*(uint *)(param_1 + 10) & 0x800) != 0) {
    uVar15 = 0x3c0efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[6] + 0xf0))();
  *puVar6 = uVar15;
  uVar3 = *(uint *)(param_1 + 10);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0xb] = 0;
    uVar15 = 0x3f000000;
    if ((uVar3 & 0x800) != 0) {
      uVar15 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0xb) = uVar15;
  }
  *(uint *)(param_1 + 10) = uVar3 & 0xfeffffff;
  param_1[0xd] = (long)"sceneFadeOutStop";
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar1 = PTR_DAT_04bb33a8 + 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  plVar11 = param_1 + 0xc;
  *plVar11 = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,plVar11);
  puVar7 = (undefined1 *)(**(code **)(*plVar11 + 0xf0))(plVar11);
  *puVar7 = 0;
  if ((*(uint *)(param_1 + 0x10) >> 7 & 1) == 0) {
    param_1[0x11] = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  param_1[0x15] = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfeffffff;
  param_1[0x13] = (long)"pauseMuteOnSec";
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  plVar11 = param_1 + 0x12;
  *plVar11 = (long)(puVar2 + 0x10);
  param_1[0x17] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar11);
  uVar15 = 0x3d4ccccd;
  if ((*(uint *)(param_1 + 0x16) & 0x800) != 0) {
    uVar15 = 0x3a64c388;
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar11 + 0xf0))(plVar11);
  *puVar6 = uVar15;
  uVar3 = *(uint *)(param_1 + 0x16);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x17] = 0;
    uVar15 = 0x3d4ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar15 = 0x3a64c388;
    }
    *(undefined4 *)(param_1 + 0x17) = uVar15;
  }
  param_1[0x1b] = 0;
  *(uint *)(param_1 + 0x16) = uVar3 & 0xfeffffff;
  param_1[0x19] = (long)"pauseMuteOffSec";
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  plVar11 = param_1 + 0x18;
  *plVar11 = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,plVar11);
  uVar15 = 0x3d4ccccd;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar15 = 0x3a64c388;
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar11 + 0xf0))(plVar11);
  *puVar6 = uVar15;
  uVar3 = *(uint *)(param_1 + 0x1c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar15 = 0x3d4ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar15 = 0x3a64c388;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar15;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = uVar3 & 0xfeffffff;
  param_1[0x1f] = (long)"pauseVolume";
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar11 = param_1 + 0x1e;
  *plVar11 = (long)(puVar2 + 0x10);
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar11);
  uVar15 = 0x3e99999a;
  if ((*(uint *)(param_1 + 0x22) & 0x800) != 0) {
    uVar15 = 0x3bab92a6;
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar11 + 0xf0))(plVar11);
  *puVar6 = uVar15;
  uVar3 = *(uint *)(param_1 + 0x22);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    uVar15 = 0x3e99999a;
    if ((uVar3 & 0x800) != 0) {
      uVar15 = 0x3bab92a6;
    }
    *(undefined4 *)(param_1 + 0x23) = uVar15;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x22) = uVar3 & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)(puVar2 + 0x10);
  param_1[0x25] = (long)"pauseFadeOutSec";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  uVar15 = 0x3dcccccd;
  if ((*(uint *)(param_1 + 0x28) & 0x800) != 0) {
    uVar15 = 0x3ae4c388;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar6 = uVar15;
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    uVar15 = 0x3dcccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar15 = 0x3ae4c388;
    }
    *(undefined4 *)(param_1 + 0x29) = uVar15;
  }
  *(uint *)(param_1 + 0x28) = uVar3 & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = (long)(puVar2 + 0x10);
  param_1[0x2b] = (long)"pauseFadeInSec";
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  uVar15 = 0x3e4ccccd;
  if ((*(uint *)(param_1 + 0x2e) & 0x800) != 0) {
    uVar15 = 0x3b64c388;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar6 = uVar15;
  uVar3 = *(uint *)(param_1 + 0x2e);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    uVar15 = 0x3e4ccccd;
    if ((uVar3 & 0x800) != 0) {
      uVar15 = 0x3b64c388;
    }
    *(undefined4 *)(param_1 + 0x2f) = uVar15;
  }
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(uint *)(param_1 + 0x2e) = uVar3 & 0xfeffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = (long)(puVar2 + 0x10);
  param_1[0x31] = (long)"appVolumeOnLibraryApplet";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  uVar15 = 0xbf800000;
  if ((*(uint *)(param_1 + 0x34) & 0x800) != 0) {
    uVar15 = 0xbc8efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar6 = uVar15;
  uVar3 = *(uint *)(param_1 + 0x34);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    uVar15 = 0xbf800000;
    if ((uVar3 & 0x800) != 0) {
      uVar15 = 0xbc8efa35;
    }
    *(undefined4 *)(param_1 + 0x35) = uVar15;
  }
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 2;
  *(uint *)(param_1 + 0x34) = uVar3 & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = (long)(puVar2 + 0x10);
  param_1[0x37] = (long)"sdkVolumeOnLibraryApplet";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  uVar15 = 0xbf800000;
  if ((*(uint *)(param_1 + 0x3a) & 0x800) != 0) {
    uVar15 = 0xbc8efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar6 = uVar15;
  uVar3 = *(uint *)(param_1 + 0x3a);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    uVar15 = 0xbf800000;
    if ((uVar3 & 0x800) != 0) {
      uVar15 = 0xbc8efa35;
    }
    *(undefined4 *)(param_1 + 0x3b) = uVar15;
  }
  *(uint *)(param_1 + 0x3a) = uVar3 & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  plVar11 = param_1 + 0x3c;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3c] = (long)(puVar5 + 0x10);
  param_1[0x3d] = (long)"AalParams";
  param_1[0x41] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar11);
  param_1[0x44] = 0;
  param_1[0x3c] = (long)&PTR_LAB_04b7f7a0;
  param_1[0x43] = (long)"masterVolume";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x42] = (long)(puVar2 + 0x10);
  param_1[0x47] = 0;
  lVar9 = param_1[0x41];
  if (param_1[0x41] == 0) {
    plVar10 = param_1 + 0x41;
  }
  else {
    do {
      lVar14 = lVar9;
      lVar9 = *(long *)(lVar14 + 0x10);
    } while (lVar9 != 0);
    plVar10 = (long *)(lVar14 + 0x10);
  }
  *plVar10 = (long)(param_1 + 0x42);
  param_1[0x45] = (long)plVar11;
  uVar15 = 0x3f333333;
  if ((*(uint *)(param_1 + 0x46) & 0x800) != 0) {
    uVar15 = 0x3c482b17;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))();
  *puVar6 = uVar15;
  uVar3 = *(uint *)(param_1 + 0x46);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    uVar15 = 0x3f333333;
    if ((uVar3 & 0x800) != 0) {
      uVar15 = 0x3c482b17;
    }
    *(undefined4 *)(param_1 + 0x47) = uVar15;
  }
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x46) = uVar3 & 0xfeffffff;
  param_1[0x49] = (long)"tvOutputVolume";
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x48] = (long)(puVar2 + 0x10);
  param_1[0x4d] = 0;
  (**(code **)(param_1[0x3c] + 0x140))(plVar11,param_1 + 0x48);
  uVar15 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x4c) & 0x800) != 0) {
    uVar15 = 0x3c8efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar6 = uVar15;
  uVar3 = *(uint *)(param_1 + 0x4c);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x4d] = 0;
    uVar15 = 0x3f800000;
    if ((uVar3 & 0x800) != 0) {
      uVar15 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x4d) = uVar15;
  }
  param_1[0x50] = 0;
  *(uint *)(param_1 + 0x4c) = uVar3 & 0xfeffffff;
  param_1[0x4f] = (long)"buildInSpeakerOutputVolume";
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4e] = (long)(puVar2 + 0x10);
  param_1[0x53] = 0;
  (**(code **)(param_1[0x3c] + 0x140))(plVar11,param_1 + 0x4e);
  uVar15 = 0x40000000;
  if ((*(uint *)(param_1 + 0x52) & 0x800) != 0) {
    uVar15 = 0x3d0efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x4e] + 0xf0))(param_1 + 0x4e);
  *puVar6 = uVar15;
  uVar3 = *(uint *)(param_1 + 0x52);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x53] = 0;
    uVar15 = 0x40000000;
    if ((uVar3 & 0x800) != 0) {
      uVar15 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x53) = uVar15;
  }
  param_1[0x56] = 0;
  *(uint *)(param_1 + 0x52) = uVar3 & 0xfeffffff;
  param_1[0x55] = (long)"stereoJackOutputVolume";
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x54] = (long)(puVar2 + 0x10);
  param_1[0x59] = 0;
  (**(code **)(param_1[0x3c] + 0x140))(plVar11,param_1 + 0x54);
  uVar15 = 0x40000000;
  if ((*(uint *)(param_1 + 0x58) & 0x800) != 0) {
    uVar15 = 0x3d0efa35;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x54] + 0xf0))(param_1 + 0x54);
  *puVar6 = uVar15;
  uVar3 = *(uint *)(param_1 + 0x58);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x59] = 0;
    uVar15 = 0x40000000;
    if ((uVar3 & 0x800) != 0) {
      uVar15 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x59) = uVar15;
  }
  param_1[0x5c] = 0;
  *(uint *)(param_1 + 0x58) = uVar3 & 0xfeffffff;
  param_1[0x5b] = (long)"dopplerMode";
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5a] = (long)&PTR_LAB_04b800b8;
  param_1[0x5f] = 0;
  (**(code **)(param_1[0x3c] + 0x140))(plVar11,param_1 + 0x5a);
  puVar6 = (undefined4 *)(**(code **)(param_1[0x5a] + 0xf0))(param_1 + 0x5a);
  *puVar6 = 1;
  if ((*(uint *)(param_1 + 0x5e) >> 7 & 1) == 0) {
    param_1[0x5f] = 0;
    *(undefined4 *)(param_1 + 0x5f) = 1;
  }
  param_1[0x62] = 0;
  *(uint *)(param_1 + 0x5e) = *(uint *)(param_1 + 0x5e) & 0xfeffffff;
  param_1[0x61] = (long)"dopplerPitchRange";
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  puVar1 = PTR_DAT_04bb5890 + 0x10;
  *(undefined8 *)((long)param_1 + 0x324) = 0;
  param_1[0x66] = 0;
  param_1[0x60] = (long)puVar1;
  (**(code **)(param_1[0x3c] + 0x140))(plVar11,param_1 + 0x60);
  puVar8 = (undefined8 *)(**(code **)(param_1[0x60] + 0xf0))(param_1 + 0x60);
  *puVar8 = 0x408000003e800000;
  if ((*(uint *)(param_1 + 100) >> 7 & 1) == 0) {
    param_1[0x66] = 0x408000003e800000;
  }
  param_1[0x69] = 0;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfeffffff;
  param_1[0x68] = (long)"envFxSendRange";
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x67] = (long)puVar1;
  *(undefined8 *)((long)param_1 + 0x35c) = 0;
  param_1[0x6d] = 0;
  (**(code **)(param_1[0x3c] + 0x140))(plVar11,param_1 + 0x67);
  puVar8 = (undefined8 *)(**(code **)(param_1[0x67] + 0xf0))(param_1 + 0x67);
  *puVar8 = 0x3f80000000000000;
  if ((*(uint *)(param_1 + 0x6b) >> 7 & 1) == 0) {
    param_1[0x6d] = 0x3f80000000000000;
  }
  param_1[0x70] = 0;
  *(uint *)(param_1 + 0x6b) = *(uint *)(param_1 + 0x6b) & 0xfeffffff;
  param_1[0x6f] = (long)"AalTvParams";
  plVar10 = param_1 + 0x6e;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x6e] = (long)(puVar5 + 0x10);
  param_1[0x73] = 0;
  (**(code **)(param_1[0x3c] + 0x140))(plVar11,plVar10);
  param_1[0x76] = 0;
  param_1[0x6e] = (long)&PTR_FUN_04b7f900;
  param_1[0x75] = (long)"deviceVolume";
  param_1[0x74] = (long)(puVar2 + 0x10);
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  lVar9 = param_1[0x73];
  if (param_1[0x73] == 0) {
    plVar11 = param_1 + 0x73;
  }
  else {
    do {
      lVar14 = lVar9;
      lVar9 = *(long *)(lVar14 + 0x10);
    } while (lVar9 != 0);
    plVar11 = (long *)(lVar14 + 0x10);
  }
  *plVar11 = (long)(param_1 + 0x74);
  param_1[0x77] = (long)plVar10;
  uVar15 = 0x3f333333;
  if ((*(uint *)(param_1 + 0x78) & 0x800) != 0) {
    uVar15 = 0x3c482b17;
  }
  puVar6 = (undefined4 *)(**(code **)(param_1[0x74] + 0xf0))();
  *puVar6 = uVar15;
  uVar3 = *(uint *)(param_1 + 0x78);
  if ((uVar3 >> 7 & 1) == 0) {
    param_1[0x79] = 0;
    uVar15 = 0x3f333333;
    if ((uVar3 & 0x800) != 0) {
      uVar15 = 0x3c482b17;
    }
    *(undefined4 *)(param_1 + 0x79) = uVar15;
  }
  local_98 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 0x78) = uVar3 & 0xfeffffff;
  local_98 = local_98 + 0x10;
  local_90 = "interior";
  puStack_80 = &DAT_040fc3e7;
  puStack_70 = &DAT_0407ebb1;
  local_68 = 0;
  puVar2 = PTR_DAT_04bd0d40 + 0x10;
  param_1[0x7b] = 0;
  param_1[0x7a] = (long)puVar2;
  puVar2 = PTR_DAT_04bb2698;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  local_88 = local_98;
  local_78 = local_98;
  if (*(long *)puVar2 != 0) {
    lVar9 = FUN_038cb610(*(long *)puVar2,param_1 + 0x7a);
    param_1[0x7b] = lVar9;
    if (lVar9 != 0) {
      if ((*(uint *)(lVar9 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar9 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar9 + 0xb0));
      }
      plVar13 = (long *)(lVar9 + 0x70);
      lVar12 = *plVar13;
      plVar11 = (long *)((long)*(int *)(lVar9 + 0x84) + (long)(param_1 + 0x7a));
      *plVar13 = (long)plVar11;
      *plVar11 = lVar12;
      plVar11[1] = (long)plVar13;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar11;
      }
      *(int *)(lVar9 + 0x80) = *(int *)(lVar9 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  param_1[0x7e] = (long)(puVar4 + 0x10);
  (**(code **)(local_98 + 0x18))(&local_98);
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x83] = 0;
  param_1[0x7f] = (long)local_90;
  *(undefined4 *)(param_1 + 0x82) = local_68;
  param_1[0x7e] = (long)(puVar5 + 0x10);
  (**(code **)(param_1[0x6e] + 0x140))(plVar10,param_1 + 0x7e);
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x7a] = (long)&PTR_LAB_04b7f548;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x7e] = (long)&PTR_LAB_04b7f608;
  return;
}

