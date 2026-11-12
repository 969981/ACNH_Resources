
/* WARNING: Type propagation algorithm not settling */

ulong FUN_008fa0e0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  uint *puVar12;
  char *pcVar13;
  uint uVar14;
  ulong uVar15;
  long *local_120;
  uint local_118;
  undefined *local_110;
  undefined1 *local_108;
  undefined *local_100;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  undefined1 local_ec [31];
  undefined1 local_cd;
  undefined *local_c8;
  char *local_c0;
  undefined4 local_b8;
  char local_b4 [31];
  undefined1 local_95;
  undefined **local_90;
  undefined **local_88;
  undefined4 *local_80;
  undefined4 local_6c [3];
  
  puVar4 = PTR_DAT_04bb2020;
  if (*(char *)param_2[1] == '\0') goto LAB_008fa674;
  local_95 = 0;
  local_b4[0] = '\0';
  local_c0 = local_b4;
  local_b8 = 0x20;
  puStack_f8 = local_ec;
  local_f0 = 0x20;
  local_cd = 0;
  local_100 = PTR_DAT_04bb2028 + 0x10;
  local_ec[0] = 0;
  local_110 = PTR_DAT_04bb2020 + 0x10;
  local_118 = 0;
  local_108 = &DAT_040addd9;
  local_120 = param_2;
  local_c8 = local_100;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar8 = 0;
  do {
    if (*(char *)(param_2[1] + lVar8) == '\0') {
LAB_008fa1dc:
      uVar14 = (int)lVar8 + 1;
      goto LAB_008fa1e0;
    }
    lVar1 = param_2[1] + lVar8;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_008fa1dc;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_008fa1dc;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  uVar14 = 1;
LAB_008fa1e0:
  if ((local_120 != param_2) || (local_118 != uVar14)) {
    FUN_008c8970(&local_120,&local_c8);
    uVar6 = local_118;
    plVar5 = local_120;
    uVar15 = (ulong)local_118;
    (**(code **)(*local_120 + 0x18))(local_120);
    lVar8 = 0;
    do {
      if (*(char *)(plVar5[1] + lVar8) == '\0') {
LAB_008fa260:
        iVar9 = (int)lVar8;
        goto joined_r0x008fa290;
      }
      lVar1 = plVar5[1] + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_008fa260;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        iVar9 = (int)lVar8 + 2;
        goto joined_r0x008fa290;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    iVar9 = 0;
joined_r0x008fa290:
    if ((-1 < (int)uVar6) && ((int)uVar6 <= iVar9)) {
      pcVar13 = (char *)(local_120[1] + uVar15);
      cVar2 = *pcVar13;
      while (cVar2 != '\0') {
        (**(code **)(local_110 + 0x18))(&local_110);
        uVar10 = 0;
        bVar7 = true;
        cVar2 = *pcVar13;
        do {
          if (local_108[uVar10] == '\0') break;
          if (local_108[uVar10] == cVar2) {
            if (bVar7) goto LAB_008fa330;
            break;
          }
          if (local_108[uVar10 + 1] == '\0') break;
          if (local_108[uVar10 + 1] == cVar2) goto LAB_008fa330;
          if (local_108[uVar10 + 2] == '\0') break;
          if (local_108[uVar10 + 2] == cVar2) goto LAB_008fa330;
          bVar7 = uVar10 < 0x7fffe;
          uVar10 = uVar10 + 3;
        } while (uVar10 != 0x80001);
        uVar15 = uVar15 + 1;
        pcVar13 = (char *)(local_120[1] + uVar15);
        cVar2 = *pcVar13;
      }
LAB_008fa330:
      local_118 = (int)uVar15 + 1;
    }
    if ((local_120 != param_2) || (local_118 != uVar14)) {
      FUN_008c8970(&local_120,&local_100);
      uVar14 = local_118;
      plVar5 = local_120;
      uVar15 = (ulong)local_118;
      (**(code **)(*local_120 + 0x18))(local_120);
      lVar8 = 0;
      do {
        if (*(char *)(plVar5[1] + lVar8) == '\0') goto LAB_008fa3b0;
        lVar1 = plVar5[1] + lVar8;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_008fa3b0;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_008fa3b0;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_008fa3b0:
      if ((-1 < (int)uVar14) && ((int)uVar14 <= (int)lVar8)) {
        pcVar13 = (char *)(local_120[1] + uVar15);
        cVar2 = *pcVar13;
        while (cVar2 != '\0') {
          (**(code **)(local_110 + 0x18))(&local_110);
          uVar10 = 0;
          bVar7 = true;
          cVar2 = *pcVar13;
          do {
            if (local_108[uVar10] == '\0') break;
            if (local_108[uVar10] == cVar2) {
              if (bVar7) goto LAB_008fa460;
              break;
            }
            if (local_108[uVar10 + 1] == '\0') break;
            if (local_108[uVar10 + 1] == cVar2) goto LAB_008fa460;
            if (local_108[uVar10 + 2] == '\0') break;
            if (local_108[uVar10 + 2] == cVar2) goto LAB_008fa460;
            bVar7 = uVar10 < 0x7fffe;
            uVar10 = uVar10 + 3;
          } while (uVar10 != 0x80001);
          uVar15 = uVar15 + 1;
          pcVar13 = (char *)(local_120[1] + uVar15);
          cVar2 = *pcVar13;
        }
LAB_008fa460:
        local_118 = (int)uVar15 + 1;
      }
    }
  }
  local_90 = (undefined **)(puVar4 + 0x10);
  local_88 = (undefined **)0x40b4e4a;
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar13 = (char *)param_2[1];
  (*(code *)local_90[3])(&local_90);
  if ((undefined **)pcVar13 != local_88) {
    uVar15 = 0;
    bVar7 = true;
    do {
      if (*(char *)(param_2[1] + uVar15) != *(char *)((long)local_88 + uVar15)) break;
      if (*(char *)(param_2[1] + uVar15) == '\0') {
        if (bVar7) goto LAB_008fa4f4;
        break;
      }
      bVar7 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x80001);
    local_90 = (undefined **)(puVar4 + 0x10);
    local_88 = (undefined **)&DAT_040aacdf;
    (**(code **)(local_c8 + 0x18))(&local_c8);
    (**(code **)(local_c8 + 0x18))(&local_c8);
    pcVar13 = local_c0;
    (*(code *)local_90[3])(&local_90);
    if ((undefined **)pcVar13 == local_88) {
LAB_008fa688:
      uVar15 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_100,PTR_DAT_04bb3238,1);
      return uVar15;
    }
    uVar15 = 0;
    bVar7 = true;
    do {
      if (local_c0[uVar15] != *(char *)((long)local_88 + uVar15)) break;
      if (local_c0[uVar15] == '\0') {
        if (bVar7) goto LAB_008fa688;
        break;
      }
      bVar7 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x80001);
    (**(code **)(local_c8 + 0x18))(&local_c8);
    (**(code **)(local_c8 + 0x18))(&local_c8);
    puVar4 = PTR_DAT_04bb3238;
    if (local_c0 == "CameraTag") {
LAB_008fa720:
      lVar8 = *(long *)(param_1 + 0x288);
      local_88 = &local_100;
      local_90 = &PTR_FUN_04926aa0;
      local_80 = local_6c;
      if (lVar8 == param_1 + 0x280) {
        puVar12 = (uint *)PTR_DAT_04bb3238;
      }
      else {
        puVar12 = (uint *)(lVar8 + -8);
        local_6c[0] = param_5;
        while( true ) {
          uVar15 = (*(code *)*local_90)(&local_90,puVar12);
          if ((uVar15 & 1) != 0) break;
          lVar8 = *(long *)(lVar8 + 8);
          puVar12 = (uint *)(lVar8 + -8);
          if (puVar12 == (uint *)(param_1 + 0x278)) {
            return (ulong)*(uint *)puVar4;
          }
        }
      }
      return (ulong)*puVar12;
    }
    uVar15 = 0;
    bVar7 = true;
    do {
      if (local_c0[uVar15] != "CameraTag"[uVar15]) break;
      if (local_c0[uVar15] == '\0') {
        if (bVar7) goto LAB_008fa720;
        break;
      }
      bVar7 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x80001);
    (**(code **)(local_c8 + 0x18))(&local_c8);
    (**(code **)(local_c8 + 0x18))(&local_c8);
    if (local_c0 != "Keep") {
      uVar15 = 0;
      bVar7 = true;
      do {
        if (local_c0[uVar15] != (&DAT_0407bd55)[uVar15]) break;
        if (local_c0[uVar15] == '\0') {
          if (bVar7) goto LAB_008fa87c;
          break;
        }
        bVar7 = uVar15 < 0x80000;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x80001);
      (**(code **)(local_c8 + 0x18))(&local_c8);
      (**(code **)(local_c8 + 0x18))(&local_c8);
      if (local_c0 != "KeepFollow") {
        if (*local_c0 != 'K') {
          return 0;
        }
        lVar8 = 0;
        do {
          if (lVar8 == 0x80000) {
            return 0;
          }
          lVar1 = lVar8 + 1;
          if (local_c0[lVar1] != "KeepFollow"[lVar8 + 1]) {
            return 0;
          }
          lVar8 = lVar8 + 1;
        } while (local_c0[lVar1] != '\0');
      }
    }
LAB_008fa87c:
    return (ulong)*(uint *)(param_1 + 0x230);
  }
LAB_008fa4f4:
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  if (lVar8 == 0) {
    bVar3 = *PTR_DAT_04bb32e0;
joined_r0x008fa5ec:
    uVar15 = (ulong)bVar3;
    if (7 < bVar3) {
LAB_008fa5f0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar8 + 0x473);
        pbVar11 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar12 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar12 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar12 & 8) != 0) {
            pbVar11 = (byte *)(lVar8 + 0x471);
          }
        }
        uVar15 = (ulong)*pbVar11;
        if (*pbVar11 < 8) goto LAB_008fa65c;
      }
      uVar15 = (ulong)(byte)*PTR_DAT_04bb5038;
      if (7 < (byte)*PTR_DAT_04bb5038) goto LAB_008fa674;
    }
  }
  else {
    pbVar11 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar8 + 0x158);
    }
    uVar15 = (ulong)*pbVar11;
    if (7 < *pbVar11) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto joined_r0x008fa5ec;
      }
      goto LAB_008fa5f0;
    }
  }
LAB_008fa65c:
  if (*(long *)PTR_DAT_04bb4718 != 0) {
    return (ulong)*(uint *)(*(long *)PTR_DAT_04bb4718 + uVar15 * 4 + 0xde8);
  }
LAB_008fa674:
  return (ulong)*(uint *)PTR_DAT_04bb3238;
}

