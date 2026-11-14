
void FUN_017a1380(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  ulong *puVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ulong *__dest;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_1f8;
  float local_1f0;
  undefined4 local_1ec;
  float fStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined *local_1c8;
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
  undefined *local_120;
  ulong *local_118;
  undefined4 local_110;
  ulong local_10c;
  char acStack_104 [8];
  char local_fc [8];
  undefined1 local_f4;
  undefined1 local_f3 [102];
  undefined1 local_8d;
  
  lVar7 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar7 == 0) {
    uVar12 = 4;
    uVar9 = 4;
  }
  else {
    iVar2 = *(int *)(lVar7 + 0xf68) * 2;
    uVar9 = *(int *)(lVar7 + 0xf64) * 2 + 4;
    if (iVar2 == 2) {
      bVar5 = false;
      uVar12 = 6;
      local_fc = (char  [8])s_RoomMdlOutside6_OUTSIDE__0406246a._16_8_;
      puVar11 = &local_f4;
      local_10c = s_RoomMdlOutside6_OUTSIDE__0406246a._0_8_;
      acStack_104 = (char  [8])s_RoomMdlOutside6_OUTSIDE__0406246a._8_8_;
      goto LAB_017a14ec;
    }
    if (iVar2 == 4) {
      bVar5 = false;
      uVar12 = 8;
      local_fc = (char  [8])s_RoomMdlOutside8_OUTSIDE__040ef277._16_8_;
      local_10c = s_RoomMdlOutside8_OUTSIDE__040ef277._0_8_;
      acStack_104 = (char  [8])s_RoomMdlOutside8_OUTSIDE__040ef277._8_8_;
      puVar11 = &local_f4;
      goto LAB_017a14ec;
    }
    if (iVar2 == 6) {
      local_f4 = 0x3a;
      uVar12 = 10;
      puVar11 = local_f3;
      bVar5 = true;
      local_fc = (char  [8])s_RoomMdlOutside10_OUTSIDE__040bb316._16_8_;
      local_10c = s_RoomMdlOutside10_OUTSIDE__040bb316._0_8_;
      acStack_104 = (char  [8])s_RoomMdlOutside10_OUTSIDE__040bb316._8_8_;
      goto LAB_017a14ec;
    }
    uVar12 = iVar2 + 4;
  }
  bVar5 = false;
  local_10c = s_RoomMdlOutside4_OUTSIDE__0408c91e._0_8_;
  acStack_104 = (char  [8])s_RoomMdlOutside4_OUTSIDE__0408c91e._8_8_;
  local_fc = (char  [8])s_RoomMdlOutside4_OUTSIDE__0408c91e._16_8_;
  puVar11 = &local_f4;
