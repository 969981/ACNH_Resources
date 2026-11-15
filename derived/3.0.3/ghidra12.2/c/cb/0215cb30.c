
void FUN_0215cb30(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  byte bVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  byte *pbVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_28;
  byte local_24 [4];
  
  *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 1;
  puVar7 = PTR_DAT_04bb2020;
  lVar19 = *(long *)PTR_DAT_04bb39b0;
  pbVar17 = PTR_DAT_04bb32e0;
  if (lVar19 == 0) {
LAB_0215cbb8:
    if (*pbVar17 < 8) goto LAB_0215cc30;
LAB_0215cbc4:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0215cc28:
      pbVar17 = PTR_DAT_04bb5038;
      goto LAB_0215cc30;
    }
    lVar19 = **(long **)PTR_DAT_04bb27d0;
    bVar6 = *(byte *)(lVar19 + 0x473);
    pbVar17 = PTR_DAT_04bb5038;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar4 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar4 = (uint *)(lVar19 + 0x48);
      }
      if ((*puVar4 & 8) != 0) {
        pbVar17 = (byte *)(lVar19 + 0x471);
      }
    }
    local_24[0] = *pbVar17;
    if (7 < local_24[0]) goto LAB_0215cc28;
  }
  else {
    if (*(int *)(lVar19 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar19 + 0x158);
    }
    if (7 < *pbVar17) {
      if ((*(int *)(lVar19 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0215cbb8;
      }
      goto LAB_0215cbc4;
    }
LAB_0215cc30:
    local_24[0] = *pbVar17;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_48 = 0x40fa3f8;
  uStack_44 = 0;
  local_50 = puVar1;
  iVar10 = FUN_02753180(local_24,&local_50);
  local_48 = 0x408d017;
  uStack_44 = 0;
  local_50 = puVar1;
  iVar11 = FUN_02753180(local_24,&local_50);
  if (iVar11 != 0 || iVar10 != 0) {
    if (iVar10 != 2) {
      return;
    }
    if (iVar11 != 2) {
      return;
    }
    pcVar18 = *(char **)(param_1 + 0x740);
    if ((*pcVar18 == 's') && (pcVar18[1] == 'p')) {
      bVar9 = pcVar18[2] == 'n';
    }
    else {
      bVar9 = false;
    }
    local_48 = 0;
    local_50._0_4_ = 0;
    local_50._4_4_ = 0;
    (**(code **)(*(long *)(param_1 + 0x6e0) + 0x18))(param_1 + 0x6e0);
    (**(code **)(*(long *)(param_1 + 0x6e0) + 0x18))(param_1 + 0x6e0);
    if (*(char **)(param_1 + 0x6e8) == "NpcSpaceOut") {
LAB_0215ce40:
      local_50._4_4_ = 0;
      local_48 = 0x44108000;
      if (!bVar9) {
        local_48 = 0x440d0000;
      }
      local_50._0_4_ = 0x442dc000;
      uVar16 = 0x40000000;
      if (!bVar9) {
        uVar16 = 0x20000000;
      }
      lVar19 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
      if (!bVar9) {
        local_50._0_4_ = 0x442f0000;
      }
      *(ulong *)(lVar19 + 0xad58) = *(ulong *)(lVar19 + 0xad58) & 0xfffffffbffffffff;
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x750) = 0;
      puVar22 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
      if (puVar22 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(&DAT_052461c0);
          puVar22 = &DAT_05240280;
          if (iVar10 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar22 = &DAT_05240280;
        }
      }
      uVar14 = FUN_01e39d3c(*(undefined8 *)(param_1 + 8));
      FUN_017081d0(puVar22,uVar14,0,1,0);
    }
    else {
      uVar20 = 0;
      bVar8 = true;
      do {
        cVar5 = (*(char **)(param_1 + 0x6e8))[uVar20];
        if (cVar5 != "NpcSpaceOut"[uVar20]) break;
        if (cVar5 == '\0') {
          if (bVar8) goto LAB_0215ce40;
          break;
        }
        bVar8 = uVar20 < 0x80000;
        uVar20 = uVar20 + 1;
      } while (uVar20 != 0x80001);
      local_50._0_4_ = 0x44304000;
      if (!bVar9) {
        local_50._0_4_ = 0x44354000;
      }
      local_50._4_4_ = 0;
      local_48 = 0x44178000;
      uVar16 = 0xc0000000;
      if (bVar9) {
        uVar16 = 0x40000000;
      }
      lVar19 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
      uVar20 = FUN_01e5e100(*(undefined8 *)(*(long *)(lVar19 + 8) + 0x3b0));
      if ((uVar20 & 1) != 0) {
        *(ulong *)(lVar19 + 0xad58) = *(ulong *)(lVar19 + 0xad58) | 0x400001000;
      }
    }
    *(undefined4 *)(param_1 + 0x7e8) = uVar16;
    *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 0x4000;
    local_54 = uVar16;
    FUN_01e39778(*(undefined8 *)(param_1 + 8),&local_50,&local_54,0);
    goto LAB_0215cf84;
  }
  pcVar18 = *(char **)(param_1 + 0x740);
  if (*pcVar18 != 'p') {
    return;
  }
  if (pcVar18[1] != 'o') {
    return;
  }
  if (pcVar18[2] != 'o') {
    return;
  }
  local_50 = puVar7 + 0x10;
  local_48 = 0x409b637;
  uStack_44 = 0;
  uVar12 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_50,PTR_DAT_04bb3238,1);
  puVar1 = PTR_DAT_04bb27c0;
  lVar19 = *(long *)PTR_DAT_04bb27c0;
  if (lVar19 == 0) {
    return;
  }
  if ((((uVar12 == 0) ||
       (plVar21 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) + (ulong)(uVar12 >> 0x14) * 8)
       , plVar21 == (long *)0x0)) || ((*(uint *)(plVar21 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar21 + 0x46) != uVar12)) {
    plVar21 = (long *)0x0;
  }
  if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
    plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar19 = *(long *)puVar1;
    iVar10 = (**(code **)(*plVar13 + 0x60))();
    if (iVar10 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_0215cfa4;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0215cfa4:
    uVar12 = 0;
  }
  if (plVar21 == (long *)0x0) {
    return;
  }
  lVar19 = plVar21[0x2a];
  if ((*PTR_DAT_04bb37d8 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04bb37d8);
    if (iVar10 != 0) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
  }
  uVar20 = (**(code **)(*plVar21 + 0x20))(plVar21,PTR_DAT_04bb37d0);
  uVar3 = 0;
  if ((int)lVar19 == 1) {
    uVar3 = uVar12;
  }
  if ((uVar20 & 1) == 0) {
    return;
  }
  if (uVar3 == 0) {
    return;
  }
  if (plVar21[0x77] == 0) {
    return;
  }
  lVar19 = *(long *)(plVar21[0x77] + 0xaa48);
  if (lVar19 == 0) {
    return;
  }
  lVar2 = lVar19 + 0x6e0;
  (**(code **)(*(long *)(lVar19 + 0x6e0) + 0x18))(lVar2);
  (**(code **)(*(long *)(lVar19 + 0x6e0) + 0x18))(lVar2);
  if (*(char **)(lVar19 + 0x6e8) == "NpcSpTambourineSound") {
LAB_0215d080:
    pcVar18 = *(char **)(param_1 + 0x6e8);
    if (pcVar18 != "NpcMcasSound") {
      iVar10 = 0xc;
      if (*(int *)(param_1 + 0x6f0) < 0xd) {
        iVar10 = *(int *)(param_1 + 0x6f0) + -1;
      }
      memcpy(pcVar18,"NpcMcasSound",(long)iVar10);
      pcVar18[iVar10] = '\0';
    }
    pcVar18 = *(char **)(param_1 + 0x798);
    if (pcVar18 != "ToolMaracas") {
      iVar10 = 0xb;
      if (*(int *)(param_1 + 0x7a0) < 0xc) {
        iVar10 = *(int *)(param_1 + 0x7a0) + -1;
      }
      memcpy(pcVar18,"ToolMaracas",(long)iVar10);
      pcVar18[iVar10] = '\0';
    }
    lVar19 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
    uVar20 = FUN_01e5e100(*(undefined8 *)(*(long *)(lVar19 + 8) + 0x3b0));
    if ((uVar20 & 1) != 0) {
      *(ulong *)(lVar19 + 0xad58) = *(ulong *)(lVar19 + 0xad58) | 0x400001000;
    }
    *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 0x80;
  }
  else {
    uVar20 = 0;
    bVar9 = true;
    do {
      cVar5 = (*(char **)(lVar19 + 0x6e8))[uVar20];
      if (cVar5 != "NpcSpTambourineSound"[uVar20]) break;
      if (cVar5 == '\0') {
        if (bVar9) goto LAB_0215d080;
        break;
      }
      bVar9 = uVar20 < 0x80000;
      uVar20 = uVar20 + 1;
    } while (uVar20 != 0x80001);
    (**(code **)(*(long *)(lVar19 + 0x6e0) + 0x18))(lVar2);
    (**(code **)(*(long *)(lVar19 + 0x6e0) + 0x18))(lVar2);
    if (*(undefined1 **)(lVar19 + 0x6e8) == &DAT_04062bcd) {
LAB_0215d1bc:
      FUN_006e43a0(param_1 + 0x6e0,lVar2);
      FUN_006e43a0(param_1 + 0x790,lVar19 + 0x790);
      *(undefined4 *)(param_1 + 0x7ec) = 1;
      if (**(char **)(param_1 + 0x798) == '\0') {
        FUN_01e57c78(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3b0),PTR_DAT_04bb37e0,0,1);
      }
      local_50._0_4_ = 0x441c4000;
      local_50._4_4_ = 0;
      local_48 = 0x444e4000;
      *(undefined4 *)(param_1 + 0x7e8) = 0x40000000;
      local_28 = 0x40000000;
      FUN_01e39778(*(undefined8 *)(param_1 + 8),&local_50,&local_28,0);
      lVar19 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
      *(ulong *)(lVar19 + 0xad58) = *(ulong *)(lVar19 + 0xad58) | 0x1000;
      lVar19 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
      *(ulong *)(lVar19 + 0xad58) = *(ulong *)(lVar19 + 0xad58) & 0xfffffffbffffffff;
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x750) = 0;
      uVar14 = FUN_016e3954(*(undefined8 *)(param_1 + 8));
      uVar15 = FUN_01e39d3c(*(undefined8 *)(param_1 + 8));
      FUN_017081d0(uVar14,uVar15,0,1,0);
      goto LAB_0215cf84;
    }
    uVar20 = 0;
    bVar9 = true;
    do {
      cVar5 = (*(undefined1 **)(lVar19 + 0x6e8))[uVar20];
      if (cVar5 != (&DAT_04062bcd)[uVar20]) break;
      if (cVar5 == '\0') {
        if (bVar9) goto LAB_0215d1bc;
        break;
      }
      bVar9 = uVar20 < 0x80000;
      uVar20 = uVar20 + 1;
    } while (uVar20 != 0x80001);
    local_50 = puVar7 + 0x10;
    local_48 = 0x405cf72;
    uStack_44 = 0;
    uVar20 = FUN_00710cb0(lVar2,&local_50);
    if ((uVar20 & 1) == 0) {
      return;
    }
    FUN_006e43a0(param_1 + 0x6e0,lVar2);
    FUN_006e43a0(param_1 + 0x790,lVar19 + 0x790);
    lVar19 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
    uVar20 = FUN_01e5e100(*(undefined8 *)(*(long *)(lVar19 + 8) + 0x3b0));
    if ((uVar20 & 1) != 0) {
      *(ulong *)(lVar19 + 0xad58) = *(ulong *)(lVar19 + 0xad58) | 0x400001000;
    }
  }
  *(undefined4 *)(param_1 + 0x7ec) = 1;
LAB_0215cf84:
  FUN_0215b800(param_1);
  return;
}

