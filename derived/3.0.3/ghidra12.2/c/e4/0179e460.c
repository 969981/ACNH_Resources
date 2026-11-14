
void FUN_0179e460(long param_1,undefined8 param_2,undefined1 *param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined4 uVar19;
  char *pcVar20;
  ulong *__dest;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined8 local_1f8;
  float local_1f0;
  undefined4 uStack_1ec;
  float local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined1 *local_1c8;
  ulong *local_1c0;
  int local_1b8;
  ulong local_1b4;
  char acStack_1ac [8];
  undefined1 local_1a4;
  undefined1 local_1a3;
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
  
  puVar4 = PTR_DAT_04bb2720;
  lVar14 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar14 == 0) {
    fVar22 = 4.0;
    uVar21 = 1;
    uVar18 = 4;
  }
  else {
    iVar9 = *(int *)(lVar14 + 0xe48);
    if (iVar9 == 0x14) {
      uVar21 = *(uint *)(lVar14 + 0xf64);
    }
    else if (iVar9 == 1) {
      uVar21 = 0;
    }
    else if ((iVar9 < 2) || (5 < iVar9)) {
      if ((iVar9 < 6) || (0x10 < iVar9)) {
        if ((iVar9 < 0x11) || (0x12 < iVar9)) {
          uVar18 = 1;
          if (iVar9 != 0x14) {
            uVar18 = 2;
          }
          uVar21 = 3;
          if (iVar9 != 0x13) {
            uVar21 = uVar18;
          }
        }
        else {
          uVar21 = 3;
        }
      }
      else {
        uVar21 = 2;
      }
    }
    else {
      uVar21 = 1;
    }
    uVar18 = *(int *)(lVar14 + 0xf64) * 2 + 4;
    fVar22 = (float)(*(int *)(lVar14 + 0xf68) * 2 + 4);
  }
  local_110 = 0x80;
  local_8d = 0;
  local_118 = &local_10c;
  local_120 = &DAT_048fc708;
  if (uVar18 == 6) {
    local_10c = s_RoomMdlOutside6_OUTSIDE__0406246a._0_8_;
    uStack_104 = s_RoomMdlOutside6_OUTSIDE__0406246a._8_8_;
    local_fc = s_RoomMdlOutside6_OUTSIDE__0406246a._16_8_;
    puVar17 = &local_f4;
  }
  else {
    if (uVar18 == 8) {
      pcVar20 = "RoomMdlOutside8/OUTSIDE:";
    }
    else {
      if (uVar18 == 10) {
        local_f4 = 0x3a;
        local_10c = s_RoomMdlOutside10_OUTSIDE__040bb316._0_8_;
        uStack_104 = s_RoomMdlOutside10_OUTSIDE__040bb316._8_8_;
        local_fc = s_RoomMdlOutside10_OUTSIDE__040bb316._16_8_;
        puVar17 = local_f3;
        goto LAB_0179e63c;
      }
      pcVar20 = "RoomMdlOutside4/OUTSIDE:";
    }
    local_10c = *(ulong *)pcVar20;
    uStack_104 = *(ulong *)((long)pcVar20 + 8);
    local_fc = *(ulong *)((long)pcVar20 + 0x10);
    puVar17 = &local_f4;
  }
