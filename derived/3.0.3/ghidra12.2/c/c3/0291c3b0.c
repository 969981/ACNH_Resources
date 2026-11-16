
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0291c3b0(byte *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  local_58 = 0;
  local_70 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_6c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  puStack_b8 = PTR_DAT_04bb2010 + 0x10;
  local_60 = 0;
  bVar6 = *param_1;
  psVar2 = (short *)(*(long *)PTR_DAT_04bb4770 + (ulong)bVar6 * 8);
  if (7 < bVar6) {
    psVar2 = (short *)PTR_DAT_04bb37e0;
  }
  uVar18 = (uint)bVar6;
  local_68 = puStack_b8;
  if (*psVar2 == -2) {
    local_78 = 0;
    if (7 < uVar18) {
      bVar6 = 0xff;
    }
    local_b0 = 0;
    local_88 = 0;
    local_c0 = PTR_DAT_04bbc1a0 + 0x10;
    local_a0 = 0;
    local_a8 = puStack_b8;
    local_98 = local_c0;
    local_90 = puStack_b8;
    puStack_80 = puStack_b8;
    uVar15 = FUN_00924fe8(&local_98,&local_c0,(int)(char)bVar6);
    if ((uVar15 & 1) == 0) {
      puVar19 = DAT_055c1b60;
      if (DAT_055c1b60 == &DAT_055c1b58) {
        plVar21 = &DAT_055c1098;
      }
      else {
        do {
          plVar21 = puVar19 + -8;
          if (*(int *)(puVar19 + -1) == -0x24a26848) goto LAB_0291c810;
          puVar1 = puVar19 + 1;
          puVar19 = (undefined8 *)*puVar1;
        } while ((undefined8 *)*puVar1 != &DAT_055c1b58);
        plVar21 = &DAT_055c1098;
      }
LAB_0291c810:
      if (((*PTR_DAT_04bb3998 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar13 != 0)) {
        FUN_00773950(PTR_DAT_04bb3990);
        __cxa_guard_release(PTR_DAT_04bb3998);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
        uVar15 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar15 * 4) == 0x2ec94ec5)
          goto LAB_0291c860;
          uVar15 = uVar15 + 1;
        } while (*(uint *)PTR_DAT_04bb3990 != uVar15);
      }
      uVar15 = 0;
LAB_0291c860:
      if ((DAT_055c9188 & 1) != 0) {
        return 0;
      }
      if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
        return 0;
      }
      uVar16 = FUN_02930ce0(&DAT_055c10d0,plVar21,param_1);
      if ((uVar16 & 1) == 0) {
        return 0;
      }
      DAT_055c1184 = (undefined4)uVar15;
      DAT_055c1174 = (undefined *)0x43870000;
      _DAT_055c117c = 0x439e0000;
    }
    else {
      puVar19 = DAT_055c1b60;
      if (DAT_055c1b60 == &DAT_055c1b58) {
        plVar21 = &DAT_055c1098;
      }
      else {
        do {
          plVar21 = puVar19 + -8;
          if (*(int *)(puVar19 + -1) == -0x24a26848) goto LAB_0291c718;
          puVar1 = puVar19 + 1;
          puVar19 = (undefined8 *)*puVar1;
        } while ((undefined8 *)*puVar1 != &DAT_055c1b58);
        plVar21 = &DAT_055c1098;
      }
LAB_0291c718:
      iVar11 = (int)local_a0;
      iVar12 = local_a0._4_4_;
      iVar13 = (int)local_b0;
      iVar10 = local_b0._4_4_;
      if (((*PTR_DAT_04bb3998 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar14 != 0)) {
        FUN_00773950(PTR_DAT_04bb3990);
        __cxa_guard_release(PTR_DAT_04bb3998);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
        uVar15 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar15 * 4) == 0x2ec94ec5)
          goto LAB_0291c770;
          uVar15 = uVar15 + 1;
        } while (*(uint *)PTR_DAT_04bb3990 != uVar15);
      }
      uVar15 = 0;
