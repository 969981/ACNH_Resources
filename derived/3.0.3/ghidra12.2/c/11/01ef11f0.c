
void FUN_01ef11f0(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  char *__src;
  int iVar10;
  ulong uVar11;
  byte *pbVar12;
  uint *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  uint uVar17;
  char *pcVar18;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  char *local_70;
  int local_68;
  char local_64 [31];
  undefined1 local_45;
  undefined4 local_24;
  
  puVar5 = PTR_DAT_04bb27c0;
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  if (lVar14 == 0) {
    uVar11 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01ef1280;
LAB_01ef12ec:
    if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_01ef1300;
    puVar13 = (uint *)(*(long *)PTR_DAT_04bb4718 + uVar11 * 4 + 0xde8);
  }
  else {
    pbVar12 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar14 + 0x158);
    }
    uVar11 = (ulong)*pbVar12;
    if ((*pbVar12 < 8) ||
       (((*(int *)(lVar14 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar4 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar11 = (ulong)bVar4, bVar4 < 8))))
    goto LAB_01ef12ec;
LAB_01ef1280:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar14 = **(long **)PTR_DAT_04bb27d0;
      bVar4 = *(byte *)(lVar14 + 0x473);
      pbVar12 = PTR_DAT_04bb5038;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar13 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar13 = (uint *)(lVar14 + 0x48);
        }
        if ((*puVar13 & 8) != 0) {
          pbVar12 = (byte *)(lVar14 + 0x471);
        }
      }
      uVar11 = (ulong)*pbVar12;
      if (*pbVar12 < 8) goto LAB_01ef12ec;
    }
    uVar11 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_01ef12ec;