LAB_017a14ec:
  local_8d = 0;
  local_110 = 0x80;
  local_118 = &local_10c;
  local_1f8 = 0x800000000;
  local_1ec = 0;
  uStack_1e4 = 0x3f800000;
  local_1c8 = PTR_DAT_04bb2d88 + 0x10;
  local_1c0 = &local_1b4;
  local_130 = 7;
  *puVar11 = 0;
  local_1b8 = 0x80;
  fVar13 = (float)uVar9 * 5.0 + 160.0;
  local_135 = 0;
  local_1b4 = local_1b4 & 0xffffffffffffff00;
  local_128 = 0;
  uStack_12c = 0;
  local_1dc = 0;
  local_1d4 = 0;
  fVar14 = (160.0 - (float)uVar12 * 5.0) + 10.0;
  local_120 = local_1c8;
  if (uVar12 == 4) {
    fStack_1e8 = fVar14 + 10.0;
    local_18f = 0;
    local_1a4 = (char  [8])s_RoomMdlWindowWallSquare4m_WINDOW_040b5b26._16_8_;
    acStack_19c = (char  [5])s_RoomMdlWindowWallSquare4m_WINDOW_040b5b26._24_5_;
    local_197 = (char  [3])s_RoomMdlWindowWallSquare4m_WINDOW_040b5b26._29_3_;
    acStack_194 = (char  [5])s_RoomMdlWindowWallSquare4m_WINDOW_040b5b26._32_5_;
    local_1e0 = 0xc0000000;
    local_1b4 = s_RoomMdlWindowWallSquare4m_WINDOW_040b5b26._0_8_;
    acStack_1ac = (char  [8])s_RoomMdlWindowWallSquare4m_WINDOW_040b5b26._8_8_;
    local_1dc = 0x300000000;
    if (lVar7 != 0) {
      if (fVar13 <= *(float *)(lVar7 + 0xd74)) {
        *(float *)(lVar7 + 0xf28) = fVar13;
        *(float *)(lVar7 + 0xf30) = fStack_1e8;
        *(undefined4 *)(lVar7 + 0xf2c) = 0x41700000;
      }
      else {
        *(float *)(lVar7 + 0xf34) = fVar13;
        *(float *)(lVar7 + 0xf3c) = fStack_1e8;
        *(undefined4 *)(lVar7 + 0xf38) = 0x41700000;
      }
    }
    local_1f0 = fVar13;
    FUN_0179eea0(param_1,param_2,&local_1f8);
  }
  else if (1 < uVar12) {
    uVar9 = 0;
    uVar3 = (uVar12 >> 1) - 1;
    do {
      puVar6 = local_1c0;
      bVar4 = false;
      if (uVar9 == 2) {
        bVar4 = bVar5;
      }
      fStack_1e8 = fVar14;
      if ((uVar9 == 1 && uVar12 == 6) || (bVar4)) {
        local_1ec = 0;
        local_1e0 = 0xc0000000;
        local_1f0 = fVar13;
        if (local_1c0 != (ulong *)"RoomMdlWindowWallSquare2m/WINDOWWALL:") {
          iVar2 = 0x25;
          if (local_1b8 < 0x26) {
            iVar2 = local_1b8 + -1;
          }
          memcpy(local_1c0,"RoomMdlWindowWallSquare2m/WINDOWWALL:",(long)iVar2);
          *(char *)((long)puVar6 + (long)iVar2) = '\0';
        }
        uVar10 = 4;
        if (uVar9 != uVar3) {
          uVar10 = 2;
        }
        uVar8 = 6;
        if (uVar9 != uVar3) {
          uVar8 = 4;
        }
        local_1dc = CONCAT44(uVar8,uVar10);
        lVar7 = *(long *)PTR_DAT_04bb5ce0;
        if (lVar7 != 0) {
          if (fVar13 <= *(float *)(lVar7 + 0xd74)) {
            *(float *)(lVar7 + 0xf28) = fVar13;
            *(float *)(lVar7 + 0xf30) = fVar14;
            *(undefined4 *)(lVar7 + 0xf2c) = 0x41700000;
          }
          else {
            *(float *)(lVar7 + 0xf34) = fVar13;
            *(float *)(lVar7 + 0xf3c) = fVar14;
            *(undefined4 *)(lVar7 + 0xf38) = 0x41700000;
          }
        }
LAB_017a1608:
        FUN_0179eea0(param_1,param_2,&local_1f8);
      }
      else {
        if ((uVar12 != 8) || (uVar9 != 1)) {
          local_1ec = 0;
          local_1e0 = 0xc0000000;
          local_1f0 = fVar13;
          if (local_1c0 != (ulong *)"RoomMdlWall/WALL:") {
            iVar2 = 0x11;
            if (local_1b8 < 0x12) {
              iVar2 = local_1b8 + -1;
            }
            memcpy(local_1c0,"RoomMdlWall/WALL:",(long)iVar2);
            *(char *)((long)puVar6 + (long)iVar2) = '\0';
          }
          uVar10 = 4;
          if (uVar9 != uVar3) {
            uVar10 = 2;
          }
          uVar8 = 6;
          if (uVar9 != uVar3) {
            uVar8 = 4;
          }
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar10;
          }
          uVar10 = 2;
          if (uVar9 != 0) {
            uVar10 = uVar8;
          }
          local_1dc = CONCAT44(uVar10,uVar1);
          goto LAB_017a1608;
        }
        fVar14 = fVar14 + 10.0;
        local_1ec = 0;
        local_1e0 = 0xc0000000;
        local_1f0 = fVar13;
        fStack_1e8 = fVar14;
        if (local_1c0 != (ulong *)"RoomMdlWindowWallSquare4m/WINDOWWALL:") {
          iVar2 = 0x25;
          if (local_1b8 < 0x26) {
            iVar2 = local_1b8 + -1;
          }
          memcpy(local_1c0,"RoomMdlWindowWallSquare4m/WINDOWWALL:",(long)iVar2);
          *(char *)((long)puVar6 + (long)iVar2) = '\0';
        }
        local_1dc = 0x300000002;
        lVar7 = *(long *)PTR_DAT_04bb5ce0;
        if (lVar7 != 0) {
          if (fVar13 <= *(float *)(lVar7 + 0xd74)) {
            *(float *)(lVar7 + 0xf28) = fVar13;
            *(float *)(lVar7 + 0xf30) = fVar14;
            *(undefined4 *)(lVar7 + 0xf2c) = 0x41700000;
          }
          else {
            *(float *)(lVar7 + 0xf34) = fVar13;
            *(float *)(lVar7 + 0xf3c) = fVar14;
            *(undefined4 *)(lVar7 + 0xf38) = 0x41700000;
          }
        }
        FUN_0179eea0(param_1,param_2,&local_1f8);
        fVar14 = fVar14 + 10.0;
        uVar9 = 2;
      }
      fVar14 = fVar14 + 20.0;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar12 >> 1);
  }
  puVar6 = local_1c0;
  local_1ec = 0;
  fStack_1e8 = 160.0;
  local_1e0 = 0x40000000;
  local_1f0 = fVar13;
  if (local_1c0 != local_118) {
    lVar7 = 0;
    do {
      if (*(char *)((long)local_118 + lVar7) == '\0') goto LAB_017a18d0;
      if (*(char *)((long)local_118 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_017a18d0;
      }
      if (*(char *)((long)local_118 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_017a18d0;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_017a18d0:
    iVar2 = (int)lVar7;
    if (local_1b8 <= (int)lVar7) {
      iVar2 = local_1b8 + -1;
    }
    memcpy(local_1c0,local_118,(long)iVar2);
    *(char *)((long)puVar6 + (long)iVar2) = '\0';
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
  *(undefined1 **)(param_3 + 0x88) = &LAB_0178f13c;
  *(undefined8 *)(param_3 + 0x90) = 0;
  __dest = *(ulong **)(param_3 + 0x100);
  *(undefined4 *)(param_3 + 200) = (undefined4)local_1f8;
  *(undefined4 *)(param_3 + 0xcc) = local_1f8._4_4_;
  *(float *)(param_3 + 0xd0) = local_1f0;
  *(ulong *)(param_3 + 0xd4) = CONCAT44(fStack_1e8,local_1ec);
  *(undefined4 *)(param_3 + 0xe0) = local_1e0;
  *(undefined4 *)(param_3 + 0xdc) = uStack_1e4;
  *(undefined8 *)(param_3 + 0xec) = local_1d4;
  *(undefined8 *)(param_3 + 0xe4) = local_1dc;
  (**(code **)(local_1c8 + 0x18))(&local_1c8);
  puVar6 = local_1c0;
  if (__dest != local_1c0) {
    (**(code **)(local_1c8 + 0x18))(&local_1c8);
    lVar7 = 0;
    do {
      if (*(char *)((long)local_1c0 + lVar7) == '\0') goto LAB_017a19e0;
      if (*(char *)((long)local_1c0 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_017a19e0;
      }
      if (*(char *)((long)local_1c0 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_017a19e0;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_017a19e0:
    iVar2 = (int)lVar7;
    if (*(int *)(param_3 + 0x108) <= (int)lVar7) {
      iVar2 = *(int *)(param_3 + 0x108) + -1;
    }
    memcpy(__dest,puVar6,(long)iVar2);
    *(char *)((long)__dest + (long)iVar2) = '\0';
  }
  *(ulong *)(param_3 + 400) = CONCAT26(uStack_12a,CONCAT24(uStack_12c,local_130));
  *(undefined8 *)(param_3 + 0x198) = local_128;
  return;
}

