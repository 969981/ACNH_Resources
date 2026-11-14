
void FUN_017839b0(long *param_1,undefined8 param_2,undefined4 *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  void *__src;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  long *plVar10;
  char *pcVar11;
  ulong uVar12;
  int iVar13;
  uint *puVar14;
  long lVar15;
  char cVar16;
  char *pcVar17;
  uint *puVar18;
  int *piVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  char *pcVar23;
  void *__dest;
  undefined *local_420;
  char *local_418;
  int local_410;
  char local_40c [127];
  undefined1 local_38d;
  undefined *local_388;
  char *local_380;
  int local_378;
  char local_374 [127];
  undefined1 local_2f5;
  undefined *local_2f0;
  char *local_2e8;
  undefined *local_2e0;
  char *local_2d8;
  int local_2d0;
  char local_2cc [127];
  undefined1 local_24d;
  undefined *local_248;
  char *local_240;
  int local_238;
  char local_234 [127];
  undefined1 local_1b5;
  undefined *local_1b0;
  char *local_1a8;
  int local_1a0;
  char local_19c [127];
  undefined1 local_11d;
  undefined *local_118;
  char *local_110;
  int local_108;
  char local_104 [127];
  undefined1 local_85;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_70 = 0;
  local_80 = PTR_DAT_04bc0510 + 0x10;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar1 != 0) {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar20 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar20 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_3);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar20 + 0x1d8)) &&
         (lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar6 * 8), lVar20 != 0)) {
        local_70 = lVar20;
      }
    }
  }
  uVar6 = FUN_01b01f10(&local_80);
  puVar2 = PTR_DAT_04bbe400;
  puVar1 = PTR_DAT_04bbe3f8;
  if (((uVar6 ^ 0xffffffff) & 0xffff) == 0) {
    return;
  }
  uVar22 = uVar6 & 0xffff;
  lVar20 = *(long *)PTR_DAT_04bb46d0;
  uVar8 = uVar22 - *(ushort *)(lVar20 + 0x400);
  if (*(uint *)(lVar20 + 0x3e0) <= uVar8) {
    return;
  }
  puVar14 = *(uint **)(*(long *)(lVar20 + 1000) + (long)(int)uVar8 * 8);
  if (puVar14 == (uint *)0x0) {
    return;
  }
  if (*puVar14 != 0) {
    cVar16 = *PTR_DAT_04bbe3f8;
    do {
      if (cVar16 == '\0') {
        cVar16 = '\x01';
        *(undefined8 *)puVar2 = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
        *(undefined4 *)(puVar2 + 0x38) = 0xffffffff;
        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar2 + 0x30);
        if (-1 < (int)uVar8) {
          pcVar17 = (char *)((ulong)uVar8 + (long)puVar14);
          goto LAB_01783bac;
        }
        if (uVar8 != 0xffffffff) break;
      }
      puVar18 = (uint *)(ulong)*puVar14;
      pcVar17 = (char *)0x0;
      if ((*puVar14 == 0) || (puVar14 == puVar18)) goto LAB_01783bac;
      lVar20 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar18)) != '\0') {
        lVar20 = 0x1c;
      }
      lVar20 = (long)puVar14 + (lVar20 - (long)puVar18);
      if (lVar20 == 0) break;
      uVar12 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar18));
      *(undefined4 *)(puVar2 + 0x30) = 0xfffffffe;
      pcVar17 = (char *)0x0;
      if (uVar12 == 0) goto LAB_01783bac;
      piVar19 = (int *)(lVar20 + 4);
      while (piVar19[-1] != 0x4b9c4229) {
        piVar19 = piVar19 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          pcVar17 = (char *)0x0;
          goto LAB_01783bac;
        }
      }
      iVar7 = 0;
      if (*piVar19 != -1) {
        iVar7 = *piVar19;
      }
      *(int *)(puVar2 + 0x30) = iVar7;
    } while (*puVar14 != 0);
  }
  pcVar17 = (char *)0x0;
