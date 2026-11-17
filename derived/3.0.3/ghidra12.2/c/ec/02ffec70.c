
void FUN_02ffec70(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  char *pcStack_60;
  uint local_58;
  
  FUN_00751ec0(param_1,param_5,param_6,0);
  puVar1 = PTR_DAT_04bb62c0;
  *param_1 = (long)&PTR_FUN_04af11d8;
  param_1[0x19] = (long)"mStampPatternCircleS00";
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x18] = (long)(puVar1 + 0x10);
  plVar5 = param_1 + 5;
  lVar4 = *plVar5;
  if (*plVar5 != 0) {
    do {
      lVar3 = lVar4;
      lVar4 = *(long *)(lVar3 + 0x10);
    } while (lVar4 != 0);
    plVar5 = (long *)(lVar3 + 0x10);
  }
  *plVar5 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  puVar2 = (undefined4 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1c) >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
  }
  param_1[0x21] = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfeffffff;
  param_1[0x1f] = (long)"mStampPatternCircleS01";
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar5 = param_1 + 0x1e;
  *plVar5 = (long)(puVar1 + 0x10);
  param_1[0x23] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar5);
  puVar2 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x22) >> 7 & 1) == 0) {
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x22) = *(uint *)(param_1 + 0x22) & 0xfeffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = (long)(puVar1 + 0x10);
  param_1[0x25] = (long)"mStampPatternCircleS02";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x24] + 0xf0))(param_1 + 0x24);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x28) >> 7 & 1) == 0) {
    param_1[0x29] = 0;
    *(undefined4 *)(param_1 + 0x29) = 0;
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfeffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2a] = (long)(puVar1 + 0x10);
  param_1[0x2b] = (long)"mStampPatternCircleS03";
  param_1[0x2f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2a] + 0xf0))(param_1 + 0x2a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2e) >> 7 & 1) == 0) {
    param_1[0x2f] = 0;
    *(undefined4 *)(param_1 + 0x2f) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x2e) = *(uint *)(param_1 + 0x2e) & 0xfeffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x30] = (long)(puVar1 + 0x10);
  param_1[0x31] = (long)"mStampPatternCircleS04";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x30] + 0xf0))(param_1 + 0x30);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x34) >> 7 & 1) == 0) {
    param_1[0x35] = 0;
    *(undefined4 *)(param_1 + 0x35) = 0;
  }
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfeffffff;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x36] = (long)(puVar1 + 0x10);
  param_1[0x37] = (long)"mStampPatternCircleS05";
  param_1[0x3b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x36] + 0xf0))(param_1 + 0x36);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3a) >> 7 & 1) == 0) {
    param_1[0x3b] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x3a) = *(uint *)(param_1 + 0x3a) & 0xfeffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = (long)(puVar1 + 0x10);
  param_1[0x3d] = (long)"mStampPatternCircleS06";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x40) >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  param_1[0x44] = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfeffffff;
  param_1[0x43] = (long)"mStampPatternCircleS07";
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x42] = (long)(puVar1 + 0x10);
  param_1[0x47] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x42] + 0xf0))(param_1 + 0x42);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x46) >> 7 & 1) == 0) {
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x47) = 0;
  }
  param_1[0x4a] = 0;
  *(uint *)(param_1 + 0x46) = *(uint *)(param_1 + 0x46) & 0xfeffffff;
  param_1[0x49] = (long)"mStampPatternCircleS08";
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x48] = (long)(puVar1 + 0x10);
  param_1[0x4d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x48] + 0xf0))(param_1 + 0x48);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4c) >> 7 & 1) == 0) {
    param_1[0x4d] = 0;
    *(undefined4 *)(param_1 + 0x4d) = 0;
  }
  param_1[0x50] = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfeffffff;
  param_1[0x4f] = (long)"mStampPatternCircleS09";
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4e] = (long)(puVar1 + 0x10);
  param_1[0x53] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4e] + 0xf0))(param_1 + 0x4e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x52) >> 7 & 1) == 0) {
    param_1[0x53] = 0;
    *(undefined4 *)(param_1 + 0x53) = 0;
  }
  param_1[0x56] = 0;
  *(uint *)(param_1 + 0x52) = *(uint *)(param_1 + 0x52) & 0xfeffffff;
  param_1[0x55] = (long)"mStampPatternCircleS10";
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x54] = (long)(puVar1 + 0x10);
  param_1[0x59] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x54);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x54] + 0xf0))(param_1 + 0x54);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x58) >> 7 & 1) == 0) {
    param_1[0x59] = 0;
    *(undefined4 *)(param_1 + 0x59) = 0;
  }
  param_1[0x5c] = 0;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfeffffff;
  param_1[0x5b] = (long)"mStampPatternCircleS11";
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5a] = (long)(puVar1 + 0x10);
  param_1[0x5f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x5a] + 0xf0))(param_1 + 0x5a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x5e) >> 7 & 1) == 0) {
    param_1[0x5f] = 0;
    *(undefined4 *)(param_1 + 0x5f) = 0;
  }
  param_1[0x62] = 0;
  *(uint *)(param_1 + 0x5e) = *(uint *)(param_1 + 0x5e) & 0xfeffffff;
  param_1[0x61] = (long)"mStampPatternCircleS12";
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x60] = (long)(puVar1 + 0x10);
  param_1[0x65] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x60);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x60] + 0xf0))(param_1 + 0x60);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 100) >> 7 & 1) == 0) {
    param_1[0x65] = 0;
    *(undefined4 *)(param_1 + 0x65) = 0;
  }
  param_1[0x68] = 0;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfeffffff;
  param_1[0x67] = (long)"mStampPatternCircleS13";
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x66] = (long)(puVar1 + 0x10);
  param_1[0x6b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x66);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x66] + 0xf0))(param_1 + 0x66);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x6a) >> 7 & 1) == 0) {
    param_1[0x6b] = 0;
    *(undefined4 *)(param_1 + 0x6b) = 0;
  }
  param_1[0x6e] = 0;
  *(uint *)(param_1 + 0x6a) = *(uint *)(param_1 + 0x6a) & 0xfeffffff;
  param_1[0x6d] = (long)"mStampPatternCircleS14";
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6c] = (long)(puVar1 + 0x10);
  param_1[0x71] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x6c] + 0xf0))(param_1 + 0x6c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x70) >> 7 & 1) == 0) {
    param_1[0x71] = 0;
    *(undefined4 *)(param_1 + 0x71) = 0;
  }
  param_1[0x74] = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfeffffff;
  param_1[0x73] = (long)"mStampPatternCircleS15";
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x72] = (long)(puVar1 + 0x10);
  param_1[0x77] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x72);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x72] + 0xf0))(param_1 + 0x72);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x76) >> 7 & 1) == 0) {
    param_1[0x77] = 0;
    *(undefined4 *)(param_1 + 0x77) = 0;
  }
  param_1[0x7a] = 0;
  *(uint *)(param_1 + 0x76) = *(uint *)(param_1 + 0x76) & 0xfeffffff;
  param_1[0x79] = (long)"mStampPatternCircleS16";
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x78] = (long)(puVar1 + 0x10);
  param_1[0x7d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x78);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x78] + 0xf0))(param_1 + 0x78);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x7c) >> 7 & 1) == 0) {
    param_1[0x7d] = 0;
    *(undefined4 *)(param_1 + 0x7d) = 0;
  }
  param_1[0x80] = 0;
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfeffffff;
  param_1[0x7f] = (long)"mStampPatternCircleS17";
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x7e] = (long)(puVar1 + 0x10);
  param_1[0x83] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x7e] + 0xf0))(param_1 + 0x7e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x82) >> 7 & 1) == 0) {
    param_1[0x83] = 0;
    *(undefined4 *)(param_1 + 0x83) = 0;
  }
  param_1[0x86] = 0;
  *(uint *)(param_1 + 0x82) = *(uint *)(param_1 + 0x82) & 0xfeffffff;
  param_1[0x85] = (long)"mStampPatternCircleS18";
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x84] = (long)(puVar1 + 0x10);
  param_1[0x89] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x84);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x84] + 0xf0))(param_1 + 0x84);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x88) >> 7 & 1) == 0) {
    param_1[0x89] = 0;
    *(undefined4 *)(param_1 + 0x89) = 0;
  }
  param_1[0x8c] = 0;
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfeffffff;
  param_1[0x8b] = (long)"mStampPatternCircleS19";
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x8a] = (long)(puVar1 + 0x10);
  param_1[0x8f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x8a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x8a] + 0xf0))(param_1 + 0x8a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x8e) >> 7 & 1) == 0) {
    param_1[0x8f] = 0;
    *(undefined4 *)(param_1 + 0x8f) = 0;
  }
  param_1[0x92] = 0;
  *(uint *)(param_1 + 0x8e) = *(uint *)(param_1 + 0x8e) & 0xfeffffff;
  param_1[0x91] = (long)"mStampPatternCircleS20";
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x90] = (long)(puVar1 + 0x10);
  param_1[0x95] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x90);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x90] + 0xf0))(param_1 + 0x90);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x94) >> 7 & 1) == 0) {
    param_1[0x95] = 0;
    *(undefined4 *)(param_1 + 0x95) = 0;
  }
  param_1[0x98] = 0;
  *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) & 0xfeffffff;
  param_1[0x97] = (long)"mStampPatternCircleS21";
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x96] = (long)(puVar1 + 0x10);
  param_1[0x9b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x96);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x96] + 0xf0))(param_1 + 0x96);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x9a) >> 7 & 1) == 0) {
    param_1[0x9b] = 0;
    *(undefined4 *)(param_1 + 0x9b) = 0;
  }
  param_1[0x9e] = 0;
  *(uint *)(param_1 + 0x9a) = *(uint *)(param_1 + 0x9a) & 0xfeffffff;
  param_1[0x9d] = (long)"mStampPatternCircleS22";
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x9c] = (long)(puVar1 + 0x10);
  param_1[0xa1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x9c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x9c] + 0xf0))(param_1 + 0x9c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xa0) >> 7 & 1) == 0) {
    param_1[0xa1] = 0;
    *(undefined4 *)(param_1 + 0xa1) = 0;
  }
  param_1[0xa4] = 0;
  *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xfeffffff;
  param_1[0xa3] = (long)"mStampPatternCircleS23";
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa2] = (long)(puVar1 + 0x10);
  param_1[0xa7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa2);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xa2] + 0xf0))(param_1 + 0xa2);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xa6) >> 7 & 1) == 0) {
    param_1[0xa7] = 0;
    *(undefined4 *)(param_1 + 0xa7) = 0;
  }
  param_1[0xaa] = 0;
  *(uint *)(param_1 + 0xa6) = *(uint *)(param_1 + 0xa6) & 0xfeffffff;
  param_1[0xa9] = (long)"mStampPatternCircleS24";
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xa8] = (long)(puVar1 + 0x10);
  param_1[0xad] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa8);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xa8] + 0xf0))(param_1 + 0xa8);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xac) >> 7 & 1) == 0) {
    param_1[0xad] = 0;
    *(undefined4 *)(param_1 + 0xad) = 0;
  }
  param_1[0xb0] = 0;
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) & 0xfeffffff;
  param_1[0xaf] = (long)"mStampPatternCircleM00";
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xae] = (long)(puVar1 + 0x10);
  param_1[0xb3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xae);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xae] + 0xf0))(param_1 + 0xae);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xb2) >> 7 & 1) == 0) {
    param_1[0xb3] = 0;
    *(undefined4 *)(param_1 + 0xb3) = 0;
  }
  param_1[0xb6] = 0;
  *(uint *)(param_1 + 0xb2) = *(uint *)(param_1 + 0xb2) & 0xfeffffff;
  param_1[0xb5] = (long)"mStampPatternCircleM01";
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0xb4] = (long)(puVar1 + 0x10);
  param_1[0xb9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb4);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xb4] + 0xf0))(param_1 + 0xb4);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xb8) >> 7 & 1) == 0) {
    param_1[0xb9] = 0;
    *(undefined4 *)(param_1 + 0xb9) = 0;
  }
  param_1[0xbc] = 0;
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfeffffff;
  param_1[0xbb] = (long)"mStampPatternCircleM02";
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xba] = (long)(puVar1 + 0x10);
  param_1[0xbf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xba);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xba] + 0xf0))(param_1 + 0xba);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xbe) >> 7 & 1) == 0) {
    param_1[0xbf] = 0;
    *(undefined4 *)(param_1 + 0xbf) = 0;
  }
  param_1[0xc2] = 0;
  *(uint *)(param_1 + 0xbe) = *(uint *)(param_1 + 0xbe) & 0xfeffffff;
  param_1[0xc1] = (long)"mStampPatternCircleM03";
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xc0] = (long)(puVar1 + 0x10);
  param_1[0xc5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc0);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xc0] + 0xf0))(param_1 + 0xc0);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xc4) >> 7 & 1) == 0) {
    param_1[0xc5] = 0;
    *(undefined4 *)(param_1 + 0xc5) = 0;
  }
  param_1[200] = 0;
  *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfeffffff;
  param_1[199] = (long)"mStampPatternCircleM04";
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xc6] = (long)(puVar1 + 0x10);
  param_1[0xcb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc6);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xc6] + 0xf0))(param_1 + 0xc6);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xca) >> 7 & 1) == 0) {
    param_1[0xcb] = 0;
    *(undefined4 *)(param_1 + 0xcb) = 0;
  }
  param_1[0xce] = 0;
  *(uint *)(param_1 + 0xca) = *(uint *)(param_1 + 0xca) & 0xfeffffff;
  param_1[0xcd] = (long)"mStampPatternCircleM05";
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0xcc] = (long)(puVar1 + 0x10);
  param_1[0xd1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xcc);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xcc] + 0xf0))(param_1 + 0xcc);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xd0) >> 7 & 1) == 0) {
    param_1[0xd1] = 0;
    *(undefined4 *)(param_1 + 0xd1) = 0;
  }
  param_1[0xd4] = 0;
  *(uint *)(param_1 + 0xd0) = *(uint *)(param_1 + 0xd0) & 0xfeffffff;
  param_1[0xd3] = (long)"mStampPatternCircleM06";
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xd2] = (long)(puVar1 + 0x10);
  param_1[0xd7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd2);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xd2] + 0xf0))(param_1 + 0xd2);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xd6) >> 7 & 1) == 0) {
    param_1[0xd7] = 0;
    *(undefined4 *)(param_1 + 0xd7) = 0;
  }
  param_1[0xda] = 0;
  *(uint *)(param_1 + 0xd6) = *(uint *)(param_1 + 0xd6) & 0xfeffffff;
  param_1[0xd9] = (long)"mStampPatternCircleM07";
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xd8] = (long)(puVar1 + 0x10);
  param_1[0xdd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd8);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xd8] + 0xf0))(param_1 + 0xd8);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xdc) >> 7 & 1) == 0) {
    param_1[0xdd] = 0;
    *(undefined4 *)(param_1 + 0xdd) = 0;
  }
  param_1[0xe0] = 0;
  *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) & 0xfeffffff;
  param_1[0xdf] = (long)"mStampPatternCircleM08";
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  param_1[0xde] = (long)(puVar1 + 0x10);
  param_1[0xe3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xde);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xde] + 0xf0))(param_1 + 0xde);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xe2) >> 7 & 1) == 0) {
    param_1[0xe3] = 0;
    *(undefined4 *)(param_1 + 0xe3) = 0;
  }
  param_1[0xe6] = 0;
  *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) & 0xfeffffff;
  param_1[0xe5] = (long)"mStampPatternCircleM09";
  param_1[0xe7] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  param_1[0xe4] = (long)(puVar1 + 0x10);
  param_1[0xe9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe4);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xe4] + 0xf0))(param_1 + 0xe4);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xe8) >> 7 & 1) == 0) {
    param_1[0xe9] = 0;
    *(undefined4 *)(param_1 + 0xe9) = 0;
  }
  param_1[0xec] = 0;
  *(uint *)(param_1 + 0xe8) = *(uint *)(param_1 + 0xe8) & 0xfeffffff;
  param_1[0xeb] = (long)"mStampPatternCircleM10";
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xea] = (long)(puVar1 + 0x10);
  param_1[0xef] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xea);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xea] + 0xf0))(param_1 + 0xea);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xee) >> 7 & 1) == 0) {
    param_1[0xef] = 0;
    *(undefined4 *)(param_1 + 0xef) = 0;
  }
  param_1[0xf2] = 0;
  *(uint *)(param_1 + 0xee) = *(uint *)(param_1 + 0xee) & 0xfeffffff;
  param_1[0xf1] = (long)"mStampPatternCircleM11";
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0xf0] = (long)(puVar1 + 0x10);
  param_1[0xf5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xf0);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xf0] + 0xf0))(param_1 + 0xf0);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xf4) >> 7 & 1) == 0) {
    param_1[0xf5] = 0;
    *(undefined4 *)(param_1 + 0xf5) = 0;
  }
  param_1[0xf8] = 0;
  *(uint *)(param_1 + 0xf4) = *(uint *)(param_1 + 0xf4) & 0xfeffffff;
  param_1[0xf7] = (long)"mStampPatternCircleM12";
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  param_1[0xf6] = (long)(puVar1 + 0x10);
  param_1[0xfb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xf6);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xf6] + 0xf0))(param_1 + 0xf6);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0xfa) >> 7 & 1) == 0) {
    param_1[0xfb] = 0;
    *(undefined4 *)(param_1 + 0xfb) = 0;
  }
  param_1[0xfe] = 0;
  *(uint *)(param_1 + 0xfa) = *(uint *)(param_1 + 0xfa) & 0xfeffffff;
  param_1[0xfd] = (long)"mStampPatternCircleM13";
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0xfc] = (long)(puVar1 + 0x10);
  param_1[0x101] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xfc);
  puVar2 = (undefined4 *)(**(code **)(param_1[0xfc] + 0xf0))(param_1 + 0xfc);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x100) >> 7 & 1) == 0) {
    param_1[0x101] = 0;
    *(undefined4 *)(param_1 + 0x101) = 0;
  }
  param_1[0x104] = 0;
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) & 0xfeffffff;
  param_1[0x103] = (long)"mStampPatternCircleM14";
  param_1[0x105] = 0;
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x102] = (long)(puVar1 + 0x10);
  param_1[0x107] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x102);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x102] + 0xf0))(param_1 + 0x102);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x106) >> 7 & 1) == 0) {
    param_1[0x107] = 0;
    *(undefined4 *)(param_1 + 0x107) = 0;
  }
  param_1[0x10a] = 0;
  *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) & 0xfeffffff;
  param_1[0x109] = (long)"mStampPatternCircleM15";
  param_1[0x10b] = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  param_1[0x108] = (long)(puVar1 + 0x10);
  param_1[0x10d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x108);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x108] + 0xf0))(param_1 + 0x108);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x10c) >> 7 & 1) == 0) {
    param_1[0x10d] = 0;
    *(undefined4 *)(param_1 + 0x10d) = 0;
  }
  param_1[0x110] = 0;
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfeffffff;
  param_1[0x10f] = (long)"mStampPatternCircleM16";
  param_1[0x111] = 0;
  *(undefined4 *)(param_1 + 0x112) = 0;
  param_1[0x10e] = (long)(puVar1 + 0x10);
  param_1[0x113] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x10e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x10e] + 0xf0))(param_1 + 0x10e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x112) >> 7 & 1) == 0) {
    param_1[0x113] = 0;
    *(undefined4 *)(param_1 + 0x113) = 0;
  }
  param_1[0x116] = 0;
  *(uint *)(param_1 + 0x112) = *(uint *)(param_1 + 0x112) & 0xfeffffff;
  param_1[0x115] = (long)"mStampPatternCircleM17";
  param_1[0x117] = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  param_1[0x114] = (long)(puVar1 + 0x10);
  param_1[0x119] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x114);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x114] + 0xf0))(param_1 + 0x114);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x118) >> 7 & 1) == 0) {
    param_1[0x119] = 0;
    *(undefined4 *)(param_1 + 0x119) = 0;
  }
  param_1[0x11c] = 0;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfeffffff;
  param_1[0x11b] = (long)"mStampPatternCircleM18";
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  param_1[0x11a] = (long)(puVar1 + 0x10);
  param_1[0x11f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x11a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x11a] + 0xf0))(param_1 + 0x11a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x11e) >> 7 & 1) == 0) {
    param_1[0x11f] = 0;
    *(undefined4 *)(param_1 + 0x11f) = 0;
  }
  param_1[0x122] = 0;
  *(uint *)(param_1 + 0x11e) = *(uint *)(param_1 + 0x11e) & 0xfeffffff;
  param_1[0x121] = (long)"mStampPatternCircleM19";
  param_1[0x123] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  param_1[0x120] = (long)(puVar1 + 0x10);
  param_1[0x125] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x120);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x120] + 0xf0))(param_1 + 0x120);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x124) >> 7 & 1) == 0) {
    param_1[0x125] = 0;
    *(undefined4 *)(param_1 + 0x125) = 0;
  }
  param_1[0x128] = 0;
  *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) & 0xfeffffff;
  param_1[0x127] = (long)"mStampPatternCircleM20";
  param_1[0x129] = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0;
  param_1[0x126] = (long)(puVar1 + 0x10);
  param_1[299] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x126);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x126] + 0xf0))(param_1 + 0x126);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x12a) >> 7 & 1) == 0) {
    param_1[299] = 0;
    *(undefined4 *)(param_1 + 299) = 0;
  }
  param_1[0x12e] = 0;
  *(uint *)(param_1 + 0x12a) = *(uint *)(param_1 + 0x12a) & 0xfeffffff;
  param_1[0x12d] = (long)"mStampPatternCircleM21";
  param_1[0x12f] = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  param_1[300] = (long)(puVar1 + 0x10);
  param_1[0x131] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 300);
  puVar2 = (undefined4 *)(**(code **)(param_1[300] + 0xf0))(param_1 + 300);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x130) >> 7 & 1) == 0) {
    param_1[0x131] = 0;
    *(undefined4 *)(param_1 + 0x131) = 0;
  }
  param_1[0x134] = 0;
  *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfeffffff;
  param_1[0x133] = (long)"mStampPatternCircleM22";
  param_1[0x135] = 0;
  *(undefined4 *)(param_1 + 0x136) = 0;
  param_1[0x132] = (long)(puVar1 + 0x10);
  param_1[0x137] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x132);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x132] + 0xf0))(param_1 + 0x132);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x136) >> 7 & 1) == 0) {
    param_1[0x137] = 0;
    *(undefined4 *)(param_1 + 0x137) = 0;
  }
  param_1[0x13a] = 0;
  *(uint *)(param_1 + 0x136) = *(uint *)(param_1 + 0x136) & 0xfeffffff;
  param_1[0x139] = (long)"mStampPatternCircleM23";
  param_1[0x13b] = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  param_1[0x138] = (long)(puVar1 + 0x10);
  param_1[0x13d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x138);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x138] + 0xf0))(param_1 + 0x138);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x13c) >> 7 & 1) == 0) {
    param_1[0x13d] = 0;
    *(undefined4 *)(param_1 + 0x13d) = 0;
  }
  param_1[0x140] = 0;
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfeffffff;
  param_1[0x13f] = (long)"mStampPatternCircleM24";
  param_1[0x141] = 0;
  *(undefined4 *)(param_1 + 0x142) = 0;
  param_1[0x13e] = (long)(puVar1 + 0x10);
  param_1[0x143] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x13e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x13e] + 0xf0))(param_1 + 0x13e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x142) >> 7 & 1) == 0) {
    param_1[0x143] = 0;
    *(undefined4 *)(param_1 + 0x143) = 0;
  }
  param_1[0x146] = 0;
  *(uint *)(param_1 + 0x142) = *(uint *)(param_1 + 0x142) & 0xfeffffff;
  param_1[0x145] = (long)"mStampPatternCircleL00";
  param_1[0x147] = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  param_1[0x144] = (long)(puVar1 + 0x10);
  param_1[0x149] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x144);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x144] + 0xf0))(param_1 + 0x144);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x148) >> 7 & 1) == 0) {
    param_1[0x149] = 0;
    *(undefined4 *)(param_1 + 0x149) = 0;
  }
  param_1[0x14c] = 0;
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfeffffff;
  param_1[0x14b] = (long)"mStampPatternCircleL01";
  param_1[0x14d] = 0;
  *(undefined4 *)(param_1 + 0x14e) = 0;
  param_1[0x14a] = (long)(puVar1 + 0x10);
  param_1[0x14f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x14a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x14a] + 0xf0))(param_1 + 0x14a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x14e) >> 7 & 1) == 0) {
    param_1[0x14f] = 0;
    *(undefined4 *)(param_1 + 0x14f) = 0;
  }
  param_1[0x152] = 0;
  *(uint *)(param_1 + 0x14e) = *(uint *)(param_1 + 0x14e) & 0xfeffffff;
  param_1[0x151] = (long)"mStampPatternCircleL02";
  param_1[0x153] = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  param_1[0x150] = (long)(puVar1 + 0x10);
  param_1[0x155] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x150);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x150] + 0xf0))(param_1 + 0x150);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x154) >> 7 & 1) == 0) {
    param_1[0x155] = 0;
    *(undefined4 *)(param_1 + 0x155) = 0;
  }
  param_1[0x158] = 0;
  *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfeffffff;
  param_1[0x157] = (long)"mStampPatternCircleL03";
  param_1[0x159] = 0;
  *(undefined4 *)(param_1 + 0x15a) = 0;
  param_1[0x156] = (long)(puVar1 + 0x10);
  param_1[0x15b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x156);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x156] + 0xf0))(param_1 + 0x156);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x15a) >> 7 & 1) == 0) {
    param_1[0x15b] = 0;
    *(undefined4 *)(param_1 + 0x15b) = 0;
  }
  param_1[0x15e] = 0;
  *(uint *)(param_1 + 0x15a) = *(uint *)(param_1 + 0x15a) & 0xfeffffff;
  param_1[0x15d] = (long)"mStampPatternCircleL04";
  param_1[0x15f] = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  param_1[0x15c] = (long)(puVar1 + 0x10);
  param_1[0x161] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x15c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x15c] + 0xf0))(param_1 + 0x15c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x160) >> 7 & 1) == 0) {
    param_1[0x161] = 0;
    *(undefined4 *)(param_1 + 0x161) = 0;
  }
  param_1[0x164] = 0;
  *(uint *)(param_1 + 0x160) = *(uint *)(param_1 + 0x160) & 0xfeffffff;
  param_1[0x163] = (long)"mStampPatternCircleL05";
  param_1[0x165] = 0;
  *(undefined4 *)(param_1 + 0x166) = 0;
  param_1[0x162] = (long)(puVar1 + 0x10);
  param_1[0x167] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x162);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x162] + 0xf0))(param_1 + 0x162);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x166) >> 7 & 1) == 0) {
    param_1[0x167] = 0;
    *(undefined4 *)(param_1 + 0x167) = 0;
  }
  param_1[0x16a] = 0;
  *(uint *)(param_1 + 0x166) = *(uint *)(param_1 + 0x166) & 0xfeffffff;
  param_1[0x169] = (long)"mStampPatternCircleL06";
  param_1[0x16b] = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  param_1[0x168] = (long)(puVar1 + 0x10);
  param_1[0x16d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x168);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x168] + 0xf0))(param_1 + 0x168);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x16c) >> 7 & 1) == 0) {
    param_1[0x16d] = 0;
    *(undefined4 *)(param_1 + 0x16d) = 0;
  }
  param_1[0x170] = 0;
  *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) & 0xfeffffff;
  param_1[0x16f] = (long)"mStampPatternCircleL07";
  param_1[0x171] = 0;
  *(undefined4 *)(param_1 + 0x172) = 0;
  param_1[0x16e] = (long)(puVar1 + 0x10);
  param_1[0x173] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x16e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x16e] + 0xf0))(param_1 + 0x16e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x172) >> 7 & 1) == 0) {
    param_1[0x173] = 0;
    *(undefined4 *)(param_1 + 0x173) = 0;
  }
  param_1[0x176] = 0;
  *(uint *)(param_1 + 0x172) = *(uint *)(param_1 + 0x172) & 0xfeffffff;
  param_1[0x175] = (long)"mStampPatternCircleL08";
  param_1[0x177] = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  param_1[0x174] = (long)(puVar1 + 0x10);
  param_1[0x179] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x174);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x174] + 0xf0))(param_1 + 0x174);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x178) >> 7 & 1) == 0) {
    param_1[0x179] = 0;
    *(undefined4 *)(param_1 + 0x179) = 0;
  }
  param_1[0x17c] = 0;
  *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) & 0xfeffffff;
  param_1[0x17b] = (long)"mStampPatternCircleL09";
  param_1[0x17d] = 0;
  *(undefined4 *)(param_1 + 0x17e) = 0;
  param_1[0x17a] = (long)(puVar1 + 0x10);
  param_1[0x17f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x17a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x17a] + 0xf0))(param_1 + 0x17a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x17e) >> 7 & 1) == 0) {
    param_1[0x17f] = 0;
    *(undefined4 *)(param_1 + 0x17f) = 0;
  }
  param_1[0x182] = 0;
  *(uint *)(param_1 + 0x17e) = *(uint *)(param_1 + 0x17e) & 0xfeffffff;
  param_1[0x181] = (long)"mStampPatternCircleL10";
  param_1[0x183] = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  param_1[0x180] = (long)(puVar1 + 0x10);
  param_1[0x185] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x180);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x180] + 0xf0))(param_1 + 0x180);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x184) >> 7 & 1) == 0) {
    param_1[0x185] = 0;
    *(undefined4 *)(param_1 + 0x185) = 0;
  }
  param_1[0x188] = 0;
  *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x184) & 0xfeffffff;
  param_1[0x187] = (long)"mStampPatternCircleL11";
  param_1[0x189] = 0;
  *(undefined4 *)(param_1 + 0x18a) = 0;
  param_1[0x186] = (long)(puVar1 + 0x10);
  param_1[0x18b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x186);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x186] + 0xf0))(param_1 + 0x186);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x18a) >> 7 & 1) == 0) {
    param_1[0x18b] = 0;
    *(undefined4 *)(param_1 + 0x18b) = 0;
  }
  param_1[0x18e] = 0;
  *(uint *)(param_1 + 0x18a) = *(uint *)(param_1 + 0x18a) & 0xfeffffff;
  param_1[0x18d] = (long)"mStampPatternCircleL12";
  param_1[399] = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  param_1[0x18c] = (long)(puVar1 + 0x10);
  param_1[0x191] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x18c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x18c] + 0xf0))(param_1 + 0x18c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 400) >> 7 & 1) == 0) {
    param_1[0x191] = 0;
    *(undefined4 *)(param_1 + 0x191) = 0;
  }
  param_1[0x194] = 0;
  *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xfeffffff;
  param_1[0x193] = (long)"mStampPatternCircleL13";
  param_1[0x195] = 0;
  *(undefined4 *)(param_1 + 0x196) = 0;
  param_1[0x192] = (long)(puVar1 + 0x10);
  param_1[0x197] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x192);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x192] + 0xf0))(param_1 + 0x192);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x196) >> 7 & 1) == 0) {
    param_1[0x197] = 0;
    *(undefined4 *)(param_1 + 0x197) = 0;
  }
  param_1[0x19a] = 0;
  *(uint *)(param_1 + 0x196) = *(uint *)(param_1 + 0x196) & 0xfeffffff;
  param_1[0x199] = (long)"mStampPatternCircleL14";
  param_1[0x19b] = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  param_1[0x198] = (long)(puVar1 + 0x10);
  param_1[0x19d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x198);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x198] + 0xf0))(param_1 + 0x198);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x19c) >> 7 & 1) == 0) {
    param_1[0x19d] = 0;
    *(undefined4 *)(param_1 + 0x19d) = 0;
  }
  param_1[0x1a0] = 0;
  *(uint *)(param_1 + 0x19c) = *(uint *)(param_1 + 0x19c) & 0xfeffffff;
  param_1[0x19f] = (long)"mStampPatternCircleL15";
  param_1[0x1a1] = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  param_1[0x19e] = (long)(puVar1 + 0x10);
  param_1[0x1a3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x19e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x19e] + 0xf0))(param_1 + 0x19e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1a2) >> 7 & 1) == 0) {
    param_1[0x1a3] = 0;
    *(undefined4 *)(param_1 + 0x1a3) = 0;
  }
  param_1[0x1a6] = 0;
  *(uint *)(param_1 + 0x1a2) = *(uint *)(param_1 + 0x1a2) & 0xfeffffff;
  param_1[0x1a5] = (long)"mStampPatternCircleL16";
  param_1[0x1a7] = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  param_1[0x1a4] = (long)(puVar1 + 0x10);
  param_1[0x1a9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1a4);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1a4] + 0xf0))(param_1 + 0x1a4);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1a8) >> 7 & 1) == 0) {
    param_1[0x1a9] = 0;
    *(undefined4 *)(param_1 + 0x1a9) = 0;
  }
  param_1[0x1ac] = 0;
  *(uint *)(param_1 + 0x1a8) = *(uint *)(param_1 + 0x1a8) & 0xfeffffff;
  param_1[0x1ab] = (long)"mStampPatternCircleL17";
  param_1[0x1ad] = 0;
  *(undefined4 *)(param_1 + 0x1ae) = 0;
  param_1[0x1aa] = (long)(puVar1 + 0x10);
  param_1[0x1af] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1aa);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1aa] + 0xf0))(param_1 + 0x1aa);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1ae) >> 7 & 1) == 0) {
    param_1[0x1af] = 0;
    *(undefined4 *)(param_1 + 0x1af) = 0;
  }
  param_1[0x1b2] = 0;
  *(uint *)(param_1 + 0x1ae) = *(uint *)(param_1 + 0x1ae) & 0xfeffffff;
  param_1[0x1b1] = (long)"mStampPatternCircleL18";
  param_1[0x1b3] = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  param_1[0x1b0] = (long)(puVar1 + 0x10);
  param_1[0x1b5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1b0);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1b0] + 0xf0))(param_1 + 0x1b0);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1b4) >> 7 & 1) == 0) {
    param_1[0x1b5] = 0;
    *(undefined4 *)(param_1 + 0x1b5) = 0;
  }
  param_1[0x1b8] = 0;
  *(uint *)(param_1 + 0x1b4) = *(uint *)(param_1 + 0x1b4) & 0xfeffffff;
  param_1[0x1b7] = (long)"mStampPatternCircleL19";
  param_1[0x1b9] = 0;
  *(undefined4 *)(param_1 + 0x1ba) = 0;
  param_1[0x1b6] = (long)(puVar1 + 0x10);
  param_1[0x1bb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1b6);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1b6] + 0xf0))(param_1 + 0x1b6);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1ba) >> 7 & 1) == 0) {
    param_1[0x1bb] = 0;
    *(undefined4 *)(param_1 + 0x1bb) = 0;
  }
  param_1[0x1be] = 0;
  *(uint *)(param_1 + 0x1ba) = *(uint *)(param_1 + 0x1ba) & 0xfeffffff;
  param_1[0x1bd] = (long)"mStampPatternCircleL20";
  param_1[0x1bf] = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  param_1[0x1bc] = (long)(puVar1 + 0x10);
  param_1[0x1c1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1bc);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1bc] + 0xf0))(param_1 + 0x1bc);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1c0) >> 7 & 1) == 0) {
    param_1[0x1c1] = 0;
    *(undefined4 *)(param_1 + 0x1c1) = 0;
  }
  param_1[0x1c4] = 0;
  *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) & 0xfeffffff;
  param_1[0x1c3] = (long)"mStampPatternCircleL21";
  param_1[0x1c5] = 0;
  *(undefined4 *)(param_1 + 0x1c6) = 0;
  param_1[0x1c2] = (long)(puVar1 + 0x10);
  param_1[0x1c7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1c2);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1c2] + 0xf0))(param_1 + 0x1c2);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1c6) >> 7 & 1) == 0) {
    param_1[0x1c7] = 0;
    *(undefined4 *)(param_1 + 0x1c7) = 0;
  }
  param_1[0x1ca] = 0;
  *(uint *)(param_1 + 0x1c6) = *(uint *)(param_1 + 0x1c6) & 0xfeffffff;
  param_1[0x1c9] = (long)"mStampPatternCircleL22";
  param_1[0x1cb] = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  param_1[0x1c8] = (long)(puVar1 + 0x10);
  param_1[0x1cd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1c8);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1c8] + 0xf0))(param_1 + 0x1c8);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1cc) >> 7 & 1) == 0) {
    param_1[0x1cd] = 0;
    *(undefined4 *)(param_1 + 0x1cd) = 0;
  }
  param_1[0x1d0] = 0;
  *(uint *)(param_1 + 0x1cc) = *(uint *)(param_1 + 0x1cc) & 0xfeffffff;
  param_1[0x1cf] = (long)"mStampPatternCircleL23";
  param_1[0x1d1] = 0;
  *(undefined4 *)(param_1 + 0x1d2) = 0;
  param_1[0x1ce] = (long)(puVar1 + 0x10);
  param_1[0x1d3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1ce);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1ce] + 0xf0))(param_1 + 0x1ce);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1d2) >> 7 & 1) == 0) {
    param_1[0x1d3] = 0;
    *(undefined4 *)(param_1 + 0x1d3) = 0;
  }
  param_1[0x1d6] = 0;
  *(uint *)(param_1 + 0x1d2) = *(uint *)(param_1 + 0x1d2) & 0xfeffffff;
  param_1[0x1d5] = (long)"mStampPatternCircleL24";
  param_1[0x1d7] = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  param_1[0x1d4] = (long)(puVar1 + 0x10);
  param_1[0x1d9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1d4);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1d4] + 0xf0))(param_1 + 0x1d4);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1d8) >> 7 & 1) == 0) {
    param_1[0x1d9] = 0;
    *(undefined4 *)(param_1 + 0x1d9) = 0;
  }
  param_1[0x1dc] = 0;
  *(uint *)(param_1 + 0x1d8) = *(uint *)(param_1 + 0x1d8) & 0xfeffffff;
  param_1[0x1db] = (long)"mStampPatternHeartS00";
  param_1[0x1dd] = 0;
  *(undefined4 *)(param_1 + 0x1de) = 0;
  param_1[0x1da] = (long)(puVar1 + 0x10);
  param_1[0x1df] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1da);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1da] + 0xf0))(param_1 + 0x1da);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1de) >> 7 & 1) == 0) {
    param_1[0x1df] = 0;
    *(undefined4 *)(param_1 + 0x1df) = 0;
  }
  param_1[0x1e2] = 0;
  *(uint *)(param_1 + 0x1de) = *(uint *)(param_1 + 0x1de) & 0xfeffffff;
  param_1[0x1e1] = (long)"mStampPatternHeartS01";
  param_1[0x1e3] = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  param_1[0x1e0] = (long)(puVar1 + 0x10);
  param_1[0x1e5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1e0);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1e0] + 0xf0))(param_1 + 0x1e0);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1e4) >> 7 & 1) == 0) {
    param_1[0x1e5] = 0;
    *(undefined4 *)(param_1 + 0x1e5) = 0;
  }
  param_1[0x1e8] = 0;
  *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfeffffff;
  param_1[0x1e7] = (long)"mStampPatternHeartS02";
  param_1[0x1e9] = 0;
  *(undefined4 *)(param_1 + 0x1ea) = 0;
  param_1[0x1e6] = (long)(puVar1 + 0x10);
  param_1[0x1eb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1e6);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1e6] + 0xf0))(param_1 + 0x1e6);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1ea) >> 7 & 1) == 0) {
    param_1[0x1eb] = 0;
    *(undefined4 *)(param_1 + 0x1eb) = 0;
  }
  param_1[0x1ee] = 0;
  *(uint *)(param_1 + 0x1ea) = *(uint *)(param_1 + 0x1ea) & 0xfeffffff;
  param_1[0x1ed] = (long)"mStampPatternHeartS03";
  param_1[0x1ef] = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  param_1[0x1ec] = (long)(puVar1 + 0x10);
  param_1[0x1f1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1ec);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1ec] + 0xf0))(param_1 + 0x1ec);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1f0) >> 7 & 1) == 0) {
    param_1[0x1f1] = 0;
    *(undefined4 *)(param_1 + 0x1f1) = 0;
  }
  param_1[500] = 0;
  *(uint *)(param_1 + 0x1f0) = *(uint *)(param_1 + 0x1f0) & 0xfeffffff;
  param_1[499] = (long)"mStampPatternHeartS04";
  param_1[0x1f5] = 0;
  *(undefined4 *)(param_1 + 0x1f6) = 0;
  param_1[0x1f2] = (long)(puVar1 + 0x10);
  param_1[0x1f7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1f2);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1f2] + 0xf0))(param_1 + 0x1f2);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1f6) >> 7 & 1) == 0) {
    param_1[0x1f7] = 0;
    *(undefined4 *)(param_1 + 0x1f7) = 0;
  }
  param_1[0x1fa] = 0;
  *(uint *)(param_1 + 0x1f6) = *(uint *)(param_1 + 0x1f6) & 0xfeffffff;
  param_1[0x1f9] = (long)"mStampPatternHeartS05";
  param_1[0x1fb] = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  param_1[0x1f8] = (long)(puVar1 + 0x10);
  param_1[0x1fd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1f8);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1f8] + 0xf0))(param_1 + 0x1f8);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x1fc) >> 7 & 1) == 0) {
    param_1[0x1fd] = 0;
    *(undefined4 *)(param_1 + 0x1fd) = 0;
  }
  param_1[0x200] = 0;
  *(uint *)(param_1 + 0x1fc) = *(uint *)(param_1 + 0x1fc) & 0xfeffffff;
  param_1[0x1ff] = (long)"mStampPatternHeartS06";
  param_1[0x201] = 0;
  *(undefined4 *)(param_1 + 0x202) = 0;
  param_1[0x1fe] = (long)(puVar1 + 0x10);
  param_1[0x203] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1fe);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x1fe] + 0xf0))(param_1 + 0x1fe);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x202) >> 7 & 1) == 0) {
    param_1[0x203] = 0;
    *(undefined4 *)(param_1 + 0x203) = 0;
  }
  *(uint *)(param_1 + 0x202) = *(uint *)(param_1 + 0x202) & 0xfeffffff;
  param_1[0x205] = (long)"mStampPatternHeartS07";
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  param_1[0x204] = (long)(puVar1 + 0x10);
  param_1[0x209] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x204);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x204] + 0xf0))(param_1 + 0x204);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x208) >> 7 & 1) == 0) {
    param_1[0x209] = 0;
    *(undefined4 *)(param_1 + 0x209) = 0;
  }
  param_1[0x20c] = 0;
  *(uint *)(param_1 + 0x208) = *(uint *)(param_1 + 0x208) & 0xfeffffff;
  param_1[0x20b] = (long)"mStampPatternHeartS08";
  param_1[0x20d] = 0;
  *(undefined4 *)(param_1 + 0x20e) = 0;
  param_1[0x20a] = (long)(puVar1 + 0x10);
  param_1[0x20f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x20a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x20a] + 0xf0))(param_1 + 0x20a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x20e) >> 7 & 1) == 0) {
    param_1[0x20f] = 0;
    *(undefined4 *)(param_1 + 0x20f) = 0;
  }
  *(uint *)(param_1 + 0x20e) = *(uint *)(param_1 + 0x20e) & 0xfeffffff;
  param_1[0x211] = (long)"mStampPatternHeartS09";
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  param_1[0x210] = (long)(puVar1 + 0x10);
  param_1[0x215] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x210);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x210] + 0xf0))(param_1 + 0x210);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x214) >> 7 & 1) == 0) {
    param_1[0x215] = 0;
    *(undefined4 *)(param_1 + 0x215) = 0;
  }
  param_1[0x218] = 0;
  *(uint *)(param_1 + 0x214) = *(uint *)(param_1 + 0x214) & 0xfeffffff;
  param_1[0x217] = (long)"mStampPatternHeartS10";
  param_1[0x219] = 0;
  *(undefined4 *)(param_1 + 0x21a) = 0;
  param_1[0x216] = (long)(puVar1 + 0x10);
  param_1[0x21b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x216);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x216] + 0xf0))(param_1 + 0x216);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x21a) >> 7 & 1) == 0) {
    param_1[0x21b] = 0;
    *(undefined4 *)(param_1 + 0x21b) = 0;
  }
  *(uint *)(param_1 + 0x21a) = *(uint *)(param_1 + 0x21a) & 0xfeffffff;
  param_1[0x21d] = (long)"mStampPatternHeartS11";
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  param_1[0x21c] = (long)(puVar1 + 0x10);
  param_1[0x221] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x21c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x21c] + 0xf0))(param_1 + 0x21c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x220) >> 7 & 1) == 0) {
    param_1[0x221] = 0;
    *(undefined4 *)(param_1 + 0x221) = 0;
  }
  param_1[0x224] = 0;
  *(uint *)(param_1 + 0x220) = *(uint *)(param_1 + 0x220) & 0xfeffffff;
  param_1[0x223] = (long)"mStampPatternHeartS12";
  param_1[0x225] = 0;
  *(undefined4 *)(param_1 + 0x226) = 0;
  param_1[0x222] = (long)(puVar1 + 0x10);
  param_1[0x227] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x222);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x222] + 0xf0))(param_1 + 0x222);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x226) >> 7 & 1) == 0) {
    param_1[0x227] = 0;
    *(undefined4 *)(param_1 + 0x227) = 0;
  }
  *(uint *)(param_1 + 0x226) = *(uint *)(param_1 + 0x226) & 0xfeffffff;
  param_1[0x229] = (long)"mStampPatternHeartS13";
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  param_1[0x228] = (long)(puVar1 + 0x10);
  param_1[0x22d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x228);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x228] + 0xf0))(param_1 + 0x228);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x22c) >> 7 & 1) == 0) {
    param_1[0x22d] = 0;
    *(undefined4 *)(param_1 + 0x22d) = 0;
  }
  param_1[0x230] = 0;
  *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) & 0xfeffffff;
  param_1[0x22f] = (long)"mStampPatternHeartS14";
  param_1[0x231] = 0;
  *(undefined4 *)(param_1 + 0x232) = 0;
  param_1[0x22e] = (long)(puVar1 + 0x10);
  param_1[0x233] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x22e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x22e] + 0xf0))(param_1 + 0x22e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x232) >> 7 & 1) == 0) {
    param_1[0x233] = 0;
    *(undefined4 *)(param_1 + 0x233) = 0;
  }
  *(uint *)(param_1 + 0x232) = *(uint *)(param_1 + 0x232) & 0xfeffffff;
  param_1[0x235] = (long)"mStampPatternHeartS15";
  param_1[0x236] = 0;
  param_1[0x237] = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  param_1[0x234] = (long)(puVar1 + 0x10);
  param_1[0x239] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x234);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x234] + 0xf0))(param_1 + 0x234);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x238) >> 7 & 1) == 0) {
    param_1[0x239] = 0;
    *(undefined4 *)(param_1 + 0x239) = 0;
  }
  param_1[0x23c] = 0;
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xfeffffff;
  param_1[0x23b] = (long)"mStampPatternHeartS16";
  param_1[0x23d] = 0;
  *(undefined4 *)(param_1 + 0x23e) = 0;
  param_1[0x23a] = (long)(puVar1 + 0x10);
  param_1[0x23f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x23a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x23a] + 0xf0))(param_1 + 0x23a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x23e) >> 7 & 1) == 0) {
    param_1[0x23f] = 0;
    *(undefined4 *)(param_1 + 0x23f) = 0;
  }
  *(uint *)(param_1 + 0x23e) = *(uint *)(param_1 + 0x23e) & 0xfeffffff;
  param_1[0x241] = (long)"mStampPatternHeartS17";
  param_1[0x242] = 0;
  param_1[0x243] = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  param_1[0x240] = (long)(puVar1 + 0x10);
  param_1[0x245] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x240);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x240] + 0xf0))(param_1 + 0x240);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x244) >> 7 & 1) == 0) {
    param_1[0x245] = 0;
    *(undefined4 *)(param_1 + 0x245) = 0;
  }
  param_1[0x248] = 0;
  *(uint *)(param_1 + 0x244) = *(uint *)(param_1 + 0x244) & 0xfeffffff;
  param_1[0x247] = (long)"mStampPatternHeartS18";
  param_1[0x249] = 0;
  *(undefined4 *)(param_1 + 0x24a) = 0;
  param_1[0x246] = (long)(puVar1 + 0x10);
  param_1[0x24b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x246);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x246] + 0xf0))(param_1 + 0x246);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x24a) >> 7 & 1) == 0) {
    param_1[0x24b] = 0;
    *(undefined4 *)(param_1 + 0x24b) = 0;
  }
  *(uint *)(param_1 + 0x24a) = *(uint *)(param_1 + 0x24a) & 0xfeffffff;
  param_1[0x24d] = (long)"mStampPatternHeartS19";
  param_1[0x24e] = 0;
  param_1[0x24f] = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  param_1[0x24c] = (long)(puVar1 + 0x10);
  param_1[0x251] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x24c] + 0xf0))(param_1 + 0x24c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x250) >> 7 & 1) == 0) {
    param_1[0x251] = 0;
    *(undefined4 *)(param_1 + 0x251) = 0;
  }
  param_1[0x254] = 0;
  *(uint *)(param_1 + 0x250) = *(uint *)(param_1 + 0x250) & 0xfeffffff;
  param_1[0x253] = (long)"mStampPatternHeartS20";
  param_1[0x255] = 0;
  *(undefined4 *)(param_1 + 0x256) = 0;
  param_1[0x252] = (long)(puVar1 + 0x10);
  param_1[599] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x252);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x252] + 0xf0))(param_1 + 0x252);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x256) >> 7 & 1) == 0) {
    param_1[599] = 0;
    *(undefined4 *)(param_1 + 599) = 0;
  }
  *(uint *)(param_1 + 0x256) = *(uint *)(param_1 + 0x256) & 0xfeffffff;
  param_1[0x259] = (long)"mStampPatternHeartS21";
  param_1[0x25a] = 0;
  param_1[0x25b] = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  param_1[600] = (long)(puVar1 + 0x10);
  param_1[0x25d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 600);
  puVar2 = (undefined4 *)(**(code **)(param_1[600] + 0xf0))(param_1 + 600);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x25c) >> 7 & 1) == 0) {
    param_1[0x25d] = 0;
    *(undefined4 *)(param_1 + 0x25d) = 0;
  }
  param_1[0x260] = 0;
  *(uint *)(param_1 + 0x25c) = *(uint *)(param_1 + 0x25c) & 0xfeffffff;
  param_1[0x25f] = (long)"mStampPatternHeartS22";
  param_1[0x261] = 0;
  *(undefined4 *)(param_1 + 0x262) = 0;
  param_1[0x25e] = (long)(puVar1 + 0x10);
  param_1[0x263] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x25e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x25e] + 0xf0))(param_1 + 0x25e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x262) >> 7 & 1) == 0) {
    param_1[0x263] = 0;
    *(undefined4 *)(param_1 + 0x263) = 0;
  }
  *(uint *)(param_1 + 0x262) = *(uint *)(param_1 + 0x262) & 0xfeffffff;
  param_1[0x265] = (long)"mStampPatternHeartS23";
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  param_1[0x264] = (long)(puVar1 + 0x10);
  param_1[0x269] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x264);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x264] + 0xf0))(param_1 + 0x264);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x268) >> 7 & 1) == 0) {
    param_1[0x269] = 0;
    *(undefined4 *)(param_1 + 0x269) = 0;
  }
  param_1[0x26c] = 0;
  *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) & 0xfeffffff;
  param_1[0x26b] = (long)"mStampPatternHeartS24";
  param_1[0x26d] = 0;
  *(undefined4 *)(param_1 + 0x26e) = 0;
  param_1[0x26a] = (long)(puVar1 + 0x10);
  param_1[0x26f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x26a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x26a] + 0xf0))(param_1 + 0x26a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x26e) >> 7 & 1) == 0) {
    param_1[0x26f] = 0;
    *(undefined4 *)(param_1 + 0x26f) = 0;
  }
  *(uint *)(param_1 + 0x26e) = *(uint *)(param_1 + 0x26e) & 0xfeffffff;
  param_1[0x271] = (long)"mStampPatternHeartM00";
  param_1[0x272] = 0;
  param_1[0x273] = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  param_1[0x270] = (long)(puVar1 + 0x10);
  param_1[0x275] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x270);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x270] + 0xf0))(param_1 + 0x270);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x274) >> 7 & 1) == 0) {
    param_1[0x275] = 0;
    *(undefined4 *)(param_1 + 0x275) = 0;
  }
  param_1[0x278] = 0;
  *(uint *)(param_1 + 0x274) = *(uint *)(param_1 + 0x274) & 0xfeffffff;
  param_1[0x277] = (long)"mStampPatternHeartM01";
  param_1[0x279] = 0;
  *(undefined4 *)(param_1 + 0x27a) = 0;
  param_1[0x276] = (long)(puVar1 + 0x10);
  param_1[0x27b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x276);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x276] + 0xf0))(param_1 + 0x276);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x27a) >> 7 & 1) == 0) {
    param_1[0x27b] = 0;
    *(undefined4 *)(param_1 + 0x27b) = 0;
  }
  *(uint *)(param_1 + 0x27a) = *(uint *)(param_1 + 0x27a) & 0xfeffffff;
  param_1[0x27d] = (long)"mStampPatternHeartM02";
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  param_1[0x27c] = (long)(puVar1 + 0x10);
  param_1[0x281] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x27c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x27c] + 0xf0))(param_1 + 0x27c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x280) >> 7 & 1) == 0) {
    param_1[0x281] = 0;
    *(undefined4 *)(param_1 + 0x281) = 0;
  }
  param_1[0x284] = 0;
  *(uint *)(param_1 + 0x280) = *(uint *)(param_1 + 0x280) & 0xfeffffff;
  param_1[0x283] = (long)"mStampPatternHeartM03";
  param_1[0x285] = 0;
  *(undefined4 *)(param_1 + 0x286) = 0;
  param_1[0x282] = (long)(puVar1 + 0x10);
  param_1[0x287] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x282);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x282] + 0xf0))(param_1 + 0x282);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x286) >> 7 & 1) == 0) {
    param_1[0x287] = 0;
    *(undefined4 *)(param_1 + 0x287) = 0;
  }
  *(uint *)(param_1 + 0x286) = *(uint *)(param_1 + 0x286) & 0xfeffffff;
  param_1[0x289] = (long)"mStampPatternHeartM04";
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  param_1[0x288] = (long)(puVar1 + 0x10);
  param_1[0x28d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x288);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x288] + 0xf0))(param_1 + 0x288);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x28c) >> 7 & 1) == 0) {
    param_1[0x28d] = 0;
    *(undefined4 *)(param_1 + 0x28d) = 0;
  }
  param_1[0x290] = 0;
  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) & 0xfeffffff;
  param_1[0x28f] = (long)"mStampPatternHeartM05";
  param_1[0x291] = 0;
  *(undefined4 *)(param_1 + 0x292) = 0;
  param_1[0x28e] = (long)(puVar1 + 0x10);
  param_1[0x293] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x28e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x28e] + 0xf0))(param_1 + 0x28e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x292) >> 7 & 1) == 0) {
    param_1[0x293] = 0;
    *(undefined4 *)(param_1 + 0x293) = 0;
  }
  *(uint *)(param_1 + 0x292) = *(uint *)(param_1 + 0x292) & 0xfeffffff;
  param_1[0x295] = (long)"mStampPatternHeartM06";
  param_1[0x296] = 0;
  param_1[0x297] = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  param_1[0x294] = (long)(puVar1 + 0x10);
  param_1[0x299] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x294);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x294] + 0xf0))(param_1 + 0x294);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x298) >> 7 & 1) == 0) {
    param_1[0x299] = 0;
    *(undefined4 *)(param_1 + 0x299) = 0;
  }
  param_1[0x29c] = 0;
  *(uint *)(param_1 + 0x298) = *(uint *)(param_1 + 0x298) & 0xfeffffff;
  param_1[0x29b] = (long)"mStampPatternHeartM07";
  param_1[0x29d] = 0;
  *(undefined4 *)(param_1 + 0x29e) = 0;
  param_1[0x29a] = (long)(puVar1 + 0x10);
  param_1[0x29f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x29a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x29a] + 0xf0))(param_1 + 0x29a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x29e) >> 7 & 1) == 0) {
    param_1[0x29f] = 0;
    *(undefined4 *)(param_1 + 0x29f) = 0;
  }
  *(uint *)(param_1 + 0x29e) = *(uint *)(param_1 + 0x29e) & 0xfeffffff;
  param_1[0x2a1] = (long)"mStampPatternHeartM08";
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  param_1[0x2a0] = (long)(puVar1 + 0x10);
  param_1[0x2a5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a0);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2a0] + 0xf0))(param_1 + 0x2a0);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2a4) >> 7 & 1) == 0) {
    param_1[0x2a5] = 0;
    *(undefined4 *)(param_1 + 0x2a5) = 0;
  }
  param_1[0x2a8] = 0;
  *(uint *)(param_1 + 0x2a4) = *(uint *)(param_1 + 0x2a4) & 0xfeffffff;
  param_1[0x2a7] = (long)"mStampPatternHeartM09";
  param_1[0x2a9] = 0;
  *(undefined4 *)(param_1 + 0x2aa) = 0;
  param_1[0x2a6] = (long)(puVar1 + 0x10);
  param_1[0x2ab] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a6);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2a6] + 0xf0))(param_1 + 0x2a6);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2aa) >> 7 & 1) == 0) {
    param_1[0x2ab] = 0;
    *(undefined4 *)(param_1 + 0x2ab) = 0;
  }
  *(uint *)(param_1 + 0x2aa) = *(uint *)(param_1 + 0x2aa) & 0xfeffffff;
  param_1[0x2ad] = (long)"mStampPatternHeartM10";
  param_1[0x2ae] = 0;
  param_1[0x2af] = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  param_1[0x2ac] = (long)(puVar1 + 0x10);
  param_1[0x2b1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2ac);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2ac] + 0xf0))(param_1 + 0x2ac);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2b0) >> 7 & 1) == 0) {
    param_1[0x2b1] = 0;
    *(undefined4 *)(param_1 + 0x2b1) = 0;
  }
  param_1[0x2b4] = 0;
  *(uint *)(param_1 + 0x2b0) = *(uint *)(param_1 + 0x2b0) & 0xfeffffff;
  param_1[0x2b3] = (long)"mStampPatternHeartM11";
  param_1[0x2b5] = 0;
  *(undefined4 *)(param_1 + 0x2b6) = 0;
  param_1[0x2b2] = (long)(puVar1 + 0x10);
  param_1[0x2b7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b2);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2b2] + 0xf0))(param_1 + 0x2b2);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2b6) >> 7 & 1) == 0) {
    param_1[0x2b7] = 0;
    *(undefined4 *)(param_1 + 0x2b7) = 0;
  }
  *(uint *)(param_1 + 0x2b6) = *(uint *)(param_1 + 0x2b6) & 0xfeffffff;
  param_1[0x2b9] = (long)"mStampPatternHeartM12";
  param_1[0x2ba] = 0;
  param_1[699] = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  param_1[0x2b8] = (long)(puVar1 + 0x10);
  param_1[0x2bd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b8);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2b8] + 0xf0))(param_1 + 0x2b8);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 700) >> 7 & 1) == 0) {
    param_1[0x2bd] = 0;
    *(undefined4 *)(param_1 + 0x2bd) = 0;
  }
  param_1[0x2c0] = 0;
  *(uint *)(param_1 + 700) = *(uint *)(param_1 + 700) & 0xfeffffff;
  param_1[0x2bf] = (long)"mStampPatternHeartM13";
  param_1[0x2c1] = 0;
  *(undefined4 *)(param_1 + 0x2c2) = 0;
  param_1[0x2be] = (long)(puVar1 + 0x10);
  param_1[0x2c3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2be);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2be] + 0xf0))(param_1 + 0x2be);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2c2) >> 7 & 1) == 0) {
    param_1[0x2c3] = 0;
    *(undefined4 *)(param_1 + 0x2c3) = 0;
  }
  *(uint *)(param_1 + 0x2c2) = *(uint *)(param_1 + 0x2c2) & 0xfeffffff;
  param_1[0x2c5] = (long)"mStampPatternHeartM14";
  param_1[0x2c6] = 0;
  param_1[0x2c7] = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  param_1[0x2c4] = (long)(puVar1 + 0x10);
  param_1[0x2c9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2c4);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2c4] + 0xf0))(param_1 + 0x2c4);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2c8) >> 7 & 1) == 0) {
    param_1[0x2c9] = 0;
    *(undefined4 *)(param_1 + 0x2c9) = 0;
  }
  param_1[0x2cc] = 0;
  *(uint *)(param_1 + 0x2c8) = *(uint *)(param_1 + 0x2c8) & 0xfeffffff;
  param_1[0x2cb] = (long)"mStampPatternHeartM15";
  param_1[0x2cd] = 0;
  *(undefined4 *)(param_1 + 0x2ce) = 0;
  param_1[0x2ca] = (long)(puVar1 + 0x10);
  param_1[0x2cf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2ca);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2ca] + 0xf0))(param_1 + 0x2ca);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2ce) >> 7 & 1) == 0) {
    param_1[0x2cf] = 0;
    *(undefined4 *)(param_1 + 0x2cf) = 0;
  }
  *(uint *)(param_1 + 0x2ce) = *(uint *)(param_1 + 0x2ce) & 0xfeffffff;
  param_1[0x2d1] = (long)"mStampPatternHeartM16";
  param_1[0x2d2] = 0;
  param_1[0x2d3] = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  param_1[0x2d0] = (long)(puVar1 + 0x10);
  param_1[0x2d5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2d0);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2d0] + 0xf0))(param_1 + 0x2d0);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2d4) >> 7 & 1) == 0) {
    param_1[0x2d5] = 0;
    *(undefined4 *)(param_1 + 0x2d5) = 0;
  }
  param_1[0x2d8] = 0;
  *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x2d4) & 0xfeffffff;
  param_1[0x2d7] = (long)"mStampPatternHeartM17";
  param_1[0x2d9] = 0;
  *(undefined4 *)(param_1 + 0x2da) = 0;
  param_1[0x2d6] = (long)(puVar1 + 0x10);
  param_1[0x2db] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2d6);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2d6] + 0xf0))(param_1 + 0x2d6);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2da) >> 7 & 1) == 0) {
    param_1[0x2db] = 0;
    *(undefined4 *)(param_1 + 0x2db) = 0;
  }
  *(uint *)(param_1 + 0x2da) = *(uint *)(param_1 + 0x2da) & 0xfeffffff;
  param_1[0x2dd] = (long)"mStampPatternHeartM18";
  param_1[0x2de] = 0;
  param_1[0x2df] = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  param_1[0x2dc] = (long)(puVar1 + 0x10);
  param_1[0x2e1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2dc);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2dc] + 0xf0))(param_1 + 0x2dc);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2e0) >> 7 & 1) == 0) {
    param_1[0x2e1] = 0;
    *(undefined4 *)(param_1 + 0x2e1) = 0;
  }
  param_1[0x2e4] = 0;
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) & 0xfeffffff;
  param_1[0x2e3] = (long)"mStampPatternHeartM19";
  param_1[0x2e5] = 0;
  *(undefined4 *)(param_1 + 0x2e6) = 0;
  param_1[0x2e2] = (long)(puVar1 + 0x10);
  param_1[0x2e7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2e2);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2e2] + 0xf0))(param_1 + 0x2e2);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2e6) >> 7 & 1) == 0) {
    param_1[0x2e7] = 0;
    *(undefined4 *)(param_1 + 0x2e7) = 0;
  }
  *(uint *)(param_1 + 0x2e6) = *(uint *)(param_1 + 0x2e6) & 0xfeffffff;
  param_1[0x2e9] = (long)"mStampPatternHeartM20";
  param_1[0x2ea] = 0;
  param_1[0x2eb] = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  param_1[0x2e8] = (long)(puVar1 + 0x10);
  param_1[0x2ed] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2e8);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2e8] + 0xf0))(param_1 + 0x2e8);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2ec) >> 7 & 1) == 0) {
    param_1[0x2ed] = 0;
    *(undefined4 *)(param_1 + 0x2ed) = 0;
  }
  param_1[0x2f0] = 0;
  *(uint *)(param_1 + 0x2ec) = *(uint *)(param_1 + 0x2ec) & 0xfeffffff;
  param_1[0x2ef] = (long)"mStampPatternHeartM21";
  param_1[0x2f1] = 0;
  *(undefined4 *)(param_1 + 0x2f2) = 0;
  param_1[0x2ee] = (long)(puVar1 + 0x10);
  param_1[0x2f3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2ee);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2ee] + 0xf0))(param_1 + 0x2ee);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2f2) >> 7 & 1) == 0) {
    param_1[0x2f3] = 0;
    *(undefined4 *)(param_1 + 0x2f3) = 0;
  }
  *(uint *)(param_1 + 0x2f2) = *(uint *)(param_1 + 0x2f2) & 0xfeffffff;
  param_1[0x2f5] = (long)"mStampPatternHeartM22";
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  param_1[0x2f4] = (long)(puVar1 + 0x10);
  param_1[0x2f9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2f4);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2f4] + 0xf0))(param_1 + 0x2f4);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2f8) >> 7 & 1) == 0) {
    param_1[0x2f9] = 0;
    *(undefined4 *)(param_1 + 0x2f9) = 0;
  }
  param_1[0x2fc] = 0;
  *(uint *)(param_1 + 0x2f8) = *(uint *)(param_1 + 0x2f8) & 0xfeffffff;
  param_1[0x2fb] = (long)"mStampPatternHeartM23";
  param_1[0x2fd] = 0;
  *(undefined4 *)(param_1 + 0x2fe) = 0;
  param_1[0x2fa] = (long)(puVar1 + 0x10);
  param_1[0x2ff] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2fa);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x2fa] + 0xf0))(param_1 + 0x2fa);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x2fe) >> 7 & 1) == 0) {
    param_1[0x2ff] = 0;
    *(undefined4 *)(param_1 + 0x2ff) = 0;
  }
  *(uint *)(param_1 + 0x2fe) = *(uint *)(param_1 + 0x2fe) & 0xfeffffff;
  param_1[0x301] = (long)"mStampPatternHeartM24";
  param_1[0x302] = 0;
  param_1[0x303] = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  param_1[0x300] = (long)(puVar1 + 0x10);
  param_1[0x305] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x300);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x300] + 0xf0))(param_1 + 0x300);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x304) >> 7 & 1) == 0) {
    param_1[0x305] = 0;
    *(undefined4 *)(param_1 + 0x305) = 0;
  }
  param_1[0x308] = 0;
  *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) & 0xfeffffff;
  param_1[0x307] = (long)"mStampPatternHeartL00";
  param_1[0x309] = 0;
  *(undefined4 *)(param_1 + 0x30a) = 0;
  param_1[0x306] = (long)(puVar1 + 0x10);
  param_1[0x30b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x306);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x306] + 0xf0))(param_1 + 0x306);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x30a) >> 7 & 1) == 0) {
    param_1[0x30b] = 0;
    *(undefined4 *)(param_1 + 0x30b) = 0;
  }
  *(uint *)(param_1 + 0x30a) = *(uint *)(param_1 + 0x30a) & 0xfeffffff;
  param_1[0x30d] = (long)"mStampPatternHeartL01";
  param_1[0x30e] = 0;
  param_1[0x30f] = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  param_1[0x30c] = (long)(puVar1 + 0x10);
  param_1[0x311] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x30c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x30c] + 0xf0))(param_1 + 0x30c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x310) >> 7 & 1) == 0) {
    param_1[0x311] = 0;
    *(undefined4 *)(param_1 + 0x311) = 0;
  }
  param_1[0x314] = 0;
  *(uint *)(param_1 + 0x310) = *(uint *)(param_1 + 0x310) & 0xfeffffff;
  param_1[0x313] = (long)"mStampPatternHeartL02";
  param_1[0x315] = 0;
  *(undefined4 *)(param_1 + 0x316) = 0;
  param_1[0x312] = (long)(puVar1 + 0x10);
  param_1[0x317] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x312);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x312] + 0xf0))(param_1 + 0x312);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x316) >> 7 & 1) == 0) {
    param_1[0x317] = 0;
    *(undefined4 *)(param_1 + 0x317) = 0;
  }
  *(uint *)(param_1 + 0x316) = *(uint *)(param_1 + 0x316) & 0xfeffffff;
  param_1[0x319] = (long)"mStampPatternHeartL03";
  param_1[0x31a] = 0;
  param_1[0x31b] = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  param_1[0x318] = (long)(puVar1 + 0x10);
  param_1[0x31d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x318);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x318] + 0xf0))(param_1 + 0x318);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x31c) >> 7 & 1) == 0) {
    param_1[0x31d] = 0;
    *(undefined4 *)(param_1 + 0x31d) = 0;
  }
  param_1[800] = 0;
  *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 0x31c) & 0xfeffffff;
  param_1[799] = (long)"mStampPatternHeartL04";
  param_1[0x321] = 0;
  *(undefined4 *)(param_1 + 0x322) = 0;
  param_1[0x31e] = (long)(puVar1 + 0x10);
  param_1[0x323] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x31e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x31e] + 0xf0))(param_1 + 0x31e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x322) >> 7 & 1) == 0) {
    param_1[0x323] = 0;
    *(undefined4 *)(param_1 + 0x323) = 0;
  }
  *(uint *)(param_1 + 0x322) = *(uint *)(param_1 + 0x322) & 0xfeffffff;
  param_1[0x325] = (long)"mStampPatternHeartL05";
  param_1[0x326] = 0;
  param_1[0x327] = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  param_1[0x324] = (long)(puVar1 + 0x10);
  param_1[0x329] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x324);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x324] + 0xf0))(param_1 + 0x324);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x328) >> 7 & 1) == 0) {
    param_1[0x329] = 0;
    *(undefined4 *)(param_1 + 0x329) = 0;
  }
  param_1[0x32c] = 0;
  *(uint *)(param_1 + 0x328) = *(uint *)(param_1 + 0x328) & 0xfeffffff;
  param_1[0x32b] = (long)"mStampPatternHeartL06";
  param_1[0x32d] = 0;
  *(undefined4 *)(param_1 + 0x32e) = 0;
  param_1[0x32a] = (long)(puVar1 + 0x10);
  param_1[0x32f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x32a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x32a] + 0xf0))(param_1 + 0x32a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x32e) >> 7 & 1) == 0) {
    param_1[0x32f] = 0;
    *(undefined4 *)(param_1 + 0x32f) = 0;
  }
  *(uint *)(param_1 + 0x32e) = *(uint *)(param_1 + 0x32e) & 0xfeffffff;
  param_1[0x331] = (long)"mStampPatternHeartL07";
  param_1[0x332] = 0;
  param_1[0x333] = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  param_1[0x330] = (long)(puVar1 + 0x10);
  param_1[0x335] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x330);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x330] + 0xf0))(param_1 + 0x330);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x334) >> 7 & 1) == 0) {
    param_1[0x335] = 0;
    *(undefined4 *)(param_1 + 0x335) = 0;
  }
  param_1[0x338] = 0;
  *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) & 0xfeffffff;
  param_1[0x337] = (long)"mStampPatternHeartL08";
  param_1[0x339] = 0;
  *(undefined4 *)(param_1 + 0x33a) = 0;
  param_1[0x336] = (long)(puVar1 + 0x10);
  param_1[0x33b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x336);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x336] + 0xf0))(param_1 + 0x336);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x33a) >> 7 & 1) == 0) {
    param_1[0x33b] = 0;
    *(undefined4 *)(param_1 + 0x33b) = 0;
  }
  *(uint *)(param_1 + 0x33a) = *(uint *)(param_1 + 0x33a) & 0xfeffffff;
  param_1[0x33d] = (long)"mStampPatternHeartL09";
  param_1[0x33e] = 0;
  param_1[0x33f] = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  param_1[0x33c] = (long)(puVar1 + 0x10);
  param_1[0x341] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x33c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x33c] + 0xf0))(param_1 + 0x33c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x340) >> 7 & 1) == 0) {
    param_1[0x341] = 0;
    *(undefined4 *)(param_1 + 0x341) = 0;
  }
  param_1[0x344] = 0;
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xfeffffff;
  param_1[0x343] = (long)"mStampPatternHeartL10";
  param_1[0x345] = 0;
  *(undefined4 *)(param_1 + 0x346) = 0;
  param_1[0x342] = (long)(puVar1 + 0x10);
  param_1[0x347] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x342);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x342] + 0xf0))(param_1 + 0x342);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x346) >> 7 & 1) == 0) {
    param_1[0x347] = 0;
    *(undefined4 *)(param_1 + 0x347) = 0;
  }
  *(uint *)(param_1 + 0x346) = *(uint *)(param_1 + 0x346) & 0xfeffffff;
  param_1[0x349] = (long)"mStampPatternHeartL11";
  param_1[0x34a] = 0;
  param_1[0x34b] = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  param_1[0x348] = (long)(puVar1 + 0x10);
  param_1[0x34d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x348);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x348] + 0xf0))(param_1 + 0x348);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x34c) >> 7 & 1) == 0) {
    param_1[0x34d] = 0;
    *(undefined4 *)(param_1 + 0x34d) = 0;
  }
  param_1[0x350] = 0;
  *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) & 0xfeffffff;
  param_1[0x34f] = (long)"mStampPatternHeartL12";
  param_1[0x351] = 0;
  *(undefined4 *)(param_1 + 0x352) = 0;
  param_1[0x34e] = (long)(puVar1 + 0x10);
  param_1[0x353] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x34e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x34e] + 0xf0))(param_1 + 0x34e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x352) >> 7 & 1) == 0) {
    param_1[0x353] = 0;
    *(undefined4 *)(param_1 + 0x353) = 0;
  }
  *(uint *)(param_1 + 0x352) = *(uint *)(param_1 + 0x352) & 0xfeffffff;
  param_1[0x355] = (long)"mStampPatternHeartL13";
  param_1[0x356] = 0;
  param_1[0x357] = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  param_1[0x354] = (long)(puVar1 + 0x10);
  param_1[0x359] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x354);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x354] + 0xf0))(param_1 + 0x354);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x358) >> 7 & 1) == 0) {
    param_1[0x359] = 0;
    *(undefined4 *)(param_1 + 0x359) = 0;
  }
  param_1[0x35c] = 0;
  *(uint *)(param_1 + 0x358) = *(uint *)(param_1 + 0x358) & 0xfeffffff;
  param_1[0x35b] = (long)"mStampPatternHeartL14";
  param_1[0x35d] = 0;
  *(undefined4 *)(param_1 + 0x35e) = 0;
  param_1[0x35a] = (long)(puVar1 + 0x10);
  param_1[0x35f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x35a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x35a] + 0xf0))(param_1 + 0x35a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x35e) >> 7 & 1) == 0) {
    param_1[0x35f] = 0;
    *(undefined4 *)(param_1 + 0x35f) = 0;
  }
  *(uint *)(param_1 + 0x35e) = *(uint *)(param_1 + 0x35e) & 0xfeffffff;
  param_1[0x361] = (long)"mStampPatternHeartL15";
  param_1[0x362] = 0;
  param_1[0x363] = 0;
  *(undefined4 *)(param_1 + 0x364) = 0;
  param_1[0x360] = (long)(puVar1 + 0x10);
  param_1[0x365] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x360);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x360] + 0xf0))(param_1 + 0x360);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x364) >> 7 & 1) == 0) {
    param_1[0x365] = 0;
    *(undefined4 *)(param_1 + 0x365) = 0;
  }
  param_1[0x368] = 0;
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfeffffff;
  param_1[0x367] = (long)"mStampPatternHeartL16";
  param_1[0x369] = 0;
  *(undefined4 *)(param_1 + 0x36a) = 0;
  param_1[0x366] = (long)(puVar1 + 0x10);
  param_1[0x36b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x366);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x366] + 0xf0))(param_1 + 0x366);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x36a) >> 7 & 1) == 0) {
    param_1[0x36b] = 0;
    *(undefined4 *)(param_1 + 0x36b) = 0;
  }
  *(uint *)(param_1 + 0x36a) = *(uint *)(param_1 + 0x36a) & 0xfeffffff;
  param_1[0x36d] = (long)"mStampPatternHeartL17";
  param_1[0x36e] = 0;
  param_1[0x36f] = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  param_1[0x36c] = (long)(puVar1 + 0x10);
  param_1[0x371] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x36c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x36c] + 0xf0))(param_1 + 0x36c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x370) >> 7 & 1) == 0) {
    param_1[0x371] = 0;
    *(undefined4 *)(param_1 + 0x371) = 0;
  }
  param_1[0x374] = 0;
  *(uint *)(param_1 + 0x370) = *(uint *)(param_1 + 0x370) & 0xfeffffff;
  param_1[0x373] = (long)"mStampPatternHeartL18";
  param_1[0x375] = 0;
  *(undefined4 *)(param_1 + 0x376) = 0;
  param_1[0x372] = (long)(puVar1 + 0x10);
  param_1[0x377] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x372);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x372] + 0xf0))(param_1 + 0x372);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x376) >> 7 & 1) == 0) {
    param_1[0x377] = 0;
    *(undefined4 *)(param_1 + 0x377) = 0;
  }
  *(uint *)(param_1 + 0x376) = *(uint *)(param_1 + 0x376) & 0xfeffffff;
  param_1[0x379] = (long)"mStampPatternHeartL19";
  param_1[0x37a] = 0;
  param_1[0x37b] = 0;
  *(undefined4 *)(param_1 + 0x37c) = 0;
  param_1[0x378] = (long)(puVar1 + 0x10);
  param_1[0x37d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x378);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x378] + 0xf0))(param_1 + 0x378);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x37c) >> 7 & 1) == 0) {
    param_1[0x37d] = 0;
    *(undefined4 *)(param_1 + 0x37d) = 0;
  }
  param_1[0x380] = 0;
  *(uint *)(param_1 + 0x37c) = *(uint *)(param_1 + 0x37c) & 0xfeffffff;
  param_1[0x37f] = (long)"mStampPatternHeartL20";
  param_1[0x381] = 0;
  *(undefined4 *)(param_1 + 0x382) = 0;
  param_1[0x37e] = (long)(puVar1 + 0x10);
  param_1[899] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x37e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x37e] + 0xf0))(param_1 + 0x37e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x382) >> 7 & 1) == 0) {
    param_1[899] = 0;
    *(undefined4 *)(param_1 + 899) = 0;
  }
  *(uint *)(param_1 + 0x382) = *(uint *)(param_1 + 0x382) & 0xfeffffff;
  param_1[0x385] = (long)"mStampPatternHeartL21";
  param_1[0x386] = 0;
  param_1[0x387] = 0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  param_1[900] = (long)(puVar1 + 0x10);
  param_1[0x389] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 900);
  puVar2 = (undefined4 *)(**(code **)(param_1[900] + 0xf0))(param_1 + 900);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x388) >> 7 & 1) == 0) {
    param_1[0x389] = 0;
    *(undefined4 *)(param_1 + 0x389) = 0;
  }
  param_1[0x38c] = 0;
  *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) & 0xfeffffff;
  param_1[0x38b] = (long)"mStampPatternHeartL22";
  param_1[0x38d] = 0;
  *(undefined4 *)(param_1 + 0x38e) = 0;
  param_1[0x38a] = (long)(puVar1 + 0x10);
  param_1[0x38f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x38a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x38a] + 0xf0))(param_1 + 0x38a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x38e) >> 7 & 1) == 0) {
    param_1[0x38f] = 0;
    *(undefined4 *)(param_1 + 0x38f) = 0;
  }
  *(uint *)(param_1 + 0x38e) = *(uint *)(param_1 + 0x38e) & 0xfeffffff;
  param_1[0x391] = (long)"mStampPatternHeartL23";
  param_1[0x392] = 0;
  param_1[0x393] = 0;
  *(undefined4 *)(param_1 + 0x394) = 0;
  param_1[0x390] = (long)(puVar1 + 0x10);
  param_1[0x395] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x390);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x390] + 0xf0))(param_1 + 0x390);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x394) >> 7 & 1) == 0) {
    param_1[0x395] = 0;
    *(undefined4 *)(param_1 + 0x395) = 0;
  }
  param_1[0x398] = 0;
  *(uint *)(param_1 + 0x394) = *(uint *)(param_1 + 0x394) & 0xfeffffff;
  param_1[0x397] = (long)"mStampPatternHeartL24";
  param_1[0x399] = 0;
  *(undefined4 *)(param_1 + 0x39a) = 0;
  param_1[0x396] = (long)(puVar1 + 0x10);
  param_1[0x39b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x396);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x396] + 0xf0))(param_1 + 0x396);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x39a) >> 7 & 1) == 0) {
    param_1[0x39b] = 0;
    *(undefined4 *)(param_1 + 0x39b) = 0;
  }
  *(uint *)(param_1 + 0x39a) = *(uint *)(param_1 + 0x39a) & 0xfeffffff;
  param_1[0x39d] = (long)"mStampPatternStarS00";
  param_1[0x39e] = 0;
  param_1[0x39f] = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  param_1[0x39c] = (long)(puVar1 + 0x10);
  param_1[0x3a1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x39c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x39c] + 0xf0))(param_1 + 0x39c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3a0) >> 7 & 1) == 0) {
    param_1[0x3a1] = 0;
    *(undefined4 *)(param_1 + 0x3a1) = 0;
  }
  param_1[0x3a4] = 0;
  *(uint *)(param_1 + 0x3a0) = *(uint *)(param_1 + 0x3a0) & 0xfeffffff;
  param_1[0x3a3] = (long)"mStampPatternStarS01";
  param_1[0x3a5] = 0;
  *(undefined4 *)(param_1 + 0x3a6) = 0;
  param_1[0x3a2] = (long)(puVar1 + 0x10);
  param_1[0x3a7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3a2);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3a2] + 0xf0))(param_1 + 0x3a2);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3a6) >> 7 & 1) == 0) {
    param_1[0x3a7] = 0;
    *(undefined4 *)(param_1 + 0x3a7) = 0;
  }
  *(uint *)(param_1 + 0x3a6) = *(uint *)(param_1 + 0x3a6) & 0xfeffffff;
  param_1[0x3a9] = (long)"mStampPatternStarS02";
  param_1[0x3aa] = 0;
  param_1[0x3ab] = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  param_1[0x3a8] = (long)(puVar1 + 0x10);
  param_1[0x3ad] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3a8);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3a8] + 0xf0))(param_1 + 0x3a8);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3ac) >> 7 & 1) == 0) {
    param_1[0x3ad] = 0;
    *(undefined4 *)(param_1 + 0x3ad) = 0;
  }
  param_1[0x3b0] = 0;
  *(uint *)(param_1 + 0x3ac) = *(uint *)(param_1 + 0x3ac) & 0xfeffffff;
  param_1[0x3af] = (long)"mStampPatternStarS03";
  param_1[0x3b1] = 0;
  *(undefined4 *)(param_1 + 0x3b2) = 0;
  param_1[0x3ae] = (long)(puVar1 + 0x10);
  param_1[0x3b3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3ae);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3ae] + 0xf0))(param_1 + 0x3ae);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3b2) >> 7 & 1) == 0) {
    param_1[0x3b3] = 0;
    *(undefined4 *)(param_1 + 0x3b3) = 0;
  }
  *(uint *)(param_1 + 0x3b2) = *(uint *)(param_1 + 0x3b2) & 0xfeffffff;
  param_1[0x3b5] = (long)"mStampPatternStarS04";
  param_1[0x3b6] = 0;
  param_1[0x3b7] = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  param_1[0x3b4] = (long)(puVar1 + 0x10);
  param_1[0x3b9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3b4);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3b4] + 0xf0))(param_1 + 0x3b4);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3b8) >> 7 & 1) == 0) {
    param_1[0x3b9] = 0;
    *(undefined4 *)(param_1 + 0x3b9) = 0;
  }
  param_1[0x3bc] = 0;
  *(uint *)(param_1 + 0x3b8) = *(uint *)(param_1 + 0x3b8) & 0xfeffffff;
  param_1[0x3bb] = (long)"mStampPatternStarS05";
  param_1[0x3bd] = 0;
  *(undefined4 *)(param_1 + 0x3be) = 0;
  param_1[0x3ba] = (long)(puVar1 + 0x10);
  param_1[0x3bf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3ba);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3ba] + 0xf0))(param_1 + 0x3ba);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3be) >> 7 & 1) == 0) {
    param_1[0x3bf] = 0;
    *(undefined4 *)(param_1 + 0x3bf) = 0;
  }
  *(uint *)(param_1 + 0x3be) = *(uint *)(param_1 + 0x3be) & 0xfeffffff;
  param_1[0x3c1] = (long)"mStampPatternStarS06";
  param_1[0x3c2] = 0;
  param_1[0x3c3] = 0;
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  param_1[0x3c0] = (long)(puVar1 + 0x10);
  param_1[0x3c5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c0);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3c0] + 0xf0))(param_1 + 0x3c0);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3c4) >> 7 & 1) == 0) {
    param_1[0x3c5] = 0;
    *(undefined4 *)(param_1 + 0x3c5) = 0;
  }
  param_1[0x3c8] = 0;
  *(uint *)(param_1 + 0x3c4) = *(uint *)(param_1 + 0x3c4) & 0xfeffffff;
  param_1[0x3c7] = (long)"mStampPatternStarS07";
  param_1[0x3c9] = 0;
  *(undefined4 *)(param_1 + 0x3ca) = 0;
  param_1[0x3c6] = (long)(puVar1 + 0x10);
  param_1[0x3cb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c6);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3c6] + 0xf0))(param_1 + 0x3c6);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3ca) >> 7 & 1) == 0) {
    param_1[0x3cb] = 0;
    *(undefined4 *)(param_1 + 0x3cb) = 0;
  }
  *(uint *)(param_1 + 0x3ca) = *(uint *)(param_1 + 0x3ca) & 0xfeffffff;
  param_1[0x3cd] = (long)"mStampPatternStarS08";
  param_1[0x3ce] = 0;
  param_1[0x3cf] = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  param_1[0x3cc] = (long)(puVar1 + 0x10);
  param_1[0x3d1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3cc);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3cc] + 0xf0))(param_1 + 0x3cc);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3d0) >> 7 & 1) == 0) {
    param_1[0x3d1] = 0;
    *(undefined4 *)(param_1 + 0x3d1) = 0;
  }
  param_1[0x3d4] = 0;
  *(uint *)(param_1 + 0x3d0) = *(uint *)(param_1 + 0x3d0) & 0xfeffffff;
  param_1[0x3d3] = (long)"mStampPatternStarS09";
  param_1[0x3d5] = 0;
  *(undefined4 *)(param_1 + 0x3d6) = 0;
  param_1[0x3d2] = (long)(puVar1 + 0x10);
  param_1[0x3d7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3d2);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3d2] + 0xf0))(param_1 + 0x3d2);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3d6) >> 7 & 1) == 0) {
    param_1[0x3d7] = 0;
    *(undefined4 *)(param_1 + 0x3d7) = 0;
  }
  *(uint *)(param_1 + 0x3d6) = *(uint *)(param_1 + 0x3d6) & 0xfeffffff;
  param_1[0x3d9] = (long)"mStampPatternStarS10";
  param_1[0x3da] = 0;
  param_1[0x3db] = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  param_1[0x3d8] = (long)(puVar1 + 0x10);
  param_1[0x3dd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3d8);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3d8] + 0xf0))(param_1 + 0x3d8);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3dc) >> 7 & 1) == 0) {
    param_1[0x3dd] = 0;
    *(undefined4 *)(param_1 + 0x3dd) = 0;
  }
  param_1[0x3e0] = 0;
  *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x3dc) & 0xfeffffff;
  param_1[0x3df] = (long)"mStampPatternStarS11";
  param_1[0x3e1] = 0;
  *(undefined4 *)(param_1 + 0x3e2) = 0;
  param_1[0x3de] = (long)(puVar1 + 0x10);
  param_1[0x3e3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3de);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3de] + 0xf0))(param_1 + 0x3de);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3e2) >> 7 & 1) == 0) {
    param_1[0x3e3] = 0;
    *(undefined4 *)(param_1 + 0x3e3) = 0;
  }
  *(uint *)(param_1 + 0x3e2) = *(uint *)(param_1 + 0x3e2) & 0xfeffffff;
  param_1[0x3e5] = (long)"mStampPatternStarS12";
  param_1[0x3e6] = 0;
  param_1[999] = 0;
  *(undefined4 *)(param_1 + 1000) = 0;
  param_1[0x3e4] = (long)(puVar1 + 0x10);
  param_1[0x3e9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3e4);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3e4] + 0xf0))(param_1 + 0x3e4);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 1000) >> 7 & 1) == 0) {
    param_1[0x3e9] = 0;
    *(undefined4 *)(param_1 + 0x3e9) = 0;
  }
  param_1[0x3ec] = 0;
  *(uint *)(param_1 + 1000) = *(uint *)(param_1 + 1000) & 0xfeffffff;
  param_1[0x3eb] = (long)"mStampPatternStarS13";
  param_1[0x3ed] = 0;
  *(undefined4 *)(param_1 + 0x3ee) = 0;
  param_1[0x3ea] = (long)(puVar1 + 0x10);
  param_1[0x3ef] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3ea);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3ea] + 0xf0))(param_1 + 0x3ea);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3ee) >> 7 & 1) == 0) {
    param_1[0x3ef] = 0;
    *(undefined4 *)(param_1 + 0x3ef) = 0;
  }
  *(uint *)(param_1 + 0x3ee) = *(uint *)(param_1 + 0x3ee) & 0xfeffffff;
  param_1[0x3f1] = (long)"mStampPatternStarS14";
  param_1[0x3f2] = 0;
  param_1[0x3f3] = 0;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  param_1[0x3f0] = (long)(puVar1 + 0x10);
  param_1[0x3f5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3f0);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3f0] + 0xf0))(param_1 + 0x3f0);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3f4) >> 7 & 1) == 0) {
    param_1[0x3f5] = 0;
    *(undefined4 *)(param_1 + 0x3f5) = 0;
  }
  param_1[0x3f8] = 0;
  *(uint *)(param_1 + 0x3f4) = *(uint *)(param_1 + 0x3f4) & 0xfeffffff;
  param_1[0x3f7] = (long)"mStampPatternStarS15";
  param_1[0x3f9] = 0;
  *(undefined4 *)(param_1 + 0x3fa) = 0;
  param_1[0x3f6] = (long)(puVar1 + 0x10);
  param_1[0x3fb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3f6);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3f6] + 0xf0))(param_1 + 0x3f6);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x3fa) >> 7 & 1) == 0) {
    param_1[0x3fb] = 0;
    *(undefined4 *)(param_1 + 0x3fb) = 0;
  }
  *(uint *)(param_1 + 0x3fa) = *(uint *)(param_1 + 0x3fa) & 0xfeffffff;
  param_1[0x3fd] = (long)"mStampPatternStarS16";
  param_1[0x3fe] = 0;
  param_1[0x3ff] = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  param_1[0x3fc] = (long)(puVar1 + 0x10);
  param_1[0x401] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3fc);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x3fc] + 0xf0))(param_1 + 0x3fc);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x400) >> 7 & 1) == 0) {
    param_1[0x401] = 0;
    *(undefined4 *)(param_1 + 0x401) = 0;
  }
  param_1[0x404] = 0;
  *(uint *)(param_1 + 0x400) = *(uint *)(param_1 + 0x400) & 0xfeffffff;
  param_1[0x403] = (long)"mStampPatternStarS17";
  param_1[0x405] = 0;
  *(undefined4 *)(param_1 + 0x406) = 0;
  param_1[0x402] = (long)(puVar1 + 0x10);
  param_1[0x407] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x402);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x402] + 0xf0))(param_1 + 0x402);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x406) >> 7 & 1) == 0) {
    param_1[0x407] = 0;
    *(undefined4 *)(param_1 + 0x407) = 0;
  }
  *(uint *)(param_1 + 0x406) = *(uint *)(param_1 + 0x406) & 0xfeffffff;
  param_1[0x409] = (long)"mStampPatternStarS18";
  param_1[0x40a] = 0;
  param_1[0x40b] = 0;
  *(undefined4 *)(param_1 + 0x40c) = 0;
  param_1[0x408] = (long)(puVar1 + 0x10);
  param_1[0x40d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x408);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x408] + 0xf0))(param_1 + 0x408);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x40c) >> 7 & 1) == 0) {
    param_1[0x40d] = 0;
    *(undefined4 *)(param_1 + 0x40d) = 0;
  }
  param_1[0x410] = 0;
  *(uint *)(param_1 + 0x40c) = *(uint *)(param_1 + 0x40c) & 0xfeffffff;
  param_1[0x40f] = (long)"mStampPatternStarS19";
  param_1[0x411] = 0;
  *(undefined4 *)(param_1 + 0x412) = 0;
  param_1[0x40e] = (long)(puVar1 + 0x10);
  param_1[0x413] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x40e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x40e] + 0xf0))(param_1 + 0x40e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x412) >> 7 & 1) == 0) {
    param_1[0x413] = 0;
    *(undefined4 *)(param_1 + 0x413) = 0;
  }
  *(uint *)(param_1 + 0x412) = *(uint *)(param_1 + 0x412) & 0xfeffffff;
  param_1[0x415] = (long)"mStampPatternStarS20";
  param_1[0x416] = 0;
  param_1[0x417] = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  param_1[0x414] = (long)(puVar1 + 0x10);
  param_1[0x419] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x414);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x414] + 0xf0))(param_1 + 0x414);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x418) >> 7 & 1) == 0) {
    param_1[0x419] = 0;
    *(undefined4 *)(param_1 + 0x419) = 0;
  }
  param_1[0x41c] = 0;
  *(uint *)(param_1 + 0x418) = *(uint *)(param_1 + 0x418) & 0xfeffffff;
  param_1[0x41b] = (long)"mStampPatternStarS21";
  param_1[0x41d] = 0;
  *(undefined4 *)(param_1 + 0x41e) = 0;
  param_1[0x41a] = (long)(puVar1 + 0x10);
  param_1[0x41f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x41a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x41a] + 0xf0))(param_1 + 0x41a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x41e) >> 7 & 1) == 0) {
    param_1[0x41f] = 0;
    *(undefined4 *)(param_1 + 0x41f) = 0;
  }
  *(uint *)(param_1 + 0x41e) = *(uint *)(param_1 + 0x41e) & 0xfeffffff;
  param_1[0x421] = (long)"mStampPatternStarS22";
  param_1[0x422] = 0;
  param_1[0x423] = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
  param_1[0x420] = (long)(puVar1 + 0x10);
  param_1[0x425] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x420);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x420] + 0xf0))(param_1 + 0x420);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x424) >> 7 & 1) == 0) {
    param_1[0x425] = 0;
    *(undefined4 *)(param_1 + 0x425) = 0;
  }
  param_1[0x428] = 0;
  *(uint *)(param_1 + 0x424) = *(uint *)(param_1 + 0x424) & 0xfeffffff;
  param_1[0x427] = (long)"mStampPatternStarS23";
  param_1[0x429] = 0;
  *(undefined4 *)(param_1 + 0x42a) = 0;
  param_1[0x426] = (long)(puVar1 + 0x10);
  param_1[0x42b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x426);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x426] + 0xf0))(param_1 + 0x426);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x42a) >> 7 & 1) == 0) {
    param_1[0x42b] = 0;
    *(undefined4 *)(param_1 + 0x42b) = 0;
  }
  *(uint *)(param_1 + 0x42a) = *(uint *)(param_1 + 0x42a) & 0xfeffffff;
  param_1[0x42d] = (long)"mStampPatternStarS24";
  param_1[0x42e] = 0;
  param_1[0x42f] = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  param_1[0x42c] = (long)(puVar1 + 0x10);
  param_1[0x431] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x42c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x42c] + 0xf0))(param_1 + 0x42c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x430) >> 7 & 1) == 0) {
    param_1[0x431] = 0;
    *(undefined4 *)(param_1 + 0x431) = 0;
  }
  param_1[0x434] = 0;
  *(uint *)(param_1 + 0x430) = *(uint *)(param_1 + 0x430) & 0xfeffffff;
  param_1[0x433] = (long)"mStampPatternStarM00";
  param_1[0x435] = 0;
  *(undefined4 *)(param_1 + 0x436) = 0;
  param_1[0x432] = (long)(puVar1 + 0x10);
  param_1[0x437] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x432);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x432] + 0xf0))(param_1 + 0x432);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x436) >> 7 & 1) == 0) {
    param_1[0x437] = 0;
    *(undefined4 *)(param_1 + 0x437) = 0;
  }
  *(uint *)(param_1 + 0x436) = *(uint *)(param_1 + 0x436) & 0xfeffffff;
  param_1[0x439] = (long)"mStampPatternStarM01";
  param_1[0x43a] = 0;
  param_1[0x43b] = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  param_1[0x438] = (long)(puVar1 + 0x10);
  param_1[0x43d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x438);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x438] + 0xf0))(param_1 + 0x438);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x43c) >> 7 & 1) == 0) {
    param_1[0x43d] = 0;
    *(undefined4 *)(param_1 + 0x43d) = 0;
  }
  param_1[0x440] = 0;
  *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x43c) & 0xfeffffff;
  param_1[0x43f] = (long)"mStampPatternStarM02";
  param_1[0x441] = 0;
  *(undefined4 *)(param_1 + 0x442) = 0;
  param_1[0x43e] = (long)(puVar1 + 0x10);
  param_1[0x443] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x43e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x43e] + 0xf0))(param_1 + 0x43e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x442) >> 7 & 1) == 0) {
    param_1[0x443] = 0;
    *(undefined4 *)(param_1 + 0x443) = 0;
  }
  *(uint *)(param_1 + 0x442) = *(uint *)(param_1 + 0x442) & 0xfeffffff;
  param_1[0x445] = (long)"mStampPatternStarM03";
  param_1[0x446] = 0;
  param_1[0x447] = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  param_1[0x444] = (long)(puVar1 + 0x10);
  param_1[0x449] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x444);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x444] + 0xf0))(param_1 + 0x444);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x448) >> 7 & 1) == 0) {
    param_1[0x449] = 0;
    *(undefined4 *)(param_1 + 0x449) = 0;
  }
  param_1[0x44c] = 0;
  *(uint *)(param_1 + 0x448) = *(uint *)(param_1 + 0x448) & 0xfeffffff;
  param_1[1099] = (long)"mStampPatternStarM04";
  param_1[0x44d] = 0;
  *(undefined4 *)(param_1 + 0x44e) = 0;
  param_1[0x44a] = (long)(puVar1 + 0x10);
  param_1[0x44f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x44a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x44a] + 0xf0))(param_1 + 0x44a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x44e) >> 7 & 1) == 0) {
    param_1[0x44f] = 0;
    *(undefined4 *)(param_1 + 0x44f) = 0;
  }
  *(uint *)(param_1 + 0x44e) = *(uint *)(param_1 + 0x44e) & 0xfeffffff;
  param_1[0x451] = (long)"mStampPatternStarM05";
  param_1[0x452] = 0;
  param_1[0x453] = 0;
  *(undefined4 *)(param_1 + 0x454) = 0;
  param_1[0x450] = (long)(puVar1 + 0x10);
  param_1[0x455] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x450);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x450] + 0xf0))(param_1 + 0x450);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x454) >> 7 & 1) == 0) {
    param_1[0x455] = 0;
    *(undefined4 *)(param_1 + 0x455) = 0;
  }
  param_1[0x458] = 0;
  *(uint *)(param_1 + 0x454) = *(uint *)(param_1 + 0x454) & 0xfeffffff;
  param_1[0x457] = (long)"mStampPatternStarM06";
  param_1[0x459] = 0;
  *(undefined4 *)(param_1 + 0x45a) = 0;
  param_1[0x456] = (long)(puVar1 + 0x10);
  param_1[0x45b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x456);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x456] + 0xf0))(param_1 + 0x456);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x45a) >> 7 & 1) == 0) {
    param_1[0x45b] = 0;
    *(undefined4 *)(param_1 + 0x45b) = 0;
  }
  *(uint *)(param_1 + 0x45a) = *(uint *)(param_1 + 0x45a) & 0xfeffffff;
  param_1[0x45d] = (long)"mStampPatternStarM07";
  param_1[0x45e] = 0;
  param_1[0x45f] = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  param_1[0x45c] = (long)(puVar1 + 0x10);
  param_1[0x461] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x45c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x45c] + 0xf0))(param_1 + 0x45c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x460) >> 7 & 1) == 0) {
    param_1[0x461] = 0;
    *(undefined4 *)(param_1 + 0x461) = 0;
  }
  param_1[0x464] = 0;
  *(uint *)(param_1 + 0x460) = *(uint *)(param_1 + 0x460) & 0xfeffffff;
  param_1[0x463] = (long)"mStampPatternStarM08";
  param_1[0x465] = 0;
  *(undefined4 *)(param_1 + 0x466) = 0;
  param_1[0x462] = (long)(puVar1 + 0x10);
  param_1[0x467] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x462);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x462] + 0xf0))(param_1 + 0x462);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x466) >> 7 & 1) == 0) {
    param_1[0x467] = 0;
    *(undefined4 *)(param_1 + 0x467) = 0;
  }
  *(uint *)(param_1 + 0x466) = *(uint *)(param_1 + 0x466) & 0xfeffffff;
  param_1[0x469] = (long)"mStampPatternStarM09";
  param_1[0x46a] = 0;
  param_1[0x46b] = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  param_1[0x468] = (long)(puVar1 + 0x10);
  param_1[0x46d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x468);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x468] + 0xf0))(param_1 + 0x468);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x46c) >> 7 & 1) == 0) {
    param_1[0x46d] = 0;
    *(undefined4 *)(param_1 + 0x46d) = 0;
  }
  param_1[0x470] = 0;
  *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 0x46c) & 0xfeffffff;
  param_1[0x46f] = (long)"mStampPatternStarM10";
  param_1[0x471] = 0;
  *(undefined4 *)(param_1 + 0x472) = 0;
  param_1[0x46e] = (long)(puVar1 + 0x10);
  param_1[0x473] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x46e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x46e] + 0xf0))(param_1 + 0x46e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x472) >> 7 & 1) == 0) {
    param_1[0x473] = 0;
    *(undefined4 *)(param_1 + 0x473) = 0;
  }
  *(uint *)(param_1 + 0x472) = *(uint *)(param_1 + 0x472) & 0xfeffffff;
  param_1[0x475] = (long)"mStampPatternStarM11";
  param_1[0x476] = 0;
  param_1[0x477] = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  param_1[0x474] = (long)(puVar1 + 0x10);
  param_1[0x479] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x474);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x474] + 0xf0))(param_1 + 0x474);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x478) >> 7 & 1) == 0) {
    param_1[0x479] = 0;
    *(undefined4 *)(param_1 + 0x479) = 0;
  }
  param_1[0x47c] = 0;
  *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x478) & 0xfeffffff;
  param_1[0x47b] = (long)"mStampPatternStarM12";
  param_1[0x47d] = 0;
  *(undefined4 *)(param_1 + 0x47e) = 0;
  param_1[0x47a] = (long)(puVar1 + 0x10);
  param_1[0x47f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x47a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x47a] + 0xf0))(param_1 + 0x47a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x47e) >> 7 & 1) == 0) {
    param_1[0x47f] = 0;
    *(undefined4 *)(param_1 + 0x47f) = 0;
  }
  *(uint *)(param_1 + 0x47e) = *(uint *)(param_1 + 0x47e) & 0xfeffffff;
  param_1[0x481] = (long)"mStampPatternStarM13";
  param_1[0x482] = 0;
  param_1[0x483] = 0;
  *(undefined4 *)(param_1 + 0x484) = 0;
  param_1[0x480] = (long)(puVar1 + 0x10);
  param_1[0x485] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x480);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x480] + 0xf0))(param_1 + 0x480);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x484) >> 7 & 1) == 0) {
    param_1[0x485] = 0;
    *(undefined4 *)(param_1 + 0x485) = 0;
  }
  param_1[0x488] = 0;
  *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) & 0xfeffffff;
  param_1[0x487] = (long)"mStampPatternStarM14";
  param_1[0x489] = 0;
  *(undefined4 *)(param_1 + 0x48a) = 0;
  param_1[0x486] = (long)(puVar1 + 0x10);
  param_1[0x48b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x486);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x486] + 0xf0))(param_1 + 0x486);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x48a) >> 7 & 1) == 0) {
    param_1[0x48b] = 0;
    *(undefined4 *)(param_1 + 0x48b) = 0;
  }
  *(uint *)(param_1 + 0x48a) = *(uint *)(param_1 + 0x48a) & 0xfeffffff;
  param_1[0x48d] = (long)"mStampPatternStarM15";
  param_1[0x48e] = 0;
  param_1[0x48f] = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  param_1[0x48c] = (long)(puVar1 + 0x10);
  param_1[0x491] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x48c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x48c] + 0xf0))(param_1 + 0x48c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x490) >> 7 & 1) == 0) {
    param_1[0x491] = 0;
    *(undefined4 *)(param_1 + 0x491) = 0;
  }
  param_1[0x494] = 0;
  *(uint *)(param_1 + 0x490) = *(uint *)(param_1 + 0x490) & 0xfeffffff;
  param_1[0x493] = (long)"mStampPatternStarM16";
  param_1[0x495] = 0;
  *(undefined4 *)(param_1 + 0x496) = 0;
  param_1[0x492] = (long)(puVar1 + 0x10);
  param_1[0x497] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x492);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x492] + 0xf0))(param_1 + 0x492);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x496) >> 7 & 1) == 0) {
    param_1[0x497] = 0;
    *(undefined4 *)(param_1 + 0x497) = 0;
  }
  *(uint *)(param_1 + 0x496) = *(uint *)(param_1 + 0x496) & 0xfeffffff;
  param_1[0x499] = (long)"mStampPatternStarM17";
  param_1[0x49a] = 0;
  param_1[0x49b] = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  param_1[0x498] = (long)(puVar1 + 0x10);
  param_1[0x49d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x498);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x498] + 0xf0))(param_1 + 0x498);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x49c) >> 7 & 1) == 0) {
    param_1[0x49d] = 0;
    *(undefined4 *)(param_1 + 0x49d) = 0;
  }
  param_1[0x4a0] = 0;
  *(uint *)(param_1 + 0x49c) = *(uint *)(param_1 + 0x49c) & 0xfeffffff;
  param_1[0x49f] = (long)"mStampPatternStarM18";
  param_1[0x4a1] = 0;
  *(undefined4 *)(param_1 + 0x4a2) = 0;
  param_1[0x49e] = (long)(puVar1 + 0x10);
  param_1[0x4a3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x49e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x49e] + 0xf0))(param_1 + 0x49e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4a2) >> 7 & 1) == 0) {
    param_1[0x4a3] = 0;
    *(undefined4 *)(param_1 + 0x4a3) = 0;
  }
  *(uint *)(param_1 + 0x4a2) = *(uint *)(param_1 + 0x4a2) & 0xfeffffff;
  param_1[0x4a5] = (long)"mStampPatternStarM19";
  param_1[0x4a6] = 0;
  param_1[0x4a7] = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  param_1[0x4a4] = (long)(puVar1 + 0x10);
  param_1[0x4a9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4a4);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4a4] + 0xf0))(param_1 + 0x4a4);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4a8) >> 7 & 1) == 0) {
    param_1[0x4a9] = 0;
    *(undefined4 *)(param_1 + 0x4a9) = 0;
  }
  param_1[0x4ac] = 0;
  *(uint *)(param_1 + 0x4a8) = *(uint *)(param_1 + 0x4a8) & 0xfeffffff;
  param_1[0x4ab] = (long)"mStampPatternStarM20";
  param_1[0x4ad] = 0;
  *(undefined4 *)(param_1 + 0x4ae) = 0;
  param_1[0x4aa] = (long)(puVar1 + 0x10);
  param_1[0x4af] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4aa);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4aa] + 0xf0))(param_1 + 0x4aa);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4ae) >> 7 & 1) == 0) {
    param_1[0x4af] = 0;
    *(undefined4 *)(param_1 + 0x4af) = 0;
  }
  *(uint *)(param_1 + 0x4ae) = *(uint *)(param_1 + 0x4ae) & 0xfeffffff;
  param_1[0x4b1] = (long)"mStampPatternStarM21";
  param_1[0x4b2] = 0;
  param_1[0x4b3] = 0;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  param_1[0x4b0] = (long)(puVar1 + 0x10);
  param_1[0x4b5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4b0);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4b0] + 0xf0))(param_1 + 0x4b0);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4b4) >> 7 & 1) == 0) {
    param_1[0x4b5] = 0;
    *(undefined4 *)(param_1 + 0x4b5) = 0;
  }
  param_1[0x4b8] = 0;
  *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) & 0xfeffffff;
  param_1[0x4b7] = (long)"mStampPatternStarM22";
  param_1[0x4b9] = 0;
  *(undefined4 *)(param_1 + 0x4ba) = 0;
  param_1[0x4b6] = (long)(puVar1 + 0x10);
  param_1[0x4bb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4b6);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4b6] + 0xf0))(param_1 + 0x4b6);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4ba) >> 7 & 1) == 0) {
    param_1[0x4bb] = 0;
    *(undefined4 *)(param_1 + 0x4bb) = 0;
  }
  *(uint *)(param_1 + 0x4ba) = *(uint *)(param_1 + 0x4ba) & 0xfeffffff;
  param_1[0x4bd] = (long)"mStampPatternStarM23";
  param_1[0x4be] = 0;
  param_1[0x4bf] = 0;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  param_1[0x4bc] = (long)(puVar1 + 0x10);
  param_1[0x4c1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4bc);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4bc] + 0xf0))(param_1 + 0x4bc);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4c0) >> 7 & 1) == 0) {
    param_1[0x4c1] = 0;
    *(undefined4 *)(param_1 + 0x4c1) = 0;
  }
  param_1[0x4c4] = 0;
  *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) & 0xfeffffff;
  param_1[0x4c3] = (long)"mStampPatternStarM24";
  param_1[0x4c5] = 0;
  *(undefined4 *)(param_1 + 0x4c6) = 0;
  param_1[0x4c2] = (long)(puVar1 + 0x10);
  param_1[0x4c7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4c2);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4c2] + 0xf0))(param_1 + 0x4c2);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4c6) >> 7 & 1) == 0) {
    param_1[0x4c7] = 0;
    *(undefined4 *)(param_1 + 0x4c7) = 0;
  }
  *(uint *)(param_1 + 0x4c6) = *(uint *)(param_1 + 0x4c6) & 0xfeffffff;
  param_1[0x4c9] = (long)"mStampPatternStarL00";
  param_1[0x4ca] = 0;
  param_1[0x4cb] = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  param_1[0x4c8] = (long)(puVar1 + 0x10);
  param_1[0x4cd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4c8);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4c8] + 0xf0))(param_1 + 0x4c8);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4cc) >> 7 & 1) == 0) {
    param_1[0x4cd] = 0;
    *(undefined4 *)(param_1 + 0x4cd) = 0;
  }
  param_1[0x4d0] = 0;
  *(uint *)(param_1 + 0x4cc) = *(uint *)(param_1 + 0x4cc) & 0xfeffffff;
  param_1[0x4cf] = (long)"mStampPatternStarL01";
  param_1[0x4d1] = 0;
  *(undefined4 *)(param_1 + 0x4d2) = 0;
  param_1[0x4ce] = (long)(puVar1 + 0x10);
  param_1[0x4d3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4ce);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4ce] + 0xf0))(param_1 + 0x4ce);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4d2) >> 7 & 1) == 0) {
    param_1[0x4d3] = 0;
    *(undefined4 *)(param_1 + 0x4d3) = 0;
  }
  *(uint *)(param_1 + 0x4d2) = *(uint *)(param_1 + 0x4d2) & 0xfeffffff;
  param_1[0x4d5] = (long)"mStampPatternStarL02";
  param_1[0x4d6] = 0;
  param_1[0x4d7] = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  param_1[0x4d4] = (long)(puVar1 + 0x10);
  param_1[0x4d9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4d4);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4d4] + 0xf0))(param_1 + 0x4d4);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4d8) >> 7 & 1) == 0) {
    param_1[0x4d9] = 0;
    *(undefined4 *)(param_1 + 0x4d9) = 0;
  }
  param_1[0x4dc] = 0;
  *(uint *)(param_1 + 0x4d8) = *(uint *)(param_1 + 0x4d8) & 0xfeffffff;
  param_1[0x4db] = (long)"mStampPatternStarL03";
  param_1[0x4dd] = 0;
  *(undefined4 *)(param_1 + 0x4de) = 0;
  param_1[0x4da] = (long)(puVar1 + 0x10);
  param_1[0x4df] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4da);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4da] + 0xf0))(param_1 + 0x4da);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4de) >> 7 & 1) == 0) {
    param_1[0x4df] = 0;
    *(undefined4 *)(param_1 + 0x4df) = 0;
  }
  *(uint *)(param_1 + 0x4de) = *(uint *)(param_1 + 0x4de) & 0xfeffffff;
  param_1[0x4e1] = (long)"mStampPatternStarL04";
  param_1[0x4e2] = 0;
  param_1[0x4e3] = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  param_1[0x4e0] = (long)(puVar1 + 0x10);
  param_1[0x4e5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e0);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4e0] + 0xf0))(param_1 + 0x4e0);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4e4) >> 7 & 1) == 0) {
    param_1[0x4e5] = 0;
    *(undefined4 *)(param_1 + 0x4e5) = 0;
  }
  param_1[0x4e8] = 0;
  *(uint *)(param_1 + 0x4e4) = *(uint *)(param_1 + 0x4e4) & 0xfeffffff;
  param_1[0x4e7] = (long)"mStampPatternStarL05";
  param_1[0x4e9] = 0;
  *(undefined4 *)(param_1 + 0x4ea) = 0;
  param_1[0x4e6] = (long)(puVar1 + 0x10);
  param_1[0x4eb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4e6);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4e6] + 0xf0))(param_1 + 0x4e6);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4ea) >> 7 & 1) == 0) {
    param_1[0x4eb] = 0;
    *(undefined4 *)(param_1 + 0x4eb) = 0;
  }
  *(uint *)(param_1 + 0x4ea) = *(uint *)(param_1 + 0x4ea) & 0xfeffffff;
  param_1[0x4ed] = (long)"mStampPatternStarL06";
  param_1[0x4ee] = 0;
  param_1[0x4ef] = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  param_1[0x4ec] = (long)(puVar1 + 0x10);
  param_1[0x4f1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4ec);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4ec] + 0xf0))(param_1 + 0x4ec);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4f0) >> 7 & 1) == 0) {
    param_1[0x4f1] = 0;
    *(undefined4 *)(param_1 + 0x4f1) = 0;
  }
  param_1[0x4f4] = 0;
  *(uint *)(param_1 + 0x4f0) = *(uint *)(param_1 + 0x4f0) & 0xfeffffff;
  param_1[0x4f3] = (long)"mStampPatternStarL07";
  param_1[0x4f5] = 0;
  *(undefined4 *)(param_1 + 0x4f6) = 0;
  param_1[0x4f2] = (long)(puVar1 + 0x10);
  param_1[0x4f7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4f2);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4f2] + 0xf0))(param_1 + 0x4f2);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4f6) >> 7 & 1) == 0) {
    param_1[0x4f7] = 0;
    *(undefined4 *)(param_1 + 0x4f7) = 0;
  }
  *(uint *)(param_1 + 0x4f6) = *(uint *)(param_1 + 0x4f6) & 0xfeffffff;
  param_1[0x4f9] = (long)"mStampPatternStarL08";
  param_1[0x4fa] = 0;
  param_1[0x4fb] = 0;
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  param_1[0x4f8] = (long)(puVar1 + 0x10);
  param_1[0x4fd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4f8);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4f8] + 0xf0))(param_1 + 0x4f8);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x4fc) >> 7 & 1) == 0) {
    param_1[0x4fd] = 0;
    *(undefined4 *)(param_1 + 0x4fd) = 0;
  }
  param_1[0x500] = 0;
  *(uint *)(param_1 + 0x4fc) = *(uint *)(param_1 + 0x4fc) & 0xfeffffff;
  param_1[0x4ff] = (long)"mStampPatternStarL09";
  param_1[0x501] = 0;
  *(undefined4 *)(param_1 + 0x502) = 0;
  param_1[0x4fe] = (long)(puVar1 + 0x10);
  param_1[0x503] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4fe);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x4fe] + 0xf0))(param_1 + 0x4fe);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x502) >> 7 & 1) == 0) {
    param_1[0x503] = 0;
    *(undefined4 *)(param_1 + 0x503) = 0;
  }
  *(uint *)(param_1 + 0x502) = *(uint *)(param_1 + 0x502) & 0xfeffffff;
  param_1[0x505] = (long)"mStampPatternStarL10";
  param_1[0x506] = 0;
  param_1[0x507] = 0;
  *(undefined4 *)(param_1 + 0x508) = 0;
  param_1[0x504] = (long)(puVar1 + 0x10);
  param_1[0x509] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x504);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x504] + 0xf0))(param_1 + 0x504);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x508) >> 7 & 1) == 0) {
    param_1[0x509] = 0;
    *(undefined4 *)(param_1 + 0x509) = 0;
  }
  param_1[0x50c] = 0;
  *(uint *)(param_1 + 0x508) = *(uint *)(param_1 + 0x508) & 0xfeffffff;
  param_1[0x50b] = (long)"mStampPatternStarL11";
  param_1[0x50d] = 0;
  *(undefined4 *)(param_1 + 0x50e) = 0;
  param_1[0x50a] = (long)(puVar1 + 0x10);
  param_1[0x50f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x50a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x50a] + 0xf0))(param_1 + 0x50a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x50e) >> 7 & 1) == 0) {
    param_1[0x50f] = 0;
    *(undefined4 *)(param_1 + 0x50f) = 0;
  }
  *(uint *)(param_1 + 0x50e) = *(uint *)(param_1 + 0x50e) & 0xfeffffff;
  param_1[0x511] = (long)"mStampPatternStarL12";
  param_1[0x512] = 0;
  param_1[0x513] = 0;
  *(undefined4 *)(param_1 + 0x514) = 0;
  param_1[0x510] = (long)(puVar1 + 0x10);
  param_1[0x515] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x510);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x510] + 0xf0))(param_1 + 0x510);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x514) >> 7 & 1) == 0) {
    param_1[0x515] = 0;
    *(undefined4 *)(param_1 + 0x515) = 0;
  }
  param_1[0x518] = 0;
  *(uint *)(param_1 + 0x514) = *(uint *)(param_1 + 0x514) & 0xfeffffff;
  param_1[0x517] = (long)"mStampPatternStarL13";
  param_1[0x519] = 0;
  *(undefined4 *)(param_1 + 0x51a) = 0;
  param_1[0x516] = (long)(puVar1 + 0x10);
  param_1[0x51b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x516);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x516] + 0xf0))(param_1 + 0x516);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x51a) >> 7 & 1) == 0) {
    param_1[0x51b] = 0;
    *(undefined4 *)(param_1 + 0x51b) = 0;
  }
  *(uint *)(param_1 + 0x51a) = *(uint *)(param_1 + 0x51a) & 0xfeffffff;
  param_1[0x51d] = (long)"mStampPatternStarL14";
  param_1[0x51e] = 0;
  param_1[0x51f] = 0;
  *(undefined4 *)(param_1 + 0x520) = 0;
  param_1[0x51c] = (long)(puVar1 + 0x10);
  param_1[0x521] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x51c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x51c] + 0xf0))(param_1 + 0x51c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x520) >> 7 & 1) == 0) {
    param_1[0x521] = 0;
    *(undefined4 *)(param_1 + 0x521) = 0;
  }
  param_1[0x524] = 0;
  *(uint *)(param_1 + 0x520) = *(uint *)(param_1 + 0x520) & 0xfeffffff;
  param_1[0x523] = (long)"mStampPatternStarL15";
  param_1[0x525] = 0;
  *(undefined4 *)(param_1 + 0x526) = 0;
  param_1[0x522] = (long)(puVar1 + 0x10);
  param_1[0x527] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x522);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x522] + 0xf0))(param_1 + 0x522);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x526) >> 7 & 1) == 0) {
    param_1[0x527] = 0;
    *(undefined4 *)(param_1 + 0x527) = 0;
  }
  *(uint *)(param_1 + 0x526) = *(uint *)(param_1 + 0x526) & 0xfeffffff;
  param_1[0x529] = (long)"mStampPatternStarL16";
  param_1[0x52a] = 0;
  param_1[0x52b] = 0;
  *(undefined4 *)(param_1 + 0x52c) = 0;
  param_1[0x528] = (long)(puVar1 + 0x10);
  param_1[0x52d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x528);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x528] + 0xf0))(param_1 + 0x528);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x52c) >> 7 & 1) == 0) {
    param_1[0x52d] = 0;
    *(undefined4 *)(param_1 + 0x52d) = 0;
  }
  param_1[0x530] = 0;
  *(uint *)(param_1 + 0x52c) = *(uint *)(param_1 + 0x52c) & 0xfeffffff;
  param_1[0x52f] = (long)"mStampPatternStarL17";
  param_1[0x531] = 0;
  *(undefined4 *)(param_1 + 0x532) = 0;
  param_1[0x52e] = (long)(puVar1 + 0x10);
  param_1[0x533] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x52e);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x52e] + 0xf0))(param_1 + 0x52e);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x532) >> 7 & 1) == 0) {
    param_1[0x533] = 0;
    *(undefined4 *)(param_1 + 0x533) = 0;
  }
  *(uint *)(param_1 + 0x532) = *(uint *)(param_1 + 0x532) & 0xfeffffff;
  param_1[0x535] = (long)"mStampPatternStarL18";
  param_1[0x536] = 0;
  param_1[0x537] = 0;
  *(undefined4 *)(param_1 + 0x538) = 0;
  param_1[0x534] = (long)(puVar1 + 0x10);
  param_1[0x539] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x534);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x534] + 0xf0))(param_1 + 0x534);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x538) >> 7 & 1) == 0) {
    param_1[0x539] = 0;
    *(undefined4 *)(param_1 + 0x539) = 0;
  }
  param_1[0x53c] = 0;
  *(uint *)(param_1 + 0x538) = *(uint *)(param_1 + 0x538) & 0xfeffffff;
  param_1[0x53b] = (long)"mStampPatternStarL19";
  param_1[0x53d] = 0;
  *(undefined4 *)(param_1 + 0x53e) = 0;
  param_1[0x53a] = (long)(puVar1 + 0x10);
  param_1[0x53f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x53a);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x53a] + 0xf0))(param_1 + 0x53a);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x53e) >> 7 & 1) == 0) {
    param_1[0x53f] = 0;
    *(undefined4 *)(param_1 + 0x53f) = 0;
  }
  *(uint *)(param_1 + 0x53e) = *(uint *)(param_1 + 0x53e) & 0xfeffffff;
  param_1[0x541] = (long)"mStampPatternStarL20";
  param_1[0x542] = 0;
  param_1[0x543] = 0;
  *(undefined4 *)(param_1 + 0x544) = 0;
  param_1[0x540] = (long)(puVar1 + 0x10);
  param_1[0x545] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x540);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x540] + 0xf0))(param_1 + 0x540);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x544) >> 7 & 1) == 0) {
    param_1[0x545] = 0;
    *(undefined4 *)(param_1 + 0x545) = 0;
  }
  param_1[0x548] = 0;
  *(uint *)(param_1 + 0x544) = *(uint *)(param_1 + 0x544) & 0xfeffffff;
  param_1[0x547] = (long)"mStampPatternStarL21";
  param_1[0x549] = 0;
  *(undefined4 *)(param_1 + 0x54a) = 0;
  param_1[0x546] = (long)(puVar1 + 0x10);
  param_1[0x54b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x546);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x546] + 0xf0))(param_1 + 0x546);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x54a) >> 7 & 1) == 0) {
    param_1[0x54b] = 0;
    *(undefined4 *)(param_1 + 0x54b) = 0;
  }
  *(uint *)(param_1 + 0x54a) = *(uint *)(param_1 + 0x54a) & 0xfeffffff;
  param_1[0x54d] = (long)"mStampPatternStarL22";
  param_1[0x54e] = 0;
  param_1[0x54f] = 0;
  *(undefined4 *)(param_1 + 0x550) = 0;
  param_1[0x54c] = (long)(puVar1 + 0x10);
  param_1[0x551] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x54c);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x54c] + 0xf0))(param_1 + 0x54c);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x550) >> 7 & 1) == 0) {
    param_1[0x551] = 0;
    *(undefined4 *)(param_1 + 0x551) = 0;
  }
  param_1[0x554] = 0;
  *(uint *)(param_1 + 0x550) = *(uint *)(param_1 + 0x550) & 0xfeffffff;
  param_1[0x553] = (long)"mStampPatternStarL23";
  param_1[0x555] = 0;
  *(undefined4 *)(param_1 + 0x556) = 0;
  param_1[0x552] = (long)(puVar1 + 0x10);
  param_1[0x557] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x552);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x552] + 0xf0))(param_1 + 0x552);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x556) >> 7 & 1) == 0) {
    param_1[0x557] = 0;
    *(undefined4 *)(param_1 + 0x557) = 0;
  }
  *(uint *)(param_1 + 0x556) = *(uint *)(param_1 + 0x556) & 0xfeffffff;
  param_1[0x559] = (long)"mStampPatternStarL24";
  param_1[0x55a] = 0;
  param_1[0x55b] = 0;
  *(undefined4 *)(param_1 + 0x55c) = 0;
  param_1[0x558] = (long)(puVar1 + 0x10);
  param_1[0x55d] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x558);
  puVar2 = (undefined4 *)(**(code **)(param_1[0x558] + 0xf0))(param_1 + 0x558);
  *puVar2 = 0;
  if ((*(uint *)(param_1 + 0x55c) >> 7 & 1) == 0) {
    param_1[0x55d] = 0;
    *(undefined4 *)(param_1 + 0x55d) = 0;
  }
  param_1[0x560] = param_2;
  *(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) & 0xfeffffff;
  *(undefined4 *)(param_1 + 0x55e) = 0xffffffff;
  param_1[0x561] = param_3;
  param_1[0x562] = param_4;
  local_88 = PTR_DAT_04bb2020;
  param_1[0x55f] = (long)&PTR_LAB_04af14c8;
  param_1[0x564] = (long)"mUsingOffsetSamples";
  local_88 = local_88 + 0x10;
  param_1[0x565] = 0;
  puStack_70 = &DAT_040dbabe;
  param_1[0x566] = 0;
  *(undefined4 *)(param_1 + 0x567) = 0;
  local_80 = "mUsingOffsetSamples";
  pcStack_60 = "Min=0,Max=1";
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x568] = 0;
  local_58 = 0;
  param_1[0x563] = (long)puVar1;
  local_78 = local_88;
  local_68 = local_88;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x563);
  param_1[0x56b] = 0;
  param_1[0x56a] = 0;
  param_1[0x569] = 0;
  param_1[0x56c] = (long)(param_1 + 0x56e);
  param_1[0x5a6] = 0;
  param_1[0x56e] = (long)(param_1 + 0x575);
  param_1[0x56d] = (long)(param_1 + 0x56e);
  param_1[0x575] = (long)(param_1 + 0x57c);
  param_1[0x57c] = (long)(param_1 + 0x583);
  param_1[0x583] = (long)(param_1 + 0x58a);
  param_1[0x58a] = (long)(param_1 + 0x591);
  param_1[0x591] = (long)(param_1 + 0x598);
  param_1[0x598] = (long)(param_1 + 0x59f);
  param_1[0x59f] = (long)(param_1 + 0x5a6);
  if (param_1 + 0x5ad != (long *)0x0) {
    param_1[0x56b] = (long)(param_1 + 0x5ad);
    *(undefined4 *)((long)param_1 + 0x2b54) = 9;
  }
  param_1[0x563] = (long)&PTR_LAB_04af1518;
  iVar6 = 9;
  puVar1 = PTR_DAT_04bb3050 + 0x10;
  do {
    if ((int)param_1[0x56a] < *(int *)((long)param_1 + 0x2b54)) {
      plVar5 = (long *)param_1[0x56c];
      if (plVar5 != (long *)0x0) {
        param_1[0x56c] = *plVar5;
      }
      *plVar5 = (long)puVar1;
      (**(code **)(local_88 + 0x18))(&local_88);
      plVar5[3] = 0;
      plVar5[1] = (long)local_80;
      plVar5[2] = 0;
      plVar5[6] = 0;
      *(undefined8 *)((long)plVar5 + 0x24) = 0;
      if ((local_58 >> 7 & 1) == 0) {
        plVar5[6] = 0;
      }
      *plVar5 = (long)&DAT_04af1698;
      *(uint *)(plVar5 + 4) = local_58 & 0xfeffffff;
      if ((int)param_1[0x56a] < *(int *)((long)param_1 + 0x2b54)) {
        *(long **)(param_1[0x56b] + (long)(int)param_1[0x56a] * 8) = plVar5;
        *(int *)(param_1 + 0x56a) = (int)param_1[0x56a] + 1;
      }
    }
    else {
      plVar5 = (long *)0x0;
    }
    (**(code **)(*plVar5 + 0x38))(plVar5,param_1 + 0x563);
    iVar6 = iVar6 + -1;
    *(uint *)(plVar5 + 4) = *(uint *)(plVar5 + 4) & 0xfffffffc;
  } while (iVar6 != 0);
  *(undefined2 *)(param_1 + 0x5b6) = 0;
  return;
}

