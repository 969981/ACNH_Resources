
void FUN_014290f0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 local_184;
  undefined **local_180;
  undefined8 *puStack_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined1 local_160;
  undefined1 local_ed;
  undefined1 local_6d;
  
  puVar3 = PTR_DAT_04bb2d88;
  local_160 = 0;
  local_184 = 0;
  puVar7 = *(undefined8 **)(param_1 + 0xa0);
  local_164 = 0x30306d75;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2d88 + 0x10);
  local_170 = 0x80;
  local_16c = s_FishMuseum00_04081448._0_8_;
  local_ed = 0;
  local_180 = ppuVar1;
  puStack_178 = &local_16c;
  if (puVar7 != &local_16c) {
    lVar5 = 0;
    do {
      if (*(char *)((long)&local_16c + lVar5) == '\0') goto LAB_014291c4;
      if (*(char *)((long)&local_16c + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_014291c4;
      }
      if (*(char *)((long)&local_16c + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_014291c4;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_014291c4:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0xa8) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0xa8) + -1;
    }
    memcpy(puVar7,&local_16c,(long)iVar2);
    *(undefined1 *)((long)puVar7 + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0x8a0) = local_184;
  FUN_013dae70(param_1 + 8,&local_184);
  puVar7 = *(undefined8 **)(param_1 + 0x940);
  local_170 = 0x80;
  local_160 = 0;
  local_164 = 0x31306d75;
  local_184 = 1;
  local_16c._0_1_ = s_FishMuseum01_040918f8[0];
  local_16c._1_1_ = s_FishMuseum01_040918f8[1];
  local_16c._2_1_ = s_FishMuseum01_040918f8[2];
  local_16c._3_1_ = s_FishMuseum01_040918f8[3];
  local_16c._4_1_ = s_FishMuseum01_040918f8[4];
  local_16c._5_1_ = s_FishMuseum01_040918f8[5];
  local_16c._6_1_ = s_FishMuseum01_040918f8[6];
  local_16c._7_1_ = s_FishMuseum01_040918f8[7];
  local_ed = 0;
  local_180 = ppuVar1;
  puStack_178 = &local_16c;
  if (puVar7 != &local_16c) {
    lVar5 = 0;
    do {
      if (*(char *)((long)&local_16c + lVar5) == '\0') goto LAB_0142928c;
      if (*(char *)((long)&local_16c + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0142928c;
      }
      if (*(char *)((long)&local_16c + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0142928c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0142928c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x948) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x948) + -1;
    }
    memcpy(puVar7,&local_16c,(long)iVar2);
    *(undefined1 *)((long)puVar7 + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0x1140) = local_184;
  FUN_013dae70(param_1 + 0x8a8,&local_184);
  puVar7 = *(undefined8 **)(param_1 + 0x11e0);
  local_164 = 0x32306d75;
  local_160 = 0;
  ppuVar1 = (undefined **)(puVar3 + 0x10);
  local_170 = 0x80;
  local_184 = 2;
  local_16c._0_1_ = s_FishMuseum02_040e9778[0];
  local_16c._1_1_ = s_FishMuseum02_040e9778[1];
  local_16c._2_1_ = s_FishMuseum02_040e9778[2];
  local_16c._3_1_ = s_FishMuseum02_040e9778[3];
  local_16c._4_1_ = s_FishMuseum02_040e9778[4];
  local_16c._5_1_ = s_FishMuseum02_040e9778[5];
  local_16c._6_1_ = s_FishMuseum02_040e9778[6];
  local_16c._7_1_ = s_FishMuseum02_040e9778[7];
  local_ed = 0;
  local_180 = ppuVar1;
  puStack_178 = &local_16c;
  if (puVar7 != &local_16c) {
    lVar5 = 0;
    do {
      if (*(char *)((long)&local_16c + lVar5) == '\0') goto LAB_01429360;
      if (*(char *)((long)&local_16c + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01429360;
      }
      if (*(char *)((long)&local_16c + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01429360;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01429360:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x11e8) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x11e8) + -1;
    }
    memcpy(puVar7,&local_16c,(long)iVar2);
    *(undefined1 *)((long)puVar7 + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0x19e0) = local_184;
  FUN_013dae70(param_1 + 0x1148,&local_184);
  puVar7 = *(undefined8 **)(param_1 + 0x1a80);
  local_164 = 0x30307463;
  local_170 = 0x80;
  local_160 = 0;
  local_184 = 3;
  local_16c._0_1_ = s_FishInsect00_040c9ec0[0];
  local_16c._1_1_ = s_FishInsect00_040c9ec0[1];
  local_16c._2_1_ = s_FishInsect00_040c9ec0[2];
  local_16c._3_1_ = s_FishInsect00_040c9ec0[3];
  local_16c._4_1_ = s_FishInsect00_040c9ec0[4];
  local_16c._5_1_ = s_FishInsect00_040c9ec0[5];
  local_16c._6_1_ = s_FishInsect00_040c9ec0[6];
  local_16c._7_1_ = s_FishInsect00_040c9ec0[7];
  local_ed = 0;
  local_180 = ppuVar1;
  puStack_178 = &local_16c;
  if (puVar7 != &local_16c) {
    lVar5 = 0;
    do {
      if (*(char *)((long)&local_16c + lVar5) == '\0') goto LAB_0142942c;
      if (*(char *)((long)&local_16c + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0142942c;
      }
      if (*(char *)((long)&local_16c + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0142942c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0142942c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x1a88) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x1a88) + -1;
    }
    memcpy(puVar7,&local_16c,(long)iVar2);
    *(undefined1 *)((long)puVar7 + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0x2280) = local_184;
  FUN_013dae70(param_1 + 0x19e8,&local_184);
  puVar7 = *(undefined8 **)(param_1 + 0x2320);
  local_170 = 0x80;
  local_164 = 0x31307463;
  local_180 = (undefined **)(puVar3 + 0x10);
  local_160 = 0;
  local_184 = 4;
  local_16c._0_1_ = s_FishInsect01_040a0b30[0];
  local_16c._1_1_ = s_FishInsect01_040a0b30[1];
  local_16c._2_1_ = s_FishInsect01_040a0b30[2];
  local_16c._3_1_ = s_FishInsect01_040a0b30[3];
  local_16c._4_1_ = s_FishInsect01_040a0b30[4];
  local_16c._5_1_ = s_FishInsect01_040a0b30[5];
  local_16c._6_1_ = s_FishInsect01_040a0b30[6];
  local_16c._7_1_ = s_FishInsect01_040a0b30[7];
  local_ed = 0;
  puStack_178 = &local_16c;
  if (puVar7 != &local_16c) {
    lVar5 = 0;
    do {
      if (*(char *)((long)&local_16c + lVar5) == '\0') goto LAB_01429500;
      if (*(char *)((long)&local_16c + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01429500;
      }
      if (*(char *)((long)&local_16c + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01429500;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01429500:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 9000) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 9000) + -1;
    }
    memcpy(puVar7,&local_16c,(long)iVar2);
    *(undefined1 *)((long)puVar7 + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0x2b20) = local_184;
  FUN_013dae70(param_1 + 0x2288,&local_184);
  local_6d = 0;
  plVar6 = (long *)(param_1 + 0x28);
  local_170 = 0x100;
  local_16c = local_16c & 0xffffffffffffff00;
  local_180 = &PTR_LAB_048f9a70;
  puStack_178 = &local_16c;
  uVar4 = (**(code **)(*plVar6 + 0xf0))(plVar6,&local_180,1);
  if ((uVar4 & 1) != 0) {
    FUN_03c27e60(plVar6,&local_180,param_2);
  }
  local_6d = 0;
  local_170 = 0x100;
  local_16c = local_16c & 0xffffffffffffff00;
  local_180 = &PTR_LAB_048f9a70;
  puStack_178 = &local_16c;
  uVar4 = (**(code **)(*(long *)(param_1 + 0x8c8) + 0xf0))(param_1 + 0x8c8,&local_180,1);
  if ((uVar4 & 1) != 0) {
    FUN_03c27e60(param_1 + 0x8c8,&local_180,param_2);
  }
  local_6d = 0;
  local_170 = 0x100;
  local_16c = local_16c & 0xffffffffffffff00;
  local_180 = &PTR_LAB_048f9a70;
  puStack_178 = &local_16c;
  uVar4 = (**(code **)(*(long *)(param_1 + 0x1168) + 0xf0))(param_1 + 0x1168,&local_180,1);
  if ((uVar4 & 1) != 0) {
    FUN_03c27e60(param_1 + 0x1168,&local_180,param_2);
  }
  local_6d = 0;
  local_170 = 0x100;
  local_16c = local_16c & 0xffffffffffffff00;
  local_180 = &PTR_LAB_048f9a70;
  puStack_178 = &local_16c;
  uVar4 = (**(code **)(*(long *)(param_1 + 0x1a08) + 0xf0))(param_1 + 0x1a08,&local_180,1);
  if ((uVar4 & 1) != 0) {
    FUN_03c27e60(param_1 + 0x1a08,&local_180,param_2);
  }
  local_6d = 0;
  local_16c = local_16c & 0xffffffffffffff00;
  local_170 = 0x100;
  local_180 = &PTR_LAB_048f9a70;
  puStack_178 = &local_16c;
  uVar4 = (**(code **)(*(long *)(param_1 + 0x22a8) + 0xf0))(param_1 + 0x22a8,&local_180,1);
  if ((uVar4 & 1) != 0) {
    FUN_03c27e60(param_1 + 0x22a8,&local_180,param_2);
  }
  return;
}