LAB_01ef1300:
    puVar13 = (uint *)PTR_DAT_04bb3238;
  }
  lVar14 = *(long *)PTR_DAT_04bb27c0;
  if (lVar14 == 0) {
    return;
  }
  uVar17 = *puVar13;
  if (((uVar17 == 0) ||
      (plVar15 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                           ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
     (((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar15 + 0x46) != uVar17)))) {
    plVar15 = (long *)0x0;
  }
  if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = *(long *)puVar5;
    iVar8 = (**(code **)(*plVar9 + 0x60))();
    if (iVar8 < 0x11) {
      uVar17 = 1;
    }
    else {
      if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_01ef13b0;
      uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01ef13b0:
    uVar17 = 0;
  }
  if (plVar15 == (long *)0x0) {
    return;
  }
  lVar14 = plVar15[0x2a];
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar11 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb3770);
  uVar3 = 0;
  if ((int)lVar14 == 1) {
    uVar3 = uVar17;
  }
  if ((uVar11 & 1) == 0) {
    return;
  }
  if (uVar3 == 0) {
    return;
  }
  puVar16 = (undefined8 *)plVar15[0xc];
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar8 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  if (puVar16[0x227] == 0) {
    plVar15 = &DAT_04c931a0;
  }
  else {
    plVar15 = (long *)(*(long *)(puVar16[0x227] + 0x88) + 0x60);
  }
  local_68 = 0x20;
  local_45 = 0;
  local_78 = PTR_DAT_04bb2a08 + 0x10;
  local_70 = local_64;
  (**(code **)(*plVar15 + 0x18))(plVar15);
  pcVar18 = (char *)plVar15[1];
  if (local_64 != pcVar18) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
    lVar14 = 0;
    do {
      if (*(char *)(plVar15[1] + lVar14) == '\0') goto LAB_01ef150c;
      lVar1 = plVar15[1] + lVar14;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_01ef150c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_01ef150c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_01ef150c:
    iVar8 = (int)lVar14;
    if (local_68 <= (int)lVar14) {
      iVar8 = local_68 + -1;
    }
    memcpy(local_64,pcVar18,(long)iVar8);
    local_64[iVar8] = '\0';
  }
  puVar5 = PTR_DAT_04bb2028;
  local_78 = PTR_DAT_04bb2028 + 0x10;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "PlayerKKFesRhythmLower";
  local_70[(long)local_68 + -1] = '\0';
  (**(code **)(puVar5 + 0x28))(&local_78);
  pcVar18 = local_70;
  (**(code **)(local_88 + 0x18))(&local_88);
  if (pcVar18 == local_80) {
LAB_01ef15e0:
    local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
    lVar14 = *(long *)(param_1 + 0x10);
    local_24 = 0;
    FUN_01e5a930(0x40000000,lVar14,0xd,PTR_DAT_04bb2150,&local_88,&local_24,PTR_DAT_04bc1600,6);
    pcVar18 = *(char **)(lVar14 + 0x3b8);
    if (pcVar18 == "NpcKKFesRhythmLower") goto LAB_01ef1800;
    iVar8 = *(int *)(lVar14 + 0x3c0);
    __src = "NpcKKFesRhythmLower";
LAB_01ef17d8:
    bVar7 = SBORROW4(iVar8,0x13);
    iVar2 = iVar8 + -0x13;
    bVar6 = iVar8 == 0x13;
    iVar10 = 0x13;
  }
  else {
    uVar11 = 0;
    bVar6 = true;
    do {
      if (local_70[uVar11] != local_80[uVar11]) break;
      if (local_70[uVar11] == '\0') {
        if (bVar6) goto LAB_01ef15e0;
        break;
      }
      bVar6 = uVar11 < 0x80000;
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x80001);
    (**(code **)(local_78 + 0x18))(&local_78);
    (**(code **)(local_78 + 0x18))(&local_78);
    if (local_70 == "PlayerKKFesRhythmRight") {
LAB_01ef16b0:
      local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
      lVar14 = *(long *)(param_1 + 0x10);
      local_24 = 0;
      FUN_01e5a930(0x40000000,lVar14,0xd,PTR_DAT_04bb2150,&local_88,&local_24,PTR_DAT_04bc1600,6);
      pcVar18 = *(char **)(lVar14 + 0x3b8);
      if (pcVar18 == "NpcKKFesRhythmRight") goto LAB_01ef1800;
      iVar8 = *(int *)(lVar14 + 0x3c0);
      __src = "NpcKKFesRhythmRight";
      goto LAB_01ef17d8;
    }
    uVar11 = 0;
    bVar6 = true;
    do {
      if (local_70[uVar11] != "PlayerKKFesRhythmRight"[uVar11]) break;
      if (local_70[uVar11] == '\0') {
        if (bVar6) goto LAB_01ef16b0;
        break;
      }
      bVar6 = uVar11 < 0x80000;
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x80001);
    (**(code **)(local_78 + 0x18))(&local_78);
    (**(code **)(local_78 + 0x18))(&local_78);
    if (local_70 == "PlayerKKFesRhythmUpper") {
LAB_01ef1780:
      local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
      lVar14 = *(long *)(param_1 + 0x10);
      local_24 = 0;
      FUN_01e5a930(0x40000000,lVar14,0xd,PTR_DAT_04bb2150,&local_88,&local_24,PTR_DAT_04bc1600,6);
      pcVar18 = *(char **)(lVar14 + 0x3b8);
      if (pcVar18 == "NpcKKFesRhythmUpper") goto LAB_01ef1800;
      iVar8 = *(int *)(lVar14 + 0x3c0);
      __src = "NpcKKFesRhythmUpper";
      goto LAB_01ef17d8;
    }
    uVar11 = 0;
    bVar6 = true;
    do {
      if (local_70[uVar11] != "PlayerKKFesRhythmUpper"[uVar11]) break;
      if (local_70[uVar11] == '\0') {
        if (bVar6) goto LAB_01ef1780;
        break;
      }
      bVar6 = uVar11 < 0x80000;
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x80001);
    (**(code **)(local_78 + 0x18))(&local_78);
    (**(code **)(local_78 + 0x18))(&local_78);
    if (local_70 != "PlayerKKFesRhythmLeft") {
      uVar11 = 0;
      bVar6 = true;
      while( true ) {
        if (local_70[uVar11] != "PlayerKKFesRhythmLeft"[uVar11]) {
          return;
        }
        if (local_70[uVar11] == '\0') break;
        bVar6 = uVar11 < 0x80000;
        uVar11 = uVar11 + 1;
        if (uVar11 == 0x80001) {
          return;
        }
      }
      if (!bVar6) {
        return;
      }
    }
    local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
    lVar14 = *(long *)(param_1 + 0x10);
    local_24 = 0;
    FUN_01e5a930(0x40000000,lVar14,0xd,PTR_DAT_04bb2150,&local_88,&local_24,PTR_DAT_04bc1600,6);
    pcVar18 = *(char **)(lVar14 + 0x3b8);
    if (pcVar18 == "NpcKKFesRhythmLeft") goto LAB_01ef1800;
    iVar8 = *(int *)(lVar14 + 0x3c0);
    __src = "NpcKKFesRhythmLeft";
    bVar7 = SBORROW4(iVar8,0x12);
    iVar2 = iVar8 + -0x12;
    bVar6 = iVar8 == 0x12;
    iVar10 = 0x12;
  }
  if (bVar6 || iVar2 < 0 != bVar7) {
    iVar10 = iVar8 + -1;
  }
  memcpy(pcVar18,__src,(long)iVar10);
  pcVar18[iVar10] = '\0';
LAB_01ef1800:
  *(undefined4 *)(lVar14 + 0x3a0) = 0;
  *(undefined1 *)(lVar14 + 0x410) = 0;
  return;
}

