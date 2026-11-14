
void FUN_0179f0d0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  ulong *__dest;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined8 local_1f8;
  float local_1f0;
  undefined4 local_1ec;
  float fStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined1 *local_1c8;
  ulong *local_1c0;
  int local_1b8;
  ulong local_1b4;
  char acStack_1ac [8];
  char local_1a4 [8];
  char acStack_19c [5];
  char local_197 [3];
  char acStack_194 [5];
  undefined1 local_18f;
  undefined1 local_135;
  undefined4 local_130;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined8 local_128;
  undefined1 *local_120;
  ulong *local_118;
  undefined4 local_110;
  ulong local_10c;
  ulong uStack_104;
  ulong local_fc;
  undefined1 local_f4;
  undefined1 local_f3 [102];
  undefined1 local_8d;
  
  lVar5 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar5 == 0) {
    uVar11 = 4;
    fVar12 = 4.0;
  }
  else {
    uVar11 = *(int *)(lVar5 + 0xf68) * 2 + 4;
    fVar12 = (float)(*(int *)(lVar5 + 0xf64) * 2 + 4);
  }
  local_110 = 0x80;
  local_8d = 0;
  local_118 = &local_10c;
  local_120 = &DAT_048fc708;
  if (uVar11 == 10) {
    local_f4 = 0x3a;
    local_10c = s_RoomMdlOutside10_OUTSIDE__040bb316._0_8_;
    uStack_104 = s_RoomMdlOutside10_OUTSIDE__040bb316._8_8_;
    local_fc = s_RoomMdlOutside10_OUTSIDE__040bb316._16_8_;
    puVar8 = local_f3;
  }
  else {
    if (uVar11 == 6) {
      pcVar9 = "RoomMdlOutside6/OUTSIDE:";
    }
    else if (uVar11 == 8) {
      pcVar9 = "RoomMdlOutside8/OUTSIDE:";
    }
    else {
      pcVar9 = "RoomMdlOutside4/OUTSIDE:";
    }
    local_10c = *(ulong *)pcVar9;
    uStack_104 = *(ulong *)((long)pcVar9 + 8);
    local_fc = *(ulong *)((long)pcVar9 + 0x10);
    puVar8 = &local_f4;
  }
  fVar12 = 160.0 - fVar12 * 5.0;
  *puVar8 = 0;
  fVar13 = (float)uVar11 * 5.0 + 160.0 + -10.0;
  local_1f8 = 0x800000000;
  local_1ec = 0;
  uStack_1e4 = 0x3f800000;
  local_1c0 = &local_1b4;
  local_1c8 = &DAT_048fc708;
  local_1b8 = 0x80;
  local_135 = 0;
  local_1b4 = local_1b4 & 0xffffffffffffff00;
  local_130 = 7;
  local_128 = 0;
  uStack_12c = 0;
  local_1dc = 0;
  local_1d4 = 0;
  if (uVar11 == 4) {
    fStack_1e8 = fVar13 + -10.0;
    local_18f = 0;
    local_1a4 = (char  [8])s_RoomMdlWindowWallSquare4m_WINDOW_040b5b26._16_8_;
    acStack_19c = (char  [5])s_RoomMdlWindowWallSquare4m_WINDOW_040b5b26._24_5_;
    local_197 = (char  [3])s_RoomMdlWindowWallSquare4m_WINDOW_040b5b26._29_3_;
    acStack_194 = (char  [5])s_RoomMdlWindowWallSquare4m_WINDOW_040b5b26._32_5_;
    local_1e0 = 0x40000000;
    local_1b4 = s_RoomMdlWindowWallSquare4m_WINDOW_040b5b26._0_8_;
    acStack_1ac = (char  [8])s_RoomMdlWindowWallSquare4m_WINDOW_040b5b26._8_8_;
    local_1dc = 0x300000000;
    if (lVar5 != 0) {
      if (fVar12 <= *(float *)(lVar5 + 0xd74)) {
        *(float *)(lVar5 + 0xf28) = fVar12;
        *(float *)(lVar5 + 0xf30) = fStack_1e8;
        *(undefined4 *)(lVar5 + 0xf2c) = 0x41700000;
      }
      else {
        *(float *)(lVar5 + 0xf34) = fVar12;
        *(float *)(lVar5 + 0xf3c) = fStack_1e8;
        *(undefined4 *)(lVar5 + 0xf38) = 0x41700000;
      }
    }
    local_1f0 = fVar12;
    FUN_0179eea0(param_1,param_2,&local_1f8);
  }
  else if (1 < uVar11) {
    uVar10 = 0;
    uVar3 = (uVar11 >> 1) - 1;
    do {
      puVar4 = local_1c0;
      fStack_1e8 = fVar13;
      if ((uVar10 == 1 && uVar11 == 6) || (uVar11 == 10 && uVar10 == 2)) {
        local_1ec = 0;
        local_1e0 = 0x40000000;
        local_1f0 = fVar12;
        if (local_1c0 != (ulong *)"RoomMdlWindowWallSquare2m/WINDOWWALL:") {
          iVar1 = 0x25;
          if (local_1b8 < 0x26) {
            iVar1 = local_1b8 + -1;
          }
          memcpy(local_1c0,"RoomMdlWindowWallSquare2m/WINDOWWALL:",(long)iVar1);
          *(char *)((long)puVar4 + (long)iVar1) = '\0';
        }
        lVar5 = DAT_05292338;
        uVar7 = 4;
        if (uVar10 != uVar3) {
          uVar7 = 2;
        }
        uVar6 = 6;
        if (uVar10 != uVar3) {
          uVar6 = 4;
        }
        local_1dc = CONCAT44(uVar6,uVar7);
        if (DAT_05292338 != 0) {
          if (fVar12 <= *(float *)(DAT_05292338 + 0xd74)) {
            *(float *)(DAT_05292338 + 0xf28) = fVar12;
            *(float *)(lVar5 + 0xf30) = fVar13;
            *(undefined4 *)(lVar5 + 0xf2c) = 0x41700000;
          }
          else {
            *(float *)(DAT_05292338 + 0xf34) = fVar12;
            *(float *)(lVar5 + 0xf3c) = fVar13;
            *(undefined4 *)(lVar5 + 0xf38) = 0x41700000;
          }
        }
LAB_0179f2ec:
        FUN_0179eea0(param_1,param_2,&local_1f8);
      }
      else {
        if ((uVar11 != 8) || (uVar10 != 1)) {
          local_1ec = 0;
          local_1e0 = 0x40000000;
          local_1f0 = fVar12;
          if (local_1c0 != (ulong *)"RoomMdlWall/WALL:") {
            iVar1 = 0x11;
            if (local_1b8 < 0x12) {
              iVar1 = local_1b8 + -1;
            }
            memcpy(local_1c0,"RoomMdlWall/WALL:",(long)iVar1);
            *(char *)((long)puVar4 + (long)iVar1) = '\0';
          }
          uVar7 = 4;
          if (uVar10 != uVar3) {
            uVar7 = 2;
          }
          uVar6 = 6;
          if (uVar10 != uVar3) {
            uVar6 = 4;
          }
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar7;
          }
          uVar7 = 2;
          if (uVar10 != 0) {
            uVar7 = uVar6;
          }
          local_1dc = CONCAT44(uVar7,uVar2);
          goto LAB_0179f2ec;
        }
        fVar13 = fVar13 + -10.0;
        local_1ec = 0;
        local_1e0 = 0x40000000;
        local_1f0 = fVar12;
        fStack_1e8 = fVar13;
        if (local_1c0 != (ulong *)"RoomMdlWindowWallSquare4m/WINDOWWALL:") {
          iVar1 = 0x25;
          if (local_1b8 < 0x26) {
            iVar1 = local_1b8 + -1;
          }
          memcpy(local_1c0,"RoomMdlWindowWallSquare4m/WINDOWWALL:",(long)iVar1);
          *(char *)((long)puVar4 + (long)iVar1) = '\0';
        }
        lVar5 = DAT_05292338;
        local_1dc = 0x300000002;
        if (DAT_05292338 != 0) {
          if (fVar12 <= *(float *)(DAT_05292338 + 0xd74)) {
            *(float *)(DAT_05292338 + 0xf28) = fVar12;
            *(float *)(lVar5 + 0xf30) = fVar13;
            *(undefined4 *)(lVar5 + 0xf2c) = 0x41700000;
          }
          else {
            *(float *)(DAT_05292338 + 0xf34) = fVar12;
            *(float *)(lVar5 + 0xf3c) = fVar13;
            *(undefined4 *)(lVar5 + 0xf38) = 0x41700000;
          }
        }
        FUN_0179eea0(param_1,param_2,&local_1f8);
        fVar13 = fVar13 + -10.0;
        uVar10 = 2;
      }
      fVar13 = fVar13 + -20.0;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11 >> 1);
  }
  puVar4 = local_1c0;
  local_1ec = 0;
  fStack_1e8 = 160.0;
  local_1e0 = 0xc0000000;
  local_1f0 = fVar12;
  if (local_1c0 != local_118) {
    lVar5 = 0;
    do {
      if (*(char *)((long)local_118 + lVar5) == '\0') goto LAB_0179f5bc;
      if (*(char *)((long)local_118 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0179f5bc;
      }
      if (*(char *)((long)local_118 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0179f5bc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0179f5bc:
    iVar1 = (int)lVar5;
    if (local_1b8 <= (int)lVar5) {
      iVar1 = local_1b8 + -1;
    }
    memcpy(local_1c0,local_118,(long)iVar1);
    *(char *)((long)puVar4 + (long)iVar1) = '\0';
  }
  *param_3 = 1;
  if (param_1 != 0) {
    if (*(int *)(param_3 + 0x14) == 0) {
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x230);
    }
    *(undefined4 *)(param_3 + 0x10) = local_1f8._4_4_;
  }
  *(undefined ***)(param_3 + 0x78) = &PTR_LAB_049c3940;
  *(undefined1 **)(param_3 + 0x80) = param_3;
  __dest = *(ulong **)(param_3 + 0x100);
  *(undefined1 **)(param_3 + 0x88) = &LAB_0178f13c;
  *(undefined8 *)(param_3 + 0x90) = 0;
  *(undefined4 *)(param_3 + 200) = (undefined4)local_1f8;
  *(undefined4 *)(param_3 + 0xcc) = local_1f8._4_4_;
  *(float *)(param_3 + 0xd0) = local_1f0;
  *(ulong *)(param_3 + 0xd4) = CONCAT44(fStack_1e8,local_1ec);
  *(undefined4 *)(param_3 + 0xe0) = local_1e0;
  *(undefined4 *)(param_3 + 0xdc) = uStack_1e4;
  *(undefined8 *)(param_3 + 0xec) = local_1d4;
  *(undefined8 *)(param_3 + 0xe4) = local_1dc;
  (**(code **)(local_1c8 + 0x18))(&local_1c8);
  puVar4 = local_1c0;
  if (__dest != local_1c0) {
    (**(code **)(local_1c8 + 0x18))(&local_1c8);
    lVar5 = 0;
    do {
      if (*(char *)((long)local_1c0 + lVar5) == '\0') goto LAB_0179f6dc;
      if (*(char *)((long)local_1c0 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0179f6dc;
      }
      if (*(char *)((long)local_1c0 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0179f6dc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0179f6dc:
    iVar1 = (int)lVar5;
    if (*(int *)(param_3 + 0x108) <= (int)lVar5) {
      iVar1 = *(int *)(param_3 + 0x108) + -1;
    }
    memcpy(__dest,puVar4,(long)iVar1);
    *(char *)((long)__dest + (long)iVar1) = '\0';
  }
  *(ulong *)(param_3 + 400) = CONCAT26(uStack_12a,CONCAT24(uStack_12c,local_130));
  *(undefined8 *)(param_3 + 0x198) = local_128;
  return;
}