LAB_01783bac:
  pcVar23 = *(char **)PTR_PTR_04bbe3f0;
  if (pcVar17 != (char *)0x0) {
    pcVar23 = pcVar17;
  }
  if (pcVar23 == (char *)0x0) {
    return;
  }
  iVar7 = FUN_01783420(param_3);
  if (iVar7 != 0) {
    lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,0);
    *(undefined2 *)(lVar20 + 0x11f4) = *(undefined2 *)param_3;
    *(undefined1 *)(lVar20 + 0x11f6) = *(undefined1 *)((long)param_3 + 2);
    *(undefined1 *)(lVar20 + 0x11f7) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(lVar20 + 0x11f8) = param_3[1];
    if ((param_4 & 1) != 0) {
      lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,0);
      *(undefined1 *)(lVar20 + 0x1298) = 1;
    }
    uVar8 = FUN_01783420(param_3);
    if (1 < uVar8) {
      lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,1);
      *(undefined2 *)(lVar20 + 0x11f4) = *(undefined2 *)param_3;
      *(undefined1 *)(lVar20 + 0x11f6) = *(undefined1 *)((long)param_3 + 2);
      *(undefined1 *)(lVar20 + 0x11f7) = *(undefined1 *)((long)param_3 + 3);
      *(undefined4 *)(lVar20 + 0x11f8) = param_3[1];
      if ((param_4 & 1) != 0) {
        lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,1);
        *(undefined1 *)(lVar20 + 0x1298) = 1;
      }
      uVar8 = FUN_01783420(param_3);
      if (2 < uVar8) {
        lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,2);
        *(undefined2 *)(lVar20 + 0x11f4) = *(undefined2 *)param_3;
        *(undefined1 *)(lVar20 + 0x11f6) = *(undefined1 *)((long)param_3 + 2);
        *(undefined1 *)(lVar20 + 0x11f7) = *(undefined1 *)((long)param_3 + 3);
        *(undefined4 *)(lVar20 + 0x11f8) = param_3[1];
        if ((param_4 & 1) != 0) {
          lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,2);
          *(undefined1 *)(lVar20 + 0x1298) = 1;
        }
        uVar8 = FUN_01783420(param_3);
        if (3 < uVar8) {
          lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,3);
          *(undefined2 *)(lVar20 + 0x11f4) = *(undefined2 *)param_3;
          *(undefined1 *)(lVar20 + 0x11f6) = *(undefined1 *)((long)param_3 + 2);
          *(undefined1 *)(lVar20 + 0x11f7) = *(undefined1 *)((long)param_3 + 3);
          *(undefined4 *)(lVar20 + 0x11f8) = param_3[1];
          if ((param_4 & 1) != 0) {
            lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,3);
            *(undefined1 *)(lVar20 + 0x1298) = 1;
          }
          uVar8 = FUN_01783420(param_3);
          if (4 < uVar8) {
            lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,4);
            *(undefined2 *)(lVar20 + 0x11f4) = *(undefined2 *)param_3;
            *(undefined1 *)(lVar20 + 0x11f6) = *(undefined1 *)((long)param_3 + 2);
            *(undefined1 *)(lVar20 + 0x11f7) = *(undefined1 *)((long)param_3 + 3);
            *(undefined4 *)(lVar20 + 0x11f8) = param_3[1];
            if ((param_4 & 1) != 0) {
              lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,4);
              *(undefined1 *)(lVar20 + 0x1298) = 1;
            }
            FUN_01783420(param_3);
          }
        }
      }
    }
  }
  local_108 = 0x80;
  local_85 = 0;
  puVar1 = PTR_DAT_04bb2e90 + 0x10;
  local_118 = puVar1;
  local_110 = local_104;
  (**(code **)(DAT_0528cdd0 + 0x18))(&DAT_0528cdd0);
  pcVar17 = DAT_0528cdd8;
  if (local_104 != DAT_0528cdd8) {
    (**(code **)(DAT_0528cdd0 + 0x18))(&DAT_0528cdd0);
    lVar20 = 0;
    do {
      if (DAT_0528cdd8[lVar20] == '\0') goto LAB_01783eac;
      if (DAT_0528cdd8[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_01783eac;
      }
      if (DAT_0528cdd8[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_01783eac;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_01783eac:
    iVar7 = (int)lVar20;
    if (local_108 <= (int)lVar20) {
      iVar7 = local_108 + -1;
    }
    memcpy(local_104,pcVar17,(long)iVar7);
    local_104[iVar7] = '\0';
  }
  local_11d = 0;
  local_1a0 = 0x80;
  puVar2 = PTR_DAT_04bb2d88 + 0x10;
  local_1b0 = puVar1;
  local_1a8 = local_19c;
  local_118 = puVar2;
  (**(code **)(DAT_0528cdd0 + 0x18))(&DAT_0528cdd0);
  pcVar17 = DAT_0528cdd8;
  puVar1 = PTR_DAT_04bb46d0;
  if (local_19c != DAT_0528cdd8) {
    (**(code **)(DAT_0528cdd0 + 0x18))(&DAT_0528cdd0);
    lVar20 = 0;
    do {
      if (DAT_0528cdd8[lVar20] == '\0') goto LAB_01783f7c;
      if (DAT_0528cdd8[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_01783f7c;
      }
      if (DAT_0528cdd8[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_01783f7c;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_01783f7c:
    iVar7 = (int)lVar20;
    if (local_1a0 <= (int)lVar20) {
      iVar7 = local_1a0 + -1;
    }
    memcpy(local_19c,pcVar17,(long)iVar7);
    local_19c[iVar7] = '\0';
  }
  local_240 = local_234;
  local_2d8 = local_2cc;
  local_1b5 = 0;
  local_238 = 0x80;
  local_234[0] = '\0';
  local_2d0 = 0x80;
  local_24d = 0;
  local_2cc[0] = '\0';
  local_2e0 = puVar2;
  local_248 = puVar2;
  local_1b0 = puVar2;
  uVar9 = FUN_017c1ba0(*(undefined8 *)puVar1,uVar6,1);
  pcVar17 = local_240;
  local_388 = (undefined *)CONCAT44(local_388._4_4_,uVar9);
  switch(uVar9) {
  case 0:
LAB_017840b4:
    *pcVar17 = '\0';
    break;
  case 1:
    if (local_240 != "RoomMdlWindowWallSquare2m") {
      pcVar11 = "RoomMdlWindowWallSquare2m";
LAB_01784060:
      bVar4 = SBORROW4(local_238,0x19);
      iVar7 = local_238 + -0x19;
      bVar5 = local_238 == 0x19;
      iVar13 = 0x19;
LAB_0178409c:
      if (bVar5 || iVar7 < 0 != bVar4) {
        iVar13 = local_238 + -1;
      }
      memcpy(local_240,pcVar11,(long)iVar13);
      pcVar17 = pcVar17 + iVar13;
      goto LAB_017840b4;
    }
    break;
  case 2:
    if (local_240 != "RoomMdlWindowWallCircle2m") {
      pcVar11 = "RoomMdlWindowWallCircle2m";
      goto LAB_01784060;
    }
    break;
  case 3:
    if (local_240 != "RoomMdlWindowWallArch2m") {
      pcVar11 = "RoomMdlWindowWallArch2m";
      bVar4 = SBORROW4(local_238,0x17);
      iVar7 = local_238 + -0x17;
      bVar5 = local_238 == 0x17;
      iVar13 = 0x17;
      goto LAB_0178409c;
    }
  }
  pcVar17 = local_2d8;
  (**(code **)(local_248 + 0x18))(&local_248);
  pcVar11 = local_240;
  if (pcVar17 != local_240) {
    (**(code **)(local_248 + 0x18))(&local_248);
    lVar20 = 0;
    do {
      if (local_240[lVar20] == '\0') goto LAB_0178412c;
      if (local_240[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_0178412c;
      }
      if (local_240[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_0178412c;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_0178412c:
    iVar7 = (int)lVar20;
    if (local_2d0 <= (int)lVar20) {
      iVar7 = local_2d0 + -1;
    }
    memcpy(pcVar17,pcVar11,(long)iVar7);
    pcVar17[iVar7] = '\0';
    pcVar17 = local_240;
  }
  if (*pcVar17 == '\0') {
    (**(code **)(local_118 + 0x18))(&local_118);
    pcVar11 = local_110;
    if (pcVar17 != local_110) {
      (**(code **)(local_118 + 0x18))(&local_118);
      lVar20 = 0;
      do {
        if (local_110[lVar20] == '\0') goto LAB_017841dc;
        if (local_110[lVar20 + 1] == '\0') {
          lVar20 = lVar20 + 1;
          goto LAB_017841dc;
        }
        if (local_110[lVar20 + 2] == '\0') {
          lVar20 = lVar20 + 2;
          goto LAB_017841dc;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      lVar20 = 0;
LAB_017841dc:
      iVar7 = (int)lVar20;
      if (local_238 <= (int)lVar20) {
        iVar7 = local_238 + -1;
      }
      memcpy(pcVar17,pcVar11,(long)iVar7);
      pcVar17[iVar7] = '\0';
    }
    pcVar17 = local_2d8;
    (**(code **)(local_1b0 + 0x18))(&local_1b0);
    pcVar11 = local_1a8;
    if (pcVar17 != local_1a8) {
      (**(code **)(local_1b0 + 0x18))(&local_1b0);
      lVar20 = 0;
      do {
        if (local_1a8[lVar20] == '\0') goto LAB_0178427c;
        if (local_1a8[lVar20 + 1] == '\0') {
          lVar20 = lVar20 + 1;
          goto LAB_0178427c;
        }
        if (local_1a8[lVar20 + 2] == '\0') {
          lVar20 = lVar20 + 2;
          goto LAB_0178427c;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      lVar20 = 0;
LAB_0178427c:
      iVar7 = (int)lVar20;
      if (local_2d0 <= (int)lVar20) {
        iVar7 = local_2d0 + -1;
      }
      memcpy(pcVar17,pcVar11,(long)iVar7);
      pcVar17[iVar7] = '\0';
    }
    uVar9 = 1;
  }
  else {
    uVar9 = 2;
  }
  lVar20 = 0;
  local_2f0 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (pcVar23[lVar20] == '\0') goto LAB_017842fc;
    if (pcVar23[lVar20 + 1] == '\0') {
      lVar20 = lVar20 + 1;
      goto LAB_017842fc;
    }
    if (pcVar23[lVar20 + 2] == '\0') {
      lVar20 = lVar20 + 2;
      goto LAB_017842fc;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  lVar20 = 0;
LAB_017842fc:
  local_2e8 = pcVar23;
  (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
  lVar15 = 0;
  do {
    iVar7 = (int)lVar20;
    if (DAT_0528d028[lVar15] == '\0') {
LAB_0178435c:
      iVar13 = (int)lVar15;
      if (iVar7 < iVar13) goto LAB_01784664;
      if (iVar13 < 1) goto LAB_017843d8;
      uVar12 = 0;
      goto LAB_01784378;
    }
    if (DAT_0528d028[lVar15 + 1] == '\0') {
      lVar15 = lVar15 + 1;
      goto LAB_0178435c;
    }
    if (DAT_0528d028[lVar15 + 2] == '\0') {
      lVar15 = lVar15 + 2;
      goto LAB_0178435c;
    }
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
  if (-1 < iVar7) {
LAB_017843d8:
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
LAB_017843f4:
    pcVar23 = local_110;
    (**(code **)(local_2f0 + 0x18))(&local_2f0);
    pcVar17 = local_2e8;
    if (pcVar23 != local_2e8) {
      (**(code **)(local_2f0 + 0x18))(&local_2f0);
      lVar20 = 0;
      do {
        if (local_2e8[lVar20] == '\0') goto LAB_0178446c;
        if (local_2e8[lVar20 + 1] == '\0') {
          lVar20 = lVar20 + 1;
          goto LAB_0178446c;
        }
        if (local_2e8[lVar20 + 2] == '\0') {
          lVar20 = lVar20 + 2;
          goto LAB_0178446c;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      lVar20 = 0;
LAB_0178446c:
      iVar7 = (int)lVar20;
      if (local_108 <= (int)lVar20) {
        iVar7 = local_108 + -1;
      }
      memcpy(pcVar23,pcVar17,(long)iVar7);
      pcVar23[iVar7] = '\0';
    }
    iVar7 = local_1a0;
    pcVar17 = local_1a8;
    local_388 = (undefined *)((ulong)local_388 & 0xffffffffffffff00);
    (**(code **)(local_1b0 + 0x18))(&local_1b0);
    pcVar23 = local_1a8;
    (**(code **)(local_1b0 + 0x18))(&local_1b0);
    lVar20 = 0;
    do {
      if (local_1a8[lVar20] == '\0') goto LAB_0178450c;
      if (local_1a8[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_0178450c;
      }
      if (local_1a8[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_0178450c;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_0178450c:
    FUN_038d0770(pcVar17,0,iVar7,pcVar23,lVar20,&DAT_0528ccc0,&local_2f0,&local_388);
    pcVar23 = local_240;
    (**(code **)(local_2f0 + 0x18))(&local_2f0);
    pcVar17 = local_2e8;
    if (pcVar23 != local_2e8) {
      (**(code **)(local_2f0 + 0x18))(&local_2f0);
      lVar20 = 0;
      do {
        if (local_2e8[lVar20] == '\0') goto LAB_017845ac;
        if (local_2e8[lVar20 + 1] == '\0') {
          lVar20 = lVar20 + 1;
          goto LAB_017845ac;
        }
        if (local_2e8[lVar20 + 2] == '\0') {
          lVar20 = lVar20 + 2;
          goto LAB_017845ac;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      lVar20 = 0;
LAB_017845ac:
      iVar7 = (int)lVar20;
      if (local_238 <= (int)lVar20) {
        iVar7 = local_238 + -1;
      }
      memcpy(pcVar23,pcVar17,(long)iVar7);
      pcVar23[iVar7] = '\0';
    }
    iVar7 = local_2d0;
    pcVar17 = local_2d8;
    local_388 = (undefined *)((ulong)local_388 & 0xffffffffffffff00);
    (**(code **)(local_2e0 + 0x18))(&local_2e0);
    pcVar23 = local_2d8;
    (**(code **)(local_2e0 + 0x18))(&local_2e0);
    lVar20 = 0;
    do {
      if (local_2d8[lVar20] == '\0') goto LAB_01784640;
      if (local_2d8[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_01784640;
      }
      if (local_2d8[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_01784640;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_01784640:
    FUN_038d0770(pcVar17,0,iVar7,pcVar23,lVar20,&DAT_0528ccc0,&local_2f0,&local_388);
  }
  goto LAB_01784664;
  while( true ) {
    pcVar23 = DAT_0528d028;
    lVar20 = lVar15;
    while( true ) {
      lVar20 = lVar20 + -1;
      if (pcVar17[uVar12] != *pcVar23) break;
      if ((pcVar17[uVar12] == '\0') || (pcVar17 = pcVar17 + 1, pcVar23 = pcVar23 + 1, lVar20 == 0))
      goto LAB_017843ec;
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == (iVar7 - iVar13) + 1) break;
LAB_01784378:
    pcVar17 = local_2e8;
    pcVar23 = local_2e8 + uVar12;
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
    if (pcVar23 == DAT_0528d028) {
LAB_017843ec:
      if ((int)uVar12 != -1) goto LAB_017843f4;
      break;
    }
  }
LAB_01784664:
  lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,0);
  local_2f5 = 0;
  local_378 = 0x80;
  puVar1 = PTR_DAT_04bb2e90 + 0x10;
  local_388 = puVar1;
  local_380 = local_374;
  (**(code **)(DAT_0528cfd0 + 0x18))(&DAT_0528cfd0);
  pcVar17 = DAT_0528cfd8;
  if (local_374 != DAT_0528cfd8) {
    (**(code **)(DAT_0528cfd0 + 0x18))(&DAT_0528cfd0);
    lVar15 = 0;
    do {
      if (DAT_0528cfd8[lVar15] == '\0') goto LAB_0178471c;
      if (DAT_0528cfd8[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_0178471c;
      }
      if (DAT_0528cfd8[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_0178471c;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_0178471c:
    iVar7 = (int)lVar15;
    if (local_378 <= (int)lVar15) {
      iVar7 = local_378 + -1;
    }
    memcpy(local_374,pcVar17,(long)iVar7);
    local_374[iVar7] = '\0';
  }
  local_38d = 0;
  local_410 = 0x80;
  puVar2 = PTR_DAT_04bb2d88 + 0x10;
  local_420 = puVar1;
  local_418 = local_40c;
  local_388 = puVar2;
  (**(code **)(DAT_0528ce60 + 0x18))(&DAT_0528ce60);
  pcVar17 = DAT_0528ce68;
  if (local_40c != DAT_0528ce68) {
    (**(code **)(DAT_0528ce60 + 0x18))(&DAT_0528ce60);
    lVar15 = 0;
    do {
      if (DAT_0528ce68[lVar15] == '\0') goto LAB_017847e0;
      if (DAT_0528ce68[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_017847e0;
      }
      if (DAT_0528ce68[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_017847e0;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_017847e0:
    iVar7 = (int)lVar15;
    if (local_410 <= (int)lVar15) {
      iVar7 = local_410 + -1;
    }
    memcpy(local_40c,pcVar17,(long)iVar7);
    local_40c[iVar7] = '\0';
  }
  pcVar23 = *(char **)(lVar20 + 0x280);
  *(undefined4 *)(lVar20 + 0x11f0) = 5;
  local_420 = puVar2;
  (**(code **)(local_388 + 0x18))(&local_388);
  pcVar17 = local_380;
  puVar1 = PTR_DAT_04bb46d0;
  if (pcVar23 != local_380) {
    (**(code **)(local_388 + 0x18))(&local_388);
    lVar15 = 0;
    do {
      if (local_380[lVar15] == '\0') goto LAB_0178489c;
      if (local_380[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_0178489c;
      }
      if (local_380[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_0178489c;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_0178489c:
    iVar7 = (int)lVar15;
    if (*(int *)(lVar20 + 0x288) <= (int)lVar15) {
      iVar7 = *(int *)(lVar20 + 0x288) + -1;
    }
    memcpy(pcVar23,pcVar17,(long)iVar7);
    pcVar23[iVar7] = '\0';
  }
  *(undefined4 *)(lVar20 + 0x10d8) = 0;
  pcVar23 = *(char **)(lVar20 + 0xf90);
  (**(code **)(local_420 + 0x18))(&local_420);
  pcVar17 = local_418;
  if (pcVar23 != local_418) {
    (**(code **)(local_420 + 0x18))(&local_420);
    lVar15 = 0;
    do {
      if (local_418[lVar15] == '\0') goto LAB_0178493c;
      if (local_418[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_0178493c;
      }
      if (local_418[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_0178493c;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_0178493c:
    iVar7 = (int)lVar15;
    if (*(int *)(lVar20 + 0xf98) <= (int)lVar15) {
      iVar7 = *(int *)(lVar20 + 0xf98) + -1;
    }
    memcpy(pcVar23,pcVar17,(long)iVar7);
    pcVar23[iVar7] = '\0';
  }
  lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,1);
  *(undefined4 *)(lVar20 + 0x11f0) = uVar9;
  pcVar23 = *(char **)(lVar20 + 0x280);
  (**(code **)(local_248 + 0x18))(&local_248);
  pcVar17 = local_240;
  if (pcVar23 != local_240) {
    (**(code **)(local_248 + 0x18))(&local_248);
    lVar15 = 0;
    do {
      if (local_240[lVar15] == '\0') goto LAB_017849fc;
      if (local_240[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_017849fc;
      }
      if (local_240[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_017849fc;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_017849fc:
    iVar7 = (int)lVar15;
    if (*(int *)(lVar20 + 0x288) <= (int)lVar15) {
      iVar7 = *(int *)(lVar20 + 0x288) + -1;
    }
    memcpy(pcVar23,pcVar17,(long)iVar7);
    pcVar23[iVar7] = '\0';
  }
  *(undefined4 *)(lVar20 + 0x10d8) = 0;
  pcVar23 = *(char **)(lVar20 + 0xf90);
  (**(code **)(local_2e0 + 0x18))(&local_2e0);
  pcVar17 = local_2d8;
  if (pcVar23 != local_2d8) {
    (**(code **)(local_2e0 + 0x18))(&local_2e0);
    lVar15 = 0;
    do {
      if (local_2d8[lVar15] == '\0') goto LAB_01784a9c;
      if (local_2d8[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_01784a9c;
      }
      if (local_2d8[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_01784a9c;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_01784a9c:
    iVar7 = (int)lVar15;
    if (*(int *)(lVar20 + 0xf98) <= (int)lVar15) {
      iVar7 = *(int *)(lVar20 + 0xf98) + -1;
    }
    memcpy(pcVar23,pcVar17,(long)iVar7);
    pcVar23[iVar7] = '\0';
  }
  lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,2);
  pcVar23 = *(char **)(lVar20 + 0x280);
  *(undefined4 *)(lVar20 + 0x11f0) = 1;
  (**(code **)(local_118 + 0x18))(&local_118);
  pcVar17 = local_110;
  if (pcVar23 != local_110) {
    (**(code **)(local_118 + 0x18))(&local_118);
    lVar15 = 0;
    do {
      if (local_110[lVar15] == '\0') goto LAB_01784b5c;
      if (local_110[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_01784b5c;
      }
      if (local_110[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_01784b5c;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_01784b5c:
    iVar7 = (int)lVar15;
    if (*(int *)(lVar20 + 0x288) <= (int)lVar15) {
      iVar7 = *(int *)(lVar20 + 0x288) + -1;
    }
    memcpy(pcVar23,pcVar17,(long)iVar7);
    pcVar23[iVar7] = '\0';
  }
  *(undefined4 *)(lVar20 + 0x10d8) = 0;
  pcVar23 = *(char **)(lVar20 + 0xf90);
  (**(code **)(local_1b0 + 0x18))(&local_1b0);
  pcVar17 = local_1a8;
  if (pcVar23 != local_1a8) {
    (**(code **)(local_1b0 + 0x18))(&local_1b0);
    lVar15 = 0;
    do {
      if (local_1a8[lVar15] == '\0') goto LAB_01784bfc;
      if (local_1a8[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_01784bfc;
      }
      if (local_1a8[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_01784bfc;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_01784bfc:
    iVar7 = (int)lVar15;
    if (*(int *)(lVar20 + 0xf98) <= (int)lVar15) {
      iVar7 = *(int *)(lVar20 + 0xf98) + -1;
    }
    memcpy(pcVar23,pcVar17,(long)iVar7);
    pcVar23[iVar7] = '\0';
  }
  lVar20 = *(long *)puVar1;
  uVar6 = uVar22 - *(ushort *)(lVar20 + 0x400);
  if (((((uVar6 < *(uint *)(lVar20 + 0x3e0)) &&
        (lVar15 = *(long *)(*(long *)(lVar20 + 1000) + (long)(int)uVar6 * 8), lVar15 != 0)) &&
       (*(long *)(lVar20 + 0x2b8) != 0)) &&
      ((puVar14 = *(uint **)(*(long *)(lVar20 + 0x2b8) + 8), puVar14 != (uint *)0x0 &&
       (*puVar14 != 0)))) && ((uVar6 = puVar14[1], uVar6 != 0 && ((ulong)(ushort)puVar14[2] != 0))))
  {
    lVar3 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar14 + lVar3 + (ulong)(ushort)puVar14[2] * 8;
    if (lVar3 == 0) goto LAB_01784cc4;
    uVar8 = 0;
    if ((ulong)uVar6 != 0) {
      uVar8 = (uint)((ulong)(lVar15 - lVar3) / (ulong)uVar6);
    }
    if (*puVar14 <= uVar8) {
      uVar8 = 0xffffffff;
    }
    uVar12 = (ulong)uVar8;
    if ((0 < *(int *)(lVar20 + 0x3c8)) && (uVar8 < *(uint *)(lVar20 + 0x3d0))) {
      uVar12 = (ulong)*(short *)(*(long *)(lVar20 + 0x3d8) + (long)(int)uVar8 * 2);
    }
  }
  else {
LAB_01784cc4:
    uVar12 = 0xffffffff;
  }
  pcVar17 = (char *)FUN_017c0eb0(lVar20,uVar12,1);
  if (pcVar17 != (char *)0x0) {
    local_2f5 = 0;
    local_378 = 0x80;
    local_374[0] = '\0';
    local_388 = PTR_DAT_04bb2d88 + 0x10;
    local_380 = local_374;
    if (local_374 != pcVar17) {
      lVar20 = 0;
      do {
        if (pcVar17[lVar20] == '\0') {
LAB_01784d4c:
          iVar7 = (int)lVar20;
          if (0x7f < iVar7) {
            iVar7 = 0x7f;
          }
          goto LAB_01784d58;
        }
        if (pcVar17[lVar20 + 1] == '\0') {
          lVar20 = lVar20 + 1;
          goto LAB_01784d4c;
        }
        if (pcVar17[lVar20 + 2] == '\0') {
          lVar20 = lVar20 + 2;
          goto LAB_01784d4c;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      iVar7 = 0;
LAB_01784d58:
      memcpy(local_374,pcVar17,(long)iVar7);
      local_374[iVar7] = '\0';
      pcVar17 = local_380;
    }
    if (*pcVar17 != '\0') {
      lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,3);
      *(undefined4 *)(lVar20 + 0x11f0) = 3;
      pcVar23 = *(char **)(lVar20 + 0x280);
      (**(code **)(local_388 + 0x18))(&local_388);
      pcVar17 = local_380;
      if (pcVar23 != local_380) {
        (**(code **)(local_388 + 0x18))(&local_388);
        lVar15 = 0;
        do {
          if (local_380[lVar15] == '\0') goto LAB_01784e0c;
          if (local_380[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_01784e0c;
          }
          if (local_380[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_01784e0c;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_01784e0c:
        iVar7 = (int)lVar15;
        if (*(int *)(lVar20 + 0x288) <= (int)lVar15) {
          iVar7 = *(int *)(lVar20 + 0x288) + -1;
        }
        memcpy(pcVar23,pcVar17,(long)iVar7);
        pcVar23[iVar7] = '\0';
      }
      *(undefined4 *)(lVar20 + 0x10d8) = 0;
      pcVar23 = *(char **)(lVar20 + 0xf90);
      (**(code **)(local_388 + 0x18))(&local_388);
      pcVar17 = local_380;
      if (pcVar23 != local_380) {
        (**(code **)(local_388 + 0x18))(&local_388);
        lVar15 = 0;
        do {
          if (local_380[lVar15] == '\0') goto LAB_01784eac;
          if (local_380[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_01784eac;
          }
          if (local_380[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_01784eac;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_01784eac:
        iVar7 = (int)lVar15;
        if (*(int *)(lVar20 + 0xf98) <= (int)lVar15) {
          iVar7 = *(int *)(lVar20 + 0xf98) + -1;
        }
        memcpy(pcVar23,pcVar17,(long)iVar7);
        pcVar23[iVar7] = '\0';
      }
    }
  }
  lVar20 = *(long *)puVar1;
  uVar22 = uVar22 - *(ushort *)(lVar20 + 0x400);
  if ((((uVar22 < *(uint *)(lVar20 + 0x3e0)) &&
       (lVar15 = *(long *)(*(long *)(lVar20 + 1000) + (long)(int)uVar22 * 8), lVar15 != 0)) &&
      (*(long *)(lVar20 + 0x2b8) != 0)) &&
     (((puVar14 = *(uint **)(*(long *)(lVar20 + 0x2b8) + 8), puVar14 != (uint *)0x0 &&
       (*puVar14 != 0)) && ((uVar6 = puVar14[1], uVar6 != 0 && ((ulong)(ushort)puVar14[2] != 0))))))
  {
    lVar3 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar14 + lVar3 + (ulong)(ushort)puVar14[2] * 8;
    if (lVar3 != 0) {
      uVar22 = 0;
      if ((ulong)uVar6 != 0) {
        uVar22 = (uint)((ulong)(lVar15 - lVar3) / (ulong)uVar6);
      }
      if (*puVar14 <= uVar22) {
        uVar22 = 0xffffffff;
      }
      if ((0 < *(int *)(lVar20 + 0x3c8)) && (uVar22 < *(uint *)(lVar20 + 0x3d0))) {
        uVar22 = (uint)*(short *)(*(long *)(lVar20 + 0x3d8) + (long)(int)uVar22 * 2);
      }
      goto LAB_01784f78;
    }
  }
  uVar22 = 0xffffffff;
LAB_01784f78:
  pcVar17 = (char *)FUN_017c1150(lVar20,uVar22);
  if (pcVar17 != (char *)0x0) {
    local_2f5 = 0;
    local_378 = 0x80;
    local_374[0] = '\0';
    local_388 = PTR_DAT_04bb2d88 + 0x10;
    local_380 = local_374;
    if (local_374 != pcVar17) {
      lVar20 = 0;
      do {
        if (pcVar17[lVar20] == '\0') {
LAB_01784ffc:
          iVar7 = (int)lVar20;
          if (0x7f < iVar7) {
            iVar7 = 0x7f;
          }
          goto LAB_01785008;
        }
        if (pcVar17[lVar20 + 1] == '\0') {
          lVar20 = lVar20 + 1;
          goto LAB_01784ffc;
        }
        if (pcVar17[lVar20 + 2] == '\0') {
          lVar20 = lVar20 + 2;
          goto LAB_01784ffc;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      iVar7 = 0;
LAB_01785008:
      memcpy(local_374,pcVar17,(long)iVar7);
      local_374[iVar7] = '\0';
      pcVar17 = local_380;
    }
    if (*pcVar17 != '\0') {
      lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,4);
      *(undefined4 *)(lVar20 + 0x11f0) = 4;
      pcVar23 = *(char **)(lVar20 + 0x280);
      (**(code **)(local_388 + 0x18))(&local_388);
      pcVar17 = local_380;
      if (pcVar23 != local_380) {
        (**(code **)(local_388 + 0x18))(&local_388);
        lVar15 = 0;
        do {
          if (local_380[lVar15] == '\0') goto LAB_017850bc;
          if (local_380[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_017850bc;
          }
          if (local_380[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_017850bc;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_017850bc:
        iVar7 = (int)lVar15;
        if (*(int *)(lVar20 + 0x288) <= (int)lVar15) {
          iVar7 = *(int *)(lVar20 + 0x288) + -1;
        }
        memcpy(pcVar23,pcVar17,(long)iVar7);
        pcVar23[iVar7] = '\0';
      }
      *(undefined4 *)(lVar20 + 0x10d8) = 0;
      pcVar23 = *(char **)(lVar20 + 0xf90);
      (**(code **)(local_388 + 0x18))(&local_388);
      pcVar17 = local_380;
      if (pcVar23 != local_380) {
        (**(code **)(local_388 + 0x18))(&local_388);
        lVar15 = 0;
        do {
          if (local_380[lVar15] == '\0') goto LAB_0178515c;
          if (local_380[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_0178515c;
          }
          if (local_380[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_0178515c;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_0178515c:
        iVar7 = (int)lVar15;
        if (*(int *)(lVar20 + 0xf98) <= (int)lVar15) {
          iVar7 = *(int *)(lVar20 + 0xf98) + -1;
        }
        memcpy(pcVar23,pcVar17,(long)iVar7);
        pcVar23[iVar7] = '\0';
      }
      lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,4);
      __dest = *(void **)(lVar20 + 0x1028);
      (**(code **)(DAT_0528c850 + 0x18))(&DAT_0528c850);
      __src = DAT_0528c858;
      if (__dest != DAT_0528c858) {
        (**(code **)(DAT_0528c850 + 0x18))(&DAT_0528c850);
        lVar15 = 0;
        do {
          if (*(char *)((long)DAT_0528c858 + lVar15) == '\0') goto LAB_0178521c;
          if (*(char *)((long)DAT_0528c858 + lVar15 + 1) == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_0178521c;
          }
          if (*(char *)((long)DAT_0528c858 + lVar15 + 2) == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_0178521c;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_0178521c:
        iVar7 = (int)lVar15;
        if (*(int *)(lVar20 + 0x1030) <= (int)lVar15) {
          iVar7 = *(int *)(lVar20 + 0x1030) + -1;
        }
        memcpy(__dest,__src,(long)iVar7);
        *(undefined1 *)((long)__dest + (long)iVar7) = 0;
      }
      pcVar17 = (char *)FUN_017c1400(*(undefined8 *)puVar1,uVar22);
      local_38d = 0;
      local_410 = 0x80;
      local_418 = local_40c;
      if (local_40c != pcVar17) {
        lVar20 = 0;
        do {
          if (pcVar17[lVar20] == '\0') {
LAB_017852bc:
            iVar7 = (int)lVar20;
            if (0x7f < iVar7) {
              iVar7 = 0x7f;
            }
            goto LAB_017852c8;
          }
          if (pcVar17[lVar20 + 1] == '\0') {
            lVar20 = lVar20 + 1;
            goto LAB_017852bc;
          }
          if (pcVar17[lVar20 + 2] == '\0') {
            lVar20 = lVar20 + 2;
            goto LAB_017852bc;
          }
          lVar20 = lVar20 + 3;
        } while (lVar20 != 0x80001);
        iVar7 = 0;
LAB_017852c8:
        memcpy(local_40c,pcVar17,(long)iVar7);
        local_40c[iVar7] = '\0';
        pcVar17 = local_418;
      }
      local_420 = PTR_DAT_04bb2d88 + 0x10;
      if (*pcVar17 != '\0') {
        FUN_0074ed40(param_2,&local_420,0);
        lVar20 = (**(code **)(*param_1 + 0xe8))(param_1,4);
        pcVar23 = *(char **)(lVar20 + 0x1208);
        (**(code **)(local_420 + 0x18))(&local_420);
        pcVar17 = local_418;
        if (pcVar23 != local_418) {
          (**(code **)(local_420 + 0x18))(&local_420);
          lVar15 = 0;
          do {
            if (local_418[lVar15] == '\0') goto LAB_01785394;
            if (local_418[lVar15 + 1] == '\0') {
              lVar15 = lVar15 + 1;
              goto LAB_01785394;
            }
            if (local_418[lVar15 + 2] == '\0') {
              lVar15 = lVar15 + 2;
              goto LAB_01785394;
            }
            lVar15 = lVar15 + 3;
          } while (lVar15 != 0x80001);
          lVar15 = 0;
LAB_01785394:
          iVar7 = (int)lVar15;
          if (*(int *)(lVar20 + 0x1210) <= (int)lVar15) {
            iVar7 = *(int *)(lVar20 + 0x1210) + -1;
          }
          memcpy(pcVar23,pcVar17,(long)iVar7);
          pcVar23[iVar7] = '\0';
        }
      }
    }
  }
  plVar21 = *(long **)(param_1[9] + 0x68);
  if (plVar21 != (long *)0x0) {
    plVar10 = (long *)(**(code **)(*plVar21 + 0xe8))(plVar21,0);
    local_388 = (undefined *)0x0;
    local_380 = (char *)((ulong)local_380 & 0xffffffff00000000);
    (**(code **)(*plVar10 + 0x100))(plVar10,&local_388);
    plVar10 = (long *)(**(code **)(*plVar21 + 0xe8))(plVar21,0);
    puVar1 = PTR_DAT_04bb2ce8;
    (**(code **)(*plVar10 + 0x160))(plVar10,PTR_DAT_04bb2ce8);
    plVar10 = (long *)(**(code **)(*plVar21 + 0xe8))(plVar21,1);
    local_388 = (undefined *)0xc1200000;
    local_380._0_4_ = 0xc2200000;
    (**(code **)(*plVar10 + 0x100))(plVar10,&local_388);
    plVar10 = (long *)(**(code **)(*plVar21 + 0xe8))(plVar21,1);
    (**(code **)(*plVar10 + 0x160))(plVar10,puVar1);
    plVar10 = (long *)(**(code **)(*plVar21 + 0xe8))(plVar21,2);
    local_380._0_4_ = 0xc2200000;
    local_388 = (undefined *)0x41200000;
    (**(code **)(*plVar10 + 0x100))(plVar10,&local_388);
    plVar10 = (long *)(**(code **)(*plVar21 + 0xe8))(plVar21,2);
    (**(code **)(*plVar10 + 0x160))(plVar10,puVar1);
    plVar10 = (long *)(**(code **)(*plVar21 + 0xe8))(plVar21,3);
    local_388 = (undefined *)0xc1200000;
    local_380._0_4_ = 0xc2200000;
    (**(code **)(*plVar10 + 0x100))(plVar10,&local_388);
    plVar10 = (long *)(**(code **)(*plVar21 + 0xe8))(plVar21,3);
    (**(code **)(*plVar10 + 0x160))(plVar10,puVar1);
    plVar10 = (long *)(**(code **)(*plVar21 + 0xe8))(plVar21,4);
    local_388 = (undefined *)0xc1200000;
    local_380 = (char *)CONCAT44(local_380._4_4_,0xc2200000);
    (**(code **)(*plVar10 + 0x100))(plVar10,&local_388);
    plVar21 = (long *)(**(code **)(*plVar21 + 0xe8))(plVar21,4);
    (**(code **)(*plVar21 + 0x160))(plVar21,puVar1);
  }
  FUN_0074ed40(param_2,&DAT_0528cdd0,0);
  FUN_0074ed40(param_2,&DAT_0528cfd0,0);
  FUN_0074ed40(param_2,&local_2f0,0);
  FUN_0074ed40(param_2,&DAT_0528c980,0);
  return;
}

