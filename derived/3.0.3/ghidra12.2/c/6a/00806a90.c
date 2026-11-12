
void FUN_00806a90(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long *plVar12;
  char *pcVar13;
  long lVar14;
  undefined1 auStack_1816 [2];
  undefined1 auStack_1814 [2];
  undefined1 auStack_1812 [2];
  undefined1 auStack_1810 [2];
  undefined1 auStack_180e [2];
  undefined1 auStack_180c [2];
  undefined1 auStack_180a [2];
  undefined1 auStack_1808 [2];
  undefined1 auStack_1806 [2];
  undefined4 local_1804;
  undefined4 uStack_1800;
  undefined1 auStack_17fa [2];
  undefined1 auStack_17f8 [2];
  undefined1 auStack_17f6 [2];
  undefined1 auStack_17f4 [2];
  undefined1 auStack_17f2 [2];
  undefined4 local_17f0;
  undefined4 uStack_17ec;
  undefined1 auStack_17d6 [2];
  undefined1 auStack_17d4 [2];
  undefined1 auStack_17d2 [2];
  undefined1 auStack_17d0 [2];
  undefined1 auStack_17ce [2];
  undefined1 auStack_17cc [2];
  undefined1 auStack_17ca [2];
  undefined1 auStack_17c8 [2];
  undefined1 auStack_17c6 [2];
  undefined1 auStack_17c4 [2];
  undefined1 auStack_17c2 [2];
  undefined *local_17c0;
  char *local_17b8;
  undefined1 auStack_11e [2];
  undefined1 auStack_11c [2];
  undefined1 auStack_11a [2];
  undefined *local_118;
  undefined1 *local_110;
  int local_108;
  undefined1 local_104 [7];
  undefined1 local_fd;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  
  puVar3 = PTR_DAT_04bb37e0;
  lVar10 = *(long *)PTR_DAT_04bb4e28;
  if (lVar10 == 0) {
    return;
  }
  local_f0 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_ee = PTR_DAT_04bb37e0[2];
  local_ed = PTR_DAT_04bb37e0[3];
  local_e0 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_f8 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_98 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_b0 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_f4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_ec = local_f4;
  local_e8 = local_f0;
  local_e6 = local_ee;
  local_e5 = local_ed;
  local_e4 = local_f4;
  local_dc = local_f4;
  local_d8 = local_f0;
  local_d6 = local_ee;
  local_d5 = local_ed;
  local_d4 = local_f4;
  local_d0 = local_f0;
  local_ce = local_ee;
  local_cd = local_ed;
  local_cc = local_f4;
  local_c8 = local_f0;
  local_c6 = local_ee;
  local_c5 = local_ed;
  local_c4 = local_f4;
  local_c0 = local_f0;
  local_be = local_ee;
  local_bd = local_ed;
  local_bc = local_f4;
  local_b8 = local_f0;
  local_b6 = local_ee;
  local_b5 = local_ed;
  local_b4 = local_f4;
  local_ac = local_f4;
  local_a8 = local_f0;
  local_a6 = local_ee;
  local_a5 = local_ed;
  local_a4 = local_f4;
  local_a0 = local_f0;
  local_9e = local_ee;
  local_9d = local_ed;
  local_9c = local_f4;
  local_94 = local_f4;
  local_90 = local_f0;
  local_8e = local_ee;
  local_8d = local_ed;
  local_8c = local_f4;
  local_88 = local_f0;
  local_86 = local_ee;
  local_85 = local_ed;
  local_84 = local_f4;
  local_80 = local_f0;
  local_7e = local_ee;
  local_7d = local_ed;
  local_7c = local_f4;
  local_78 = local_f0;
  local_76 = local_ee;
  local_75 = local_ed;
  local_74 = local_f4;
  local_70 = local_f0;
  local_6e = local_ee;
  local_6d = local_ed;
  local_6c = local_f4;
  uVar5 = FUN_03722560(lVar10);
  uVar8 = FUN_037363fc(lVar10,&local_b0,uVar5);
  if ((uVar8 & 1) == 0) {
    return;
  }
  uVar5 = FUN_03722560(lVar10,param_2);
  uVar8 = FUN_03736174(lVar10,&local_f8,uVar5);
  if ((uVar8 & 1) == 0) {
    return;
  }
  local_fd = 0;
  local_104[0] = 0;
  local_108 = 8;
  local_118 = PTR_DAT_04bb3768 + 0x10;
  uVar2 = *(uint *)(lVar10 + 0x123c8);
  local_110 = local_104;
  if (uVar2 != 0xffffffff) {
    if (uVar2 < *(uint *)(lVar10 + 0xe0)) {
      lVar14 = *(long *)(*(long *)(lVar10 + 0xe8) + (long)(int)uVar2 * 8);
    }
    else {
      lVar14 = 0;
    }
    plVar12 = (long *)(lVar14 + 0x10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puVar11 = *(undefined1 **)(lVar14 + 0x18);
    if (local_104 != puVar11) {
      (**(code **)(*(long *)(lVar14 + 0x10) + 0x18))(plVar12);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(lVar14 + 0x18) + lVar9) == '\0') goto LAB_00806d1c;
        lVar1 = *(long *)(lVar14 + 0x18) + lVar9;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_00806d1c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_00806d1c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_00806d1c:
      iVar6 = (int)lVar9;
      if (local_108 <= (int)lVar9) {
        iVar6 = local_108 + -1;
      }
      memcpy(local_104,puVar11,(long)iVar6);
      local_104[iVar6] = 0;
    }
  }
  iVar6 = FUN_03722560(lVar10,param_2);
  if ((iVar6 == -1) ||
     ((*(ushort *)(*(long *)(*(long *)(lVar10 + 0xe8) + (long)iVar6 * 8) + 0x114) >> 7 & 1) == 0)) {
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar11 = (undefined1 *)param_2[1];
    (**(code **)(local_118 + 0x18))(&local_118);
    if (puVar11 == local_110) goto LAB_00806e90;
    uVar8 = 0;
    bVar4 = true;
    do {
      if (*(char *)(param_2[1] + uVar8) != local_110[uVar8]) break;
      if (*(char *)(param_2[1] + uVar8) == '\0') {
        if (bVar4) goto LAB_00806e90;
        break;
      }
      bVar4 = uVar8 < 0x80000;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x80001);
    local_17c0 = PTR_DAT_04bb2020 + 0x10;
    local_17b8 = "NpcPlayer";
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar13 = (char *)param_2[1];
    (**(code **)(local_17c0 + 0x18))(&local_17c0);
    if (pcVar13 == local_17b8) goto LAB_00806e90;
    uVar8 = 0;
    bVar4 = true;
    do {
      if (*(char *)(param_2[1] + uVar8) != local_17b8[uVar8]) break;
      if (*(char *)(param_2[1] + uVar8) == '\0') {
        if (bVar4) goto LAB_00806e90;
        break;
      }
      bVar4 = uVar8 < 0x80000;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x80001);
    FUN_007ef010(auStack_17d4,param_1);
    uVar8 = FUN_008067f0(auStack_17d4,param_2);
    if ((uVar8 & 1) == 0) {
      FUN_007ef010(auStack_17d6,param_1);
      uVar8 = FUN_00806224(auStack_17d6,param_2);
      if ((uVar8 & 1) != 0) {
        FUN_01ad5d04(&local_17f0,&local_b0);
        FUN_01b086f4(auStack_17f2,&local_17f0);
        FUN_007ef010(auStack_17f4,param_1);
        FUN_007ef010(auStack_17f6,auStack_17f2);
        FUN_02652f70(auStack_17f4,auStack_17f6);
        FUN_007ef010(auStack_17f8,auStack_17f2);
        FUN_007e4920(&local_17c0,auStack_17f8);
        FUN_007ef010(auStack_17fa,param_1);
        FUN_007e90a0(&local_17c0,auStack_17fa);
        FUN_007ef010(auStack_1806,auStack_17f2);
        FUN_00805ba8(&local_1804,auStack_1806);
        local_b0 = local_1804;
        local_ac = uStack_1800;
      }
    }
    else {
      uVar8 = FUN_021d5fa0(param_2);
      if ((uVar8 & 1) == 0) {
        local_b0 = *(undefined4 *)puVar3;
        local_ac = *(undefined4 *)(puVar3 + 4);
      }
      else {
        local_b0 = local_f8;
        local_ac = local_f4;
      }
    }
    FUN_007ef010(auStack_1808,param_1);
    uVar8 = FUN_00806938(auStack_1808,param_2);
    if ((uVar8 & 1) == 0) {
      FUN_007ef010(auStack_180a,param_1);
      uVar8 = FUN_00806340(auStack_180a,param_2);
      if ((uVar8 & 1) != 0) {
        FUN_01ad5d04(&local_17f0,&local_98);
        FUN_01b086f4(auStack_17f2,&local_17f0);
        FUN_007ef010(auStack_180c,param_1);
        FUN_007ef010(auStack_180e,auStack_17f2);
        FUN_02652f70(auStack_180c,auStack_180e);
        FUN_007ef010(auStack_1810,auStack_17f2);
        FUN_007e4920(&local_17c0,auStack_1810);
        FUN_007ef010(auStack_1812,param_1);
        FUN_007e90a0(&local_17c0,auStack_1812);
        FUN_007ef010(auStack_1814,auStack_17f2);
        FUN_00805ba8(&local_1804,auStack_1814);
        local_98 = local_1804;
        local_94 = uStack_1800;
      }
      goto LAB_008072b4;
    }
LAB_00807204:
    local_98 = local_e0;
    local_94 = local_dc;
  }
  else {
LAB_00806e90:
    plVar12 = *(long **)PTR_DAT_04bb47d8;
    if (plVar12 == (long *)0x0) {
      return;
    }
    iVar6 = FUN_03722560(lVar10,param_2);
    if ((iVar6 != -1) &&
       (uVar2 = *(uint *)(*(long *)(*(long *)(lVar10 + 0xe8) + (long)iVar6 * 8) + 0xd0), uVar2 < 0xb
       )) {
      plVar12 = plVar12 + uVar2;
    }
    if (*plVar12 == 0) {
      return;
    }
    iVar6 = FUN_03722560(lVar10,param_2);
    if (iVar6 == -1) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xe8) + (long)iVar6 * 8) + 0xd0);
    }
    FUN_007ef010(auStack_11a,param_1);
    uVar8 = FUN_008067f0(auStack_11a,param_2);
    if ((uVar8 & 1) == 0) {
      FUN_007ef010(auStack_11c,param_1);
      uVar8 = FUN_00806224(auStack_11c,param_2);
      if ((uVar8 & 1) != 0) {
        FUN_007ef010(auStack_11e,param_1);
        FUN_02656c40(&local_1804,uVar5,auStack_11e);
        FUN_007ef010(auStack_17c2,&local_1804);
        FUN_007e4920(&local_17c0,auStack_17c2);
        FUN_007ef010(auStack_17c4,param_1);
        FUN_007e90a0(&local_17c0,auStack_17c4);
        FUN_007ef010(auStack_17c6,&local_1804);
        FUN_00805ba8(&local_17f0,auStack_17c6);
        local_b0 = local_17f0;
        local_ac = uStack_17ec;
      }
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb4130;
      if (lVar14 != 0) {
        (**(code **)(*param_2 + 0x18))(param_2);
        uVar7 = FUN_006bd550(param_2[1],0);
        local_17c0 = (undefined *)CONCAT44(local_17c0._4_4_,uVar7);
        lVar14 = FUN_0079e4d0(lVar14,&local_17c0);
        if (lVar14 != 0) {
          local_b0 = local_f8;
          local_ac = local_f4;
          goto LAB_008070c8;
        }
      }
      local_b0 = *(undefined4 *)puVar3;
      local_ac = *(undefined4 *)(puVar3 + 4);
    }