LAB_0179e63c:
  fVar22 = 160.0 - fVar22 * 5.0;
  *puVar17 = 0;
  fVar23 = (160.0 - (float)uVar18 * 5.0) + 10.0;
  local_1f8 = 0x800000000;
  uStack_1ec = 0;
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
  local_1f0 = fVar23;
  local_1e8 = fVar22;
  if ((param_4 & 1) == 0) {
    if (1 < uVar18) {
      local_1a3 = 0;
      local_1a4 = 0x3a;
      local_1e0 = 0;
      local_1dc = 0x200000000;
      local_1b4 = s_RoomMdlWall_WALL__0407220a._0_8_;
      acStack_1ac = (char  [8])s_RoomMdlWall_WALL__0407220a._8_8_;
      FUN_0179eea0(param_1,param_2,&local_1f8);
      if (3 < uVar18) {
        iVar9 = (uVar18 >> 1) - 1;
        do {
          puVar5 = local_1c0;
          fVar23 = fVar23 + 20.0;
          uStack_1ec = 0;
          local_1e0 = 0;
          local_1f0 = fVar23;
          local_1e8 = fVar22;
          if (local_1c0 != (ulong *)"RoomMdlWall/WALL:") {
            iVar10 = 0x11;
            if (local_1b8 < 0x12) {
              iVar10 = local_1b8 + -1;
            }
            memcpy(local_1c0,"RoomMdlWall/WALL:",(long)iVar10);
            *(char *)((long)puVar5 + (long)iVar10) = '\0';
          }
          iVar9 = iVar9 + -1;
          uVar13 = 4;
          if (iVar9 != 0) {
            uVar13 = 2;
          }
          uVar12 = 6;
          if (iVar9 != 0) {
            uVar12 = 4;
          }
          local_1dc = CONCAT44(uVar12,uVar13);
          FUN_0179eea0(param_1,param_2,&local_1f8);
        } while (iVar9 != 0);
      }
    }
  }
  else if ((1 < uVar18) && (uVar21 < 4)) {
    uVar3 = uVar18 >> 1;
    switch(uVar21) {
    case 0:
      uVar18 = 0;
      do {
        fVar23 = fVar23 + 10.0;
        lVar14 = *(long *)puVar4;
        uStack_1ec = 0;
        local_1e0 = 0;
        local_1f0 = fVar23;
        local_1e8 = fVar22;
        if ((lVar14 == 0) || (*(long *)(lVar14 + 0x330) == 0)) {
LAB_0179eaa4:
          if (local_1c0 != (ulong *)"RoomMdlEntranceNml4m/ENTRANCE:") {
            pcVar20 = "RoomMdlEntranceNml4m/ENTRANCE:";
            bVar7 = SBORROW4(local_1b8,0x1e);
            iVar9 = local_1b8 + -0x1e;
            bVar8 = local_1b8 == 0x1e;
            iVar10 = 0x1e;
LAB_0179eac8:
            puVar5 = local_1c0;
            if (bVar8 || iVar9 < 0 != bVar7) {
              iVar10 = local_1b8 + -1;
            }
            memcpy(local_1c0,pcVar20,(long)iVar10);
            *(char *)((long)puVar5 + (long)iVar10) = '\0';
          }
        }
        else {
          puVar11 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(lVar14 + 0x338));
          iVar9 = FUN_006bd550(*puVar11,0);
          if (((iVar9 != 0x758f7eaf) ||
              ((lVar14 = *(long *)puVar4, lVar14 == 0 ||
               (lVar14 = *(long *)(lVar14 + 0x330), lVar14 == 0)))) ||
             (*(int *)(lVar14 + 0x248) == 0)) goto LAB_0179eaa4;
          if (local_1c0 != (ulong *)"RoomMdlEntranceDown4m/ENTRANCE:") {
            pcVar20 = "RoomMdlEntranceDown4m/ENTRANCE:";
            bVar7 = SBORROW4(local_1b8,0x1f);
            iVar9 = local_1b8 + -0x1f;
            bVar8 = local_1b8 == 0x1f;
            iVar10 = 0x1f;
            goto LAB_0179eac8;
          }
        }
        local_1dc = 0x300000000;
        FUN_0179eea0(param_1,param_2,&local_1f8);
        fVar23 = fVar23 + 20.0;
        uVar18 = uVar18 + 2;
      } while (uVar18 < uVar3);
      break;
    default:
      local_1a3 = 0;
      uVar2 = uVar3;
      if (uVar3 < 2) {
        uVar2 = 1;
      }
      local_1a4 = 0x3a;
      local_1b4 = s_RoomMdlWall_WALL__0407220a._0_8_;
      acStack_1ac = (char  [8])s_RoomMdlWall_WALL__0407220a._8_8_;
      local_1e0 = 0;
      local_1dc = 0x200000000;
      FUN_0179eea0(param_1,param_2,&local_1f8);
      if (3 < uVar18) {
        iVar9 = 0;
        do {
          fVar23 = fVar23 + 20.0;
          local_1f0 = fVar23;
          if (iVar9 == 0) {
            if (uVar21 != 1) goto LAB_0179ee28;
LAB_0179ed80:
            uStack_1ec = 0;
            lVar14 = *(long *)PTR_DAT_04bb2720;
            local_1e0 = 0;
            local_1e8 = fVar22;
            if ((lVar14 == 0) || (*(long *)(lVar14 + 0x330) == 0)) {
LAB_0179ee60:
              if (local_1c0 != (ulong *)"RoomMdlEntranceNml2m/ENTRANCE:") {
                pcVar20 = "RoomMdlEntranceNml2m/ENTRANCE:";
                iVar16 = local_1b8 + -1;
                bVar6 = SBORROW4(local_1b8,0x1e);
                bVar8 = local_1b8 + -0x1e < 0;
                bVar7 = local_1b8 == 0x1e;
                iVar10 = 0x1e;
                goto LAB_0179ed14;
              }
            }
            else {
              puVar11 = (undefined8 *)
                        (**(code **)(*DAT_05aed668 + 0x18))
                                  (DAT_05aed668,*(undefined4 *)(lVar14 + 0x338));
              iVar10 = FUN_006bd550(*puVar11,0);
              if ((iVar10 != 0x758f7eaf) ||
                 (((DAT_05aed670 == 0 || (*(long *)(DAT_05aed670 + 0x330) == 0)) ||
                  (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x248) == 0)))) goto LAB_0179ee60;
              if (local_1c0 != (ulong *)"RoomMdlEntranceDown2m/ENTRANCE:") {
                pcVar20 = "RoomMdlEntranceDown2m/ENTRANCE:";
                iVar16 = local_1b8 + -1;
                bVar6 = SBORROW4(local_1b8,0x1f);
                bVar8 = local_1b8 + -0x1f < 0;
                bVar7 = local_1b8 == 0x1f;
                iVar10 = 0x1f;
                goto LAB_0179ed14;
              }
            }
          }
          else {
            if ((iVar9 == 1) && (uVar21 == 3)) goto LAB_0179ed80;
LAB_0179ee28:
            uStack_1ec = 0;
            local_1e0 = 0;
            local_1e8 = fVar22;
            if (local_1c0 == (ulong *)"RoomMdlWall/WALL:") goto LAB_0179ed2c;
            pcVar20 = "RoomMdlWall/WALL:";
            iVar16 = local_1b8 + -1;
            bVar6 = SBORROW4(local_1b8,0x11);
            bVar8 = local_1b8 + -0x11 < 0;
            bVar7 = local_1b8 == 0x11;
            iVar10 = 0x11;
LAB_0179ed14:
            puVar5 = local_1c0;
            if (bVar7 || bVar8 != bVar6) {
              iVar10 = iVar16;
            }
            memcpy(local_1c0,pcVar20,(long)iVar10);
            *(char *)((long)puVar5 + (long)iVar10) = '\0';
          }
LAB_0179ed2c:
          bVar8 = uVar3 - 2 != iVar9;
          uVar13 = 4;
          if (bVar8) {
            uVar13 = 2;
          }
          uVar12 = 6;
          if (bVar8) {
            uVar12 = 4;
          }
          local_1dc = CONCAT44(uVar12,uVar13);
          FUN_0179eea0(param_1,param_2,&local_1f8);
          iVar9 = iVar9 + 1;
        } while (uVar2 - 1 != iVar9);
      }
      break;
    case 2:
      uVar13 = 4;
      if (uVar3 != 2) {
        uVar13 = 2;
      }
      uVar18 = 0;
      uVar12 = 5;
      if (uVar3 != 2) {
        uVar12 = 3;
      }
      do {
        puVar5 = local_1c0;
        if (uVar18 == 1) {
          fVar23 = fVar23 + 10.0;
          uStack_1ec = 0;
          local_1e0 = 0;
          local_1f0 = fVar23;
          local_1e8 = fVar22;
          if (local_1c0 != (ulong *)"RoomMdlEntranceNml4m/ENTRANCE:") {
            iVar9 = 0x1e;
            if (local_1b8 < 0x1f) {
              iVar9 = local_1b8 + -1;
            }
            memcpy(local_1c0,"RoomMdlEntranceNml4m/ENTRANCE:",(long)iVar9);
            *(char *)((long)puVar5 + (long)iVar9) = '\0';
          }
          local_1dc = CONCAT44(uVar12,uVar13);
          FUN_0179eea0(param_1,param_2,&local_1f8);
          fVar23 = fVar23 + 10.0;
          uVar18 = 2;
        }
        else {
          uStack_1ec = 0;
          local_1e0 = 0;
          local_1f0 = fVar23;
          local_1e8 = fVar22;
          if (local_1c0 != (ulong *)"RoomMdlWall/WALL:") {
            iVar9 = 0x11;
            if (local_1b8 < 0x12) {
              iVar9 = local_1b8 + -1;
            }
            memcpy(local_1c0,"RoomMdlWall/WALL:",(long)iVar9);
            *(char *)((long)puVar5 + (long)iVar9) = '\0';
          }
          bVar8 = uVar18 != uVar3 - 1;
          uVar19 = 4;
          if (bVar8) {
            uVar19 = 2;
          }
          uVar15 = 6;
          if (bVar8) {
            uVar15 = 4;
          }
          uVar1 = 0;
          if (uVar18 != 0) {
            uVar1 = uVar19;
          }
          uVar19 = 2;
          if (uVar18 != 0) {
            uVar19 = uVar15;
          }
          local_1dc = CONCAT44(uVar19,uVar1);
          FUN_0179eea0(param_1,param_2,&local_1f8);
        }
        fVar23 = fVar23 + 20.0;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar3);
    }
  }
  puVar5 = local_1c0;
  local_1f0 = 160.0;
  uStack_1ec = 0;
  local_1e0 = 0x80000000;
  local_1e8 = fVar22;
  if (local_1c0 != local_118) {
    lVar14 = 0;
    do {
      if (*(char *)((long)local_118 + lVar14) == '\0') goto LAB_0179e818;
      if (*(char *)((long)local_118 + lVar14 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_0179e818;
      }
      if (*(char *)((long)local_118 + lVar14 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_0179e818;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_0179e818:
    iVar9 = (int)lVar14;
    if (local_1b8 <= (int)lVar14) {
      iVar9 = local_1b8 + -1;
    }
    memcpy(local_1c0,local_118,(long)iVar9);
    *(char *)((long)puVar5 + (long)iVar9) = '\0';
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
  *(ulong *)(param_3 + 0xd4) = CONCAT44(local_1e8,uStack_1ec);
  *(undefined4 *)(param_3 + 0xe0) = local_1e0;
  *(undefined4 *)(param_3 + 0xdc) = uStack_1e4;
  *(undefined8 *)(param_3 + 0xec) = local_1d4;
  *(undefined8 *)(param_3 + 0xe4) = local_1dc;
  (**(code **)(local_1c8 + 0x18))(&local_1c8);
  puVar5 = local_1c0;
  if (__dest != local_1c0) {
    (**(code **)(local_1c8 + 0x18))(&local_1c8);
    lVar14 = 0;
    do {
      if (*(char *)((long)local_1c0 + lVar14) == '\0') goto LAB_0179e92c;
      if (*(char *)((long)local_1c0 + lVar14 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_0179e92c;
      }
      if (*(char *)((long)local_1c0 + lVar14 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_0179e92c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_0179e92c:
    iVar9 = (int)lVar14;
    if (*(int *)(param_3 + 0x108) <= (int)lVar14) {
      iVar9 = *(int *)(param_3 + 0x108) + -1;
    }
    memcpy(__dest,puVar5,(long)iVar9);
    *(char *)((long)__dest + (long)iVar9) = '\0';
  }
  *(ulong *)(param_3 + 400) = CONCAT26(uStack_12a,CONCAT24(uStack_12c,local_130));
  *(undefined8 *)(param_3 + 0x198) = local_128;
  return;
}

