
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01791750(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined *local_110;
  char *local_108;
  int local_100;
  char local_fc [8];
  char acStack_f4 [6];
  char local_ee [2];
  char acStack_ec [6];
  undefined1 local_e6;
  undefined1 local_7d;
  undefined4 local_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined8 local_70;
  
  local_128 = 0;
  local_70 = 0;
  uStack_74 = 0;
  local_108 = local_fc;
  local_100 = 0x80;
  local_78 = 7;
  local_110 = PTR_DAT_04bb2d88 + 0x10;
  local_124 = 0;
  local_11c = 0;
  local_e6 = 0;
  acStack_ec = (char  [6])s_RoomMdlFloor8x8_FLOOR__040b5b0f._16_6_;
  acStack_f4 = (char  [6])s_RoomMdlFloor8x8_FLOOR__040b5b0f._8_6_;
  local_ee = (char  [2])s_RoomMdlFloor8x8_FLOOR__040b5b0f._14_2_;
  local_140 = 0x800000000;
  local_138 = 0x43200000;
  uStack_134 = 0;
  local_fc = (char  [8])s_RoomMdlFloor8x8_FLOOR__040b5b0f._0_8_;
  local_130 = 0x43200000;
  uStack_12c = 0x3f800000;
  *(undefined1 *)(param_1 + 0x278) = 1;
  if (*(int *)(param_1 + 0x28c) == 0) {
    *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x230);
  }
  pcVar6 = *(char **)(param_1 + 0x378);
  *(long *)(param_1 + 0x2f8) = param_1 + 0x278;
  *(undefined4 *)(param_1 + 0x288) = 8;
  *(undefined1 **)(param_1 + 0x300) = &LAB_0178ede4;
  *(undefined8 *)(param_1 + 0x340) = 0x800000000;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined ***)(param_1 + 0x2f0) = &PTR_LAB_049c39e0;
  *(undefined8 *)(param_1 + 0x348) = 0x43200000;
  *(undefined8 *)(param_1 + 0x350) = 0x3f80000043200000;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  local_7d = 0;
  if (pcVar6 != local_108) {
    lVar5 = 0;
    local_7d = 0;
    do {
      if (local_fc[lVar5] == '\0') goto LAB_017918b0;
      if (local_fc[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_017918b0;
      }
      if (local_fc[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_017918b0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_017918b0:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x380) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x380) + -1;
    }
    memcpy(pcVar6,local_108,(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  pcVar6 = local_108;
  local_138 = 0x43020000;
  uStack_134 = 0;
  local_130 = 0x42f00000;
  local_128 = 0;
  *(ulong *)(param_1 + 0x408) = CONCAT26(uStack_72,CONCAT24(uStack_74,local_78));
  *(undefined8 *)(param_1 + 0x410) = local_70;
  if (local_108 != "RoomMdlWall/WALL:") {
    iVar2 = 0x11;
    if (local_100 < 0x12) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlWall/WALL:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  lVar5 = param_1 + 0x488;
  local_124 = 0x200000000;
  FUN_0179eea0(param_1,lVar5,&local_140);
  pcVar6 = local_108;
  local_138 = 0x43200000;
  uStack_134 = 0;
  local_130 = 0x42f00000;
  local_128 = 0;
  if (local_108 != "RoomMdlEntranceNml4m/ENTRANCE:") {
    iVar2 = 0x1e;
    if (local_100 < 0x1f) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlEntranceNml4m/ENTRANCE:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  local_124 = 0x300000002;
  FUN_0179eea0(param_1,lVar5,&local_140);
  pcVar6 = local_108;
  local_130 = 0x42f00000;
  local_138 = 0x433e0000;
  uStack_134 = 0;
  local_128 = 0;
  if (local_108 != "RoomMdlWall/WALL:") {
    iVar2 = 0x11;
    if (local_100 < 0x12) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlWall/WALL:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  local_124 = 0x600000004;
  FUN_0179eea0(param_1,lVar5,&local_140);
  pcVar6 = local_108;
  local_138 = 0x42f00000;
  uStack_134 = 0;
  local_130 = 0x433e0000;
  local_128 = 0x40000000;
  if (local_108 != "RoomMdlWall/WALL:") {
    iVar2 = 0x11;
    if (local_100 < 0x12) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlWall/WALL:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  local_124 = 0x200000000;
  lVar5 = param_1 + 0x1188;
  FUN_0179eea0(param_1,lVar5,&local_140);
  pcVar6 = local_108;
  local_138 = 0x42f00000;
  uStack_134 = 0;
  local_130 = 0x43200000;
  local_128 = 0x40000000;
  if (local_108 != "RoomMdlWindowWallSquare4m/WINDOWWALL:") {
    iVar2 = 0x25;
    if (local_100 < 0x26) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlWindowWallSquare4m/WINDOWWALL:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  lVar4 = DAT_05292338;
  local_124 = 0x300000002;
  if (DAT_05292338 != 0) {
    if (120.0 <= *(float *)(DAT_05292338 + 0xd74)) {
      *(undefined8 *)(DAT_05292338 + 0xf28) = 0x4170000042f00000;
      *(undefined4 *)(lVar4 + 0xf30) = 0x43200000;
    }
    else {
      puVar1 = (undefined8 *)(DAT_05292338 + 0xf34);
      *(undefined4 *)(DAT_05292338 + 0xf3c) = 0x43200000;
      *puVar1 = 0x4170000042f00000;
    }
  }
  FUN_0179eea0(param_1,lVar5,&local_140);
  pcVar6 = local_108;
  local_138 = 0x42f00000;
  uStack_134 = 0;
  local_130 = 0x43020000;
  local_128 = 0x40000000;
  if (local_108 != "RoomMdlWall/WALL:") {
    iVar2 = 0x11;
    if (local_100 < 0x12) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlWall/WALL:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  local_124 = 0x600000004;
  FUN_0179eea0(param_1,lVar5,&local_140);
  pcVar6 = local_108;
  local_138 = 0x433e0000;
  uStack_134 = 0;
  local_130 = 0x43480000;
  local_128 = 0x80000000;
  if (local_108 != "RoomMdlWall/WALL:") {
    iVar2 = 0x11;
    if (local_100 < 0x12) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlWall/WALL:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  local_124 = 0x200000000;
  lVar5 = param_1 + 0x1e88;
  FUN_0179eea0(param_1,lVar5,&local_140);
  pcVar6 = local_108;
  local_138 = 0x43200000;
  uStack_134 = 0;
  local_130 = 0x43480000;
  local_128 = 0x80000000;
  if (local_108 != "RoomMdlEntranceNml4m/ENTRANCE:") {
    iVar2 = 0x1e;
    if (local_100 < 0x1f) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlEntranceNml4m/ENTRANCE:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  local_124 = 0x300000002;
  FUN_0179eea0(param_1,lVar5,&local_140);
  pcVar6 = local_108;
  local_130 = 0x43480000;
  local_138 = 0x43020000;
  uStack_134 = 0;
  if (local_108 != "RoomMdlWall/WALL:") {
    iVar2 = 0x11;
    if (local_100 < 0x12) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlWall/WALL:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  local_124 = 0x600000004;
  FUN_0179eea0(param_1,lVar5,&local_140);
  pcVar6 = local_108;
  local_130 = 0x43020000;
  local_138 = 0x43480000;
  uStack_134 = 0;
  local_128 = 0xc0000000;
  if (local_108 != "RoomMdlWall/WALL:") {
    iVar2 = 0x11;
    if (local_100 < 0x12) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlWall/WALL:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  local_124 = 0x200000000;
  lVar5 = param_1 + 0x2b88;
  FUN_0179eea0(param_1,lVar5,&local_140);
  pcVar6 = local_108;
  local_130 = 0x43200000;
  local_138 = 0x43480000;
  uStack_134 = 0;
  local_128 = 0xc0000000;
  if (local_108 != "RoomMdlWindowWallSquare4m/WINDOWWALL:") {
    iVar2 = 0x25;
    if (local_100 < 0x26) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlWindowWallSquare4m/WINDOWWALL:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  lVar4 = DAT_05292338;
  local_124 = 0x300000002;
  if (DAT_05292338 != 0) {
    if (200.0 <= *(float *)(DAT_05292338 + 0xd74)) {
      *(undefined8 *)(DAT_05292338 + 0xf28) = 0x4170000043480000;
      *(undefined4 *)(lVar4 + 0xf30) = 0x43200000;
    }
    else {
      puVar1 = (undefined8 *)(DAT_05292338 + 0xf34);
      *(undefined4 *)(DAT_05292338 + 0xf3c) = 0x43200000;
      *puVar1 = 0x4170000043480000;
    }
  }
  FUN_0179eea0(param_1,lVar5,&local_140);
  pcVar6 = local_108;
  local_138 = 0x43480000;
  uStack_134 = 0;
  local_130 = 0x433e0000;
  local_128 = 0xc0000000;
  if (local_108 != "RoomMdlWall/WALL:") {
    iVar2 = 0x11;
    if (local_100 < 0x12) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlWall/WALL:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  local_124 = 0x600000004;
  FUN_0179eea0(param_1,lVar5,&local_140);
  pcVar6 = local_108;
  local_128 = 0x80000000;
  local_138 = 0x43200000;
  uStack_134 = 0;
  local_130 = 0x42f00000;
  if (local_108 != "RoomMdlOutside8/OUTSIDE:") {
    iVar2 = 0x18;
    if (local_100 < 0x19) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlOutside8/OUTSIDE:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  *(undefined1 *)(param_1 + 0x3888) = 1;
  if (*(int *)(param_1 + 0x389c) == 0) {
    *(undefined4 *)(param_1 + 0x389c) = *(undefined4 *)(param_1 + 0x230);
  }
  *(undefined4 *)(param_1 + 0x3898) = local_140._4_4_;
  *(undefined4 *)(param_1 + 0x3954) = local_140._4_4_;
  *(undefined1 **)(param_1 + 0x3908) = (undefined1 *)(param_1 + 0x3888);
  *(undefined1 **)(param_1 + 0x3910) = &LAB_0178f13c;
  pcVar7 = *(char **)(param_1 + 0x3988);
  *(ulong *)(param_1 + 0x395c) = CONCAT44(local_130,uStack_134);
  *(undefined4 *)(param_1 + 0x3958) = local_138;
  *(undefined8 *)(param_1 + 0x3918) = 0;
  *(undefined ***)(param_1 + 0x3900) = &PTR_LAB_049c3940;
  *(undefined4 *)(param_1 + 0x3950) = (undefined4)local_140;
  *(undefined4 *)(param_1 + 0x3964) = uStack_12c;
  *(undefined8 *)(param_1 + 0x3974) = local_11c;
  *(undefined8 *)(param_1 + 0x396c) = local_124;
  *(undefined4 *)(param_1 + 0x3968) = local_128;
  (**(code **)(local_110 + 0x18))(&local_110);
  pcVar6 = local_108;
  if (pcVar7 != local_108) {
    (**(code **)(local_110 + 0x18))(&local_110);
    lVar5 = 0;
    do {
      if (local_108[lVar5] == '\0') goto LAB_01791ff0;
      if (local_108[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01791ff0;
      }
      if (local_108[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01791ff0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01791ff0:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x3990) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x3990) + -1;
    }
    memcpy(pcVar7,pcVar6,(long)iVar2);
    pcVar7[iVar2] = '\0';
    pcVar7 = local_108;
  }
  local_138 = 0x42f00000;
  uStack_134 = 0;
  local_130 = 0x43200000;
  *(ulong *)(param_1 + 0x3a18) = CONCAT26(uStack_72,CONCAT24(uStack_74,local_78));
  *(undefined8 *)(param_1 + 0x3a20) = local_70;
  local_128 = 0xc0000000;
  if (pcVar7 != "RoomMdlOutside8/OUTSIDE:") {
    iVar2 = 0x18;
    if (local_100 < 0x19) {
      iVar2 = local_100 + -1;
    }
    memcpy(pcVar7,"RoomMdlOutside8/OUTSIDE:",(long)iVar2);
    pcVar7[iVar2] = '\0';
  }
  *(undefined1 *)(param_1 + 0x3a28) = 1;
  if (*(int *)(param_1 + 0x3a3c) == 0) {
    *(undefined4 *)(param_1 + 0x3a3c) = *(undefined4 *)(param_1 + 0x230);
  }
  *(undefined4 *)(param_1 + 0x3a38) = local_140._4_4_;
  *(undefined4 *)(param_1 + 0x3af4) = local_140._4_4_;
  *(undefined1 **)(param_1 + 0x3aa8) = (undefined1 *)(param_1 + 0x3a28);
  pcVar7 = *(char **)(param_1 + 0x3b28);
  *(undefined8 *)(param_1 + 0x3ab8) = 0;
  *(ulong *)(param_1 + 0x3afc) = CONCAT44(local_130,uStack_134);
  *(undefined1 **)(param_1 + 0x3ab0) = &LAB_0178f13c;
  *(undefined4 *)(param_1 + 0x3af8) = local_138;
  *(undefined ***)(param_1 + 0x3aa0) = &PTR_LAB_049c3940;
  *(undefined4 *)(param_1 + 0x3af0) = (undefined4)local_140;
  *(undefined4 *)(param_1 + 0x3b04) = uStack_12c;
  *(undefined8 *)(param_1 + 0x3b14) = local_11c;
  *(undefined8 *)(param_1 + 0x3b0c) = local_124;
  *(undefined4 *)(param_1 + 0x3b08) = local_128;
  (**(code **)(local_110 + 0x18))(&local_110);
  pcVar6 = local_108;
  if (pcVar7 != local_108) {
    (**(code **)(local_110 + 0x18))(&local_110);
    lVar5 = 0;
    do {
      if (local_108[lVar5] == '\0') goto LAB_01792180;
      if (local_108[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01792180;
      }
      if (local_108[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01792180;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01792180:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x3b30) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x3b30) + -1;
    }
    memcpy(pcVar7,pcVar6,(long)iVar2);
    pcVar7[iVar2] = '\0';
    pcVar7 = local_108;
  }
  local_138 = 0x43200000;
  uStack_134 = 0;
  local_128 = 0;
  *(ulong *)(param_1 + 0x3bb8) = CONCAT26(uStack_72,CONCAT24(uStack_74,local_78));
  *(undefined8 *)(param_1 + 0x3bc0) = local_70;
  local_130 = 0x43480000;
  if (pcVar7 != "RoomMdlOutside8/OUTSIDE:") {
    iVar2 = 0x18;
    if (local_100 < 0x19) {
      iVar2 = local_100 + -1;
    }
    memcpy(pcVar7,"RoomMdlOutside8/OUTSIDE:",(long)iVar2);
    pcVar7[iVar2] = '\0';
  }
  *(undefined1 *)(param_1 + 0x3bc8) = 1;
  if (*(int *)(param_1 + 0x3bdc) == 0) {
    *(undefined4 *)(param_1 + 0x3bdc) = *(undefined4 *)(param_1 + 0x230);
  }
  *(undefined4 *)(param_1 + 0x3bd8) = local_140._4_4_;
  *(undefined4 *)(param_1 + 0x3c94) = local_140._4_4_;
  *(undefined1 **)(param_1 + 0x3c48) = (undefined1 *)(param_1 + 0x3bc8);
  pcVar7 = *(char **)(param_1 + 0x3cc8);
  *(undefined8 *)(param_1 + 0x3c58) = 0;
  *(ulong *)(param_1 + 0x3c9c) = CONCAT44(local_130,uStack_134);
  *(undefined1 **)(param_1 + 0x3c50) = &LAB_0178f13c;
  *(undefined4 *)(param_1 + 0x3c98) = local_138;
  *(undefined ***)(param_1 + 0x3c40) = &PTR_LAB_049c3940;
  *(undefined4 *)(param_1 + 0x3c90) = (undefined4)local_140;
  *(undefined4 *)(param_1 + 0x3ca4) = uStack_12c;
  *(undefined8 *)(param_1 + 0x3cb4) = local_11c;
  *(undefined8 *)(param_1 + 0x3cac) = local_124;
  *(undefined4 *)(param_1 + 0x3ca8) = local_128;
  (**(code **)(local_110 + 0x18))(&local_110);
  pcVar6 = local_108;
  if (pcVar7 != local_108) {
    (**(code **)(local_110 + 0x18))(&local_110);
    lVar5 = 0;
    do {
      if (local_108[lVar5] == '\0') goto LAB_01792310;
      if (local_108[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01792310;
      }
      if (local_108[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01792310;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01792310:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x3cd0) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x3cd0) + -1;
    }
    memcpy(pcVar7,pcVar6,(long)iVar2);
    pcVar7[iVar2] = '\0';
    pcVar7 = local_108;
  }
  local_138 = 0x43480000;
  uStack_134 = 0;
  local_130 = 0x43200000;
  *(ulong *)(param_1 + 0x3d58) = CONCAT26(uStack_72,CONCAT24(uStack_74,local_78));
  *(undefined8 *)(param_1 + 0x3d60) = local_70;
  local_128 = 0x40000000;
  if (pcVar7 != "RoomMdlOutside8/OUTSIDE:") {
    iVar2 = 0x18;
    if (local_100 < 0x19) {
      iVar2 = local_100 + -1;
    }
    memcpy(pcVar7,"RoomMdlOutside8/OUTSIDE:",(long)iVar2);
    pcVar7[iVar2] = '\0';
  }
  *(undefined1 *)(param_1 + 0x3d68) = 1;
  if (*(int *)(param_1 + 0x3d7c) == 0) {
    *(undefined4 *)(param_1 + 0x3d7c) = *(undefined4 *)(param_1 + 0x230);
  }
  *(undefined4 *)(param_1 + 0x3d78) = local_140._4_4_;
  *(undefined4 *)(param_1 + 0x3e34) = local_140._4_4_;
  *(undefined1 **)(param_1 + 0x3de8) = (undefined1 *)(param_1 + 0x3d68);
  pcVar7 = *(char **)(param_1 + 0x3e68);
  *(undefined8 *)(param_1 + 0x3df8) = 0;
  *(ulong *)(param_1 + 0x3e3c) = CONCAT44(local_130,uStack_134);
  *(undefined1 **)(param_1 + 0x3df0) = &LAB_0178f13c;
  *(undefined4 *)(param_1 + 0x3e38) = local_138;
  *(undefined ***)(param_1 + 0x3de0) = &PTR_LAB_049c3940;
  *(undefined4 *)(param_1 + 0x3e30) = (undefined4)local_140;
  *(undefined4 *)(param_1 + 0x3e44) = uStack_12c;
  *(undefined8 *)(param_1 + 0x3e54) = local_11c;
  *(undefined8 *)(param_1 + 0x3e4c) = local_124;
  *(undefined4 *)(param_1 + 0x3e48) = local_128;
  (**(code **)(local_110 + 0x18))(&local_110);
  pcVar6 = local_108;
  if (pcVar7 != local_108) {
    (**(code **)(local_110 + 0x18))(&local_110);
    lVar5 = 0;
    do {
      if (local_108[lVar5] == '\0') goto LAB_017924a0;
      if (local_108[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_017924a0;
      }
      if (local_108[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_017924a0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_017924a0:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x3e70) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x3e70) + -1;
    }
    memcpy(pcVar7,pcVar6,(long)iVar2);
    pcVar7[iVar2] = '\0';
    pcVar7 = local_108;
  }
  local_130 = 0x43480000;
  local_128 = 0;
  local_138 = 0x43200000;
  uStack_134 = 0;
  *(ulong *)(param_1 + 0x3ef8) = CONCAT26(uStack_72,CONCAT24(uStack_74,local_78));
  *(undefined8 *)(param_1 + 0x3f00) = local_70;
  if (pcVar7 != "RoomMdlStairsNml/STAIRS:") {
    iVar2 = 0x18;
    if (local_100 < 0x19) {
      iVar2 = local_100 + -1;
    }
    memcpy(pcVar7,"RoomMdlStairsNml/STAIRS:",(long)iVar2);
    pcVar7[iVar2] = '\0';
  }
  uVar3 = *(undefined4 *)(param_1 + 0x230);
  *(undefined1 *)(param_1 + 0x4728) = 1;
  local_140 = CONCAT44(local_140._4_4_,uVar3);
  if (*(int *)(param_1 + 0x473c) == 0) {
    *(undefined4 *)(param_1 + 0x473c) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x4738) = local_140._4_4_;
  *(undefined4 *)(param_1 + 0x47f0) = uVar3;
  *(undefined4 *)(param_1 + 0x47f4) = local_140._4_4_;
  *(undefined1 **)(param_1 + 0x47b0) = &LAB_0178ede4;
  *(undefined1 **)(param_1 + 0x47a8) = (undefined1 *)(param_1 + 0x4728);
  *(undefined8 *)(param_1 + 0x4814) = local_11c;
  pcVar7 = *(char **)(param_1 + 0x4828);
  *(undefined4 *)(param_1 + 0x47f8) = local_138;
  *(undefined8 *)(param_1 + 0x480c) = local_124;
  *(ulong *)(param_1 + 0x47fc) = CONCAT44(local_130,uStack_134);
  *(undefined8 *)(param_1 + 0x47b8) = 0;
  *(undefined ***)(param_1 + 0x47a0) = &PTR_LAB_049c39e0;
  *(undefined4 *)(param_1 + 0x4808) = local_128;
  *(undefined4 *)(param_1 + 0x4804) = uStack_12c;
  (**(code **)(local_110 + 0x18))(&local_110);
  pcVar6 = local_108;
  if (pcVar7 != local_108) {
    (**(code **)(local_110 + 0x18))(&local_110);
    lVar5 = 0;
    do {
      if (local_108[lVar5] == '\0') goto LAB_0179262c;
      if (local_108[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0179262c;
      }
      if (local_108[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0179262c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0179262c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x4830) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x4830) + -1;
    }
    memcpy(pcVar7,pcVar6,(long)iVar2);
    pcVar7[iVar2] = '\0';
    pcVar7 = local_108;
  }
  local_138 = 0x43200000;
  uStack_134 = 0;
  local_130 = 0x43200000;
  local_128 = 0;
  *(ulong *)(param_1 + 0x48b8) = CONCAT26(uStack_72,CONCAT24(uStack_74,local_78));
  *(undefined8 *)(param_1 + 0x48c0) = local_70;
  if (pcVar7 != "RoomMdlCeling8x8/CEILING:") {
    iVar2 = 0x19;
    if (local_100 < 0x1a) {
      iVar2 = local_100 + -1;
    }
    memcpy(pcVar7,"RoomMdlCeling8x8/CEILING:",(long)iVar2);
    pcVar7[iVar2] = '\0';
  }
  *(undefined1 *)(param_1 + 0x3f08) = 1;
  if (*(int *)(param_1 + 0x3f1c) == 0) {
    *(undefined4 *)(param_1 + 0x3f1c) = *(undefined4 *)(param_1 + 0x230);
  }
  *(undefined1 **)(param_1 + 0x3f90) = &LAB_0178f13c;
  *(undefined ***)(param_1 + 0x3f80) = &PTR_LAB_049c3940;
  *(undefined4 *)(param_1 + 0x3f18) = local_140._4_4_;
  *(undefined4 *)(param_1 + 0x3fd4) = local_140._4_4_;
  *(undefined4 *)(param_1 + 0x3fe8) = local_128;
  *(undefined4 *)(param_1 + 0x3fd8) = local_138;
  *(undefined4 *)(param_1 + 0x3fd0) = (undefined4)local_140;
  pcVar7 = *(char **)(param_1 + 0x4008);
  *(undefined1 **)(param_1 + 0x3f88) = (undefined1 *)(param_1 + 0x3f08);
  *(undefined8 *)(param_1 + 0x3f98) = 0;
  *(ulong *)(param_1 + 0x3fdc) = CONCAT44(local_130,uStack_134);
  *(undefined4 *)(param_1 + 0x3fe4) = uStack_12c;
  *(undefined8 *)(param_1 + 0x3ff4) = local_11c;
  *(undefined8 *)(param_1 + 0x3fec) = local_124;
  (**(code **)(local_110 + 0x18))(&local_110);
  pcVar6 = local_108;
  if (pcVar7 != local_108) {
    (**(code **)(local_110 + 0x18))(&local_110);
    lVar5 = 0;
    do {
      if (local_108[lVar5] == '\0') goto LAB_017927bc;
      if (local_108[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_017927bc;
      }
      if (local_108[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_017927bc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_017927bc:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x4010) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x4010) + -1;
    }
    memcpy(pcVar7,pcVar6,(long)iVar2);
    pcVar7[iVar2] = '\0';
  }
  *(ulong *)(param_1 + 0x4098) = CONCAT26(uStack_72,CONCAT24(uStack_74,local_78));
  *(undefined8 *)(param_1 + 0x40a0) = local_70;
  FUN_0178fd30(param_1,8,8);
  pcVar6 = local_108;
  local_138 = 0x43200000;
  uStack_134 = 0;
  local_130 = 0x42f00000;
  local_128 = 0x80000000;
  if (local_108 != "RoomMdlStairsNml/STAIRS:") {
    iVar2 = 0x18;
    if (local_100 < 0x19) {
      iVar2 = local_100 + -1;
    }
    memcpy(local_108,"RoomMdlStairsNml/STAIRS:",(long)iVar2);
    pcVar6[iVar2] = '\0';
  }
  uVar3 = *(undefined4 *)(param_1 + 0x230);
  *(undefined1 *)(param_1 + 0x48c8) = 1;
  local_140 = CONCAT44(local_140._4_4_,uVar3);
  if (*(int *)(param_1 + 0x48dc) == 0) {
    *(undefined4 *)(param_1 + 0x48dc) = uVar3;
  }
  *(undefined1 **)(param_1 + 0x4950) = &LAB_0178ede4;
  *(undefined ***)(param_1 + 0x4940) = &PTR_LAB_049c39e0;
  *(undefined4 *)(param_1 + 0x48d8) = local_140._4_4_;
  *(undefined4 *)(param_1 + 0x4990) = uVar3;
  *(undefined4 *)(param_1 + 0x4994) = local_140._4_4_;
  *(undefined4 *)(param_1 + 0x4998) = local_138;
  *(undefined1 **)(param_1 + 0x4948) = (undefined1 *)(param_1 + 0x48c8);
  *(ulong *)(param_1 + 0x499c) = CONCAT44(local_130,uStack_134);
  pcVar7 = *(char **)(param_1 + 0x49c8);
  *(undefined8 *)(param_1 + 0x4958) = 0;
  *(undefined4 *)(param_1 + 0x49a8) = local_128;
  *(undefined8 *)(param_1 + 0x49b4) = local_11c;
  *(undefined8 *)(param_1 + 0x49ac) = local_124;
  *(undefined4 *)(param_1 + 0x49a4) = uStack_12c;
  (**(code **)(local_110 + 0x18))(&local_110);
  pcVar6 = local_108;
  if (pcVar7 != local_108) {
    (**(code **)(local_110 + 0x18))(&local_110);
    lVar5 = 0;
    do {
      if (local_108[lVar5] == '\0') goto LAB_01792950;
      if (local_108[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01792950;
      }
      if (local_108[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01792950;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01792950:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x49d0) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x49d0) + -1;
    }
    memcpy(pcVar7,pcVar6,(long)iVar2);
    pcVar7[iVar2] = '\0';
  }
  *(ulong *)(param_1 + 0x4a58) = CONCAT26(uStack_72,CONCAT24(uStack_74,local_78));
  *(undefined8 *)(param_1 + 0x4a60) = local_70;
  return;
}