LAB_008070c8:
    FUN_007ef010(auStack_17c8,param_1);
    uVar8 = FUN_00806938(auStack_17c8,param_2);
    if ((uVar8 & 1) == 0) {
      FUN_007ef010(auStack_17ca,param_1);
      uVar8 = FUN_00806340(auStack_17ca,param_2);
      if ((uVar8 & 1) != 0) {
        FUN_007ef010(auStack_17cc,param_1);
        FUN_02656ad0(&local_1804,uVar5,auStack_17cc);
        FUN_007ef010(auStack_17ce,&local_1804);
        FUN_007e4920(&local_17c0,auStack_17ce);
        FUN_007ef010(auStack_17d0,param_1);
        FUN_007e90a0(&local_17c0,auStack_17d0);
        FUN_007ef010(auStack_17d2,&local_1804);
        FUN_00805ba8(&local_17f0,auStack_17d2);
        local_98 = local_17f0;
        local_94 = uStack_17ec;
      }
      goto LAB_008072b4;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar13 = (char *)param_2[1];
    if (pcVar13 != "NpcPlayer") {
      if (*pcVar13 != 'N') goto LAB_00807204;
      lVar14 = 0;
      do {
        if ((lVar14 == 0x80000) || (lVar9 = lVar14 + 1, pcVar13[lVar9] != "NpcPlayer"[lVar14 + 1]))
        goto LAB_00807204;
        lVar14 = lVar14 + 1;
      } while (pcVar13[lVar9] != '\0');
    }
    local_98 = *(undefined4 *)puVar3;
    local_94 = *(undefined4 *)(puVar3 + 4);
  }
LAB_008072b4:
  uVar5 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,param_2,PTR_DAT_04bb3238,1);
  local_17c0 = (undefined *)CONCAT44(local_17c0._4_4_,uVar5);
  FUN_037327a0(lVar10,&local_17c0,&local_b0,1);
  FUN_007ef010(auStack_1816,param_1);
  uVar8 = FUN_00806470(auStack_1816,param_2);
  if ((uVar8 & 1) != 0) {
    FUN_03736ec4(lVar10);
  }
  return;
}