LAB_0291c770:
      if ((((DAT_055c9188 & 1) != 0) || (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0')) ||
         (uVar16 = FUN_02930ce0(&DAT_055c10d0,plVar21,param_1), (uVar16 & 1) == 0)) {
        return 0;
      }
      DAT_055c1184 = (undefined4)uVar15;
      DAT_055c1174 = (undefined *)
                     (ulong)(uint)(((float)iVar13 * 5.0 + (float)iVar11 * 5.0 + 5.0) * 0.5);
      _DAT_055c117c = (ulong)(uint)(((float)iVar10 * 5.0 + (float)iVar12 * 5.0 + 5.0) * 0.5);
    }
    DAT_055c1188 = *param_1;
    _DAT_055c1198 = 0;
    DAT_055c119a = 0;
    DAT_055c116c = 0;
    if (7 < DAT_055c1188) {
      DAT_055c1188 = 0xff;
    }
    lVar20 = *(long *)PTR_DAT_04bb2808;
    if (lVar20 != 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
      iVar13 = FUN_006bd550(plVar21[1],0);
      lVar17 = *(long *)(lVar20 + 8);
      if (lVar17 != 0) {
        uVar3 = param_2[1];
        if (iVar13 == 0x55b5d9de) {
          uVar3 = 1;
        }
        if (*(int *)(lVar20 + 0x10) == 0) {
          uVar23 = param_2[3];
          uVar22 = param_2[4];
          uVar9 = *(undefined2 *)(param_2 + 5);
          uVar4 = param_2[2];
          uVar5 = *param_2;
          *(undefined4 *)(lVar17 + 0x33c) = uVar3;
          *(undefined4 *)(lVar17 + 0x338) = uVar5;
          *(undefined4 *)(lVar17 + 0x340) = uVar4;
          *(undefined4 *)(lVar17 + 0x348) = uVar22;
          *(undefined2 *)(lVar17 + 0x34c) = uVar9;
          *(undefined4 *)(lVar17 + 0x344) = uVar23;
        }
      }
    }
  }
  else {
    local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
    if (7 < bVar6) {
      uVar18 = 0xffffffff;
    }
    local_90 = (undefined *)0x0;
    local_98 = puStack_b8;
    FUN_00924eb8(&local_98,&local_c0,uVar18,psVar2);
    local_6c = *(undefined4 *)(psVar2 + 2);
    local_70 = *(undefined4 *)psVar2;
    local_58 = local_c0._0_4_;
    local_60 = local_90;
    FUN_0253cd3c(&local_98,param_1,&local_68,&local_70);
    puVar19 = DAT_055c1b60;
    if (DAT_055c1b60 == &DAT_055c1b58) {
      plVar21 = &DAT_055c1098;
    }
    else {
      do {
        plVar21 = puVar19 + -8;
        if (*(int *)(puVar19 + -1) == -0x24a26848) goto LAB_0291c5c0;
        puVar1 = puVar19 + 1;
        puVar19 = (undefined8 *)*puVar1;
      } while ((undefined8 *)*puVar1 != &DAT_055c1b58);
      plVar21 = &DAT_055c1098;
    }
LAB_0291c5c0:
    if (((*PTR_DAT_04bb3998 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar13 != 0)) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
      uVar15 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar15 * 4) == -0x66f9fe86)
        goto LAB_0291c610;
        uVar15 = uVar15 + 1;
      } while (*(uint *)PTR_DAT_04bb3990 != uVar15);
    }
    uVar15 = 0;
LAB_0291c610:
    if ((DAT_055c9188 & 1) != 0) {
      return 0;
    }
    if (**(char **)(PTR_DAT_04bc3a88 + 8) != '\0') {
      return 0;
    }
    uVar16 = FUN_02930ce0(&DAT_055c10d0,plVar21,param_1);
    if ((uVar16 & 1) == 0) {
      return 0;
    }
    DAT_055c1174 = local_98;
    DAT_055c1184 = (undefined4)uVar15;
    _DAT_055c117c = CONCAT44((undefined4)local_88,local_90._0_4_);
    DAT_055c1188 = *param_1;
    _DAT_055c1198 = 0;
    DAT_055c119a = 0;
    DAT_055c116c = 0;
    if (7 < DAT_055c1188) {
      DAT_055c1188 = 0xff;
    }
    lVar20 = *(long *)PTR_DAT_04bb2808;
    if (lVar20 != 0) {
      (**(code **)(*plVar21 + 0x18))(plVar21);
      iVar13 = FUN_006bd550(plVar21[1],0);
      uVar3 = param_2[1];
      if (iVar13 == 0x55b5d9de) {
        uVar3 = 1;
      }
      lVar17 = *(long *)(lVar20 + 8);
      if ((lVar17 != 0) && (*(int *)(lVar20 + 0x10) == 0)) {
        uVar22 = param_2[3];
        uVar23 = param_2[4];
        uVar4 = *param_2;
        uVar5 = param_2[2];
        uVar7 = *(undefined1 *)(param_2 + 5);
        uVar8 = *(undefined1 *)((long)param_2 + 0x15);
        *(undefined4 *)(lVar17 + 0x33c) = uVar3;
        *(undefined4 *)(lVar17 + 0x338) = uVar4;
        *(undefined4 *)(lVar17 + 0x340) = uVar5;
        *(undefined4 *)(lVar17 + 0x348) = uVar23;
        *(undefined1 *)(lVar17 + 0x34c) = uVar7;
        *(undefined1 *)(lVar17 + 0x34d) = uVar8;
        *(undefined4 *)(lVar17 + 0x344) = uVar22;
        return 1;
      }
    }
  }
  return 1;
}

