
/* WARNING: Removing unreachable block (ram,0x0321d694) */
/* WARNING: Removing unreachable block (ram,0x0321d678) */
/* WARNING: Removing unreachable block (ram,0x0321dba8) */
/* WARNING: Removing unreachable block (ram,0x0321dbc0) */

void FUN_0321d3b0(long param_1,byte param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint *puVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined2 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  byte local_644 [4];
  undefined2 local_640;
  undefined1 uStack_63e;
  undefined1 uStack_63d;
  undefined4 uStack_63c;
  short sStack_638;
  undefined1 uStack_636;
  undefined1 uStack_635;
  int local_634;
  undefined2 uStack_630;
  undefined1 auStack_62e [2];
  undefined4 local_62c;
  undefined2 uStack_628;
  undefined1 uStack_626;
  undefined1 uStack_625;
  undefined4 local_624;
  undefined2 local_620;
  undefined1 local_61e;
  undefined1 local_61d;
  undefined4 local_61c;
  undefined2 local_618;
  undefined1 uStack_616;
  undefined1 uStack_615;
  undefined4 uStack_614;
  undefined2 local_610;
  undefined1 local_60e;
  undefined1 local_60d;
  undefined4 local_60c;
  undefined4 local_608;
  undefined4 local_604;
  undefined2 local_600;
  undefined1 local_5fe;
  undefined1 local_5fd;
  undefined4 local_5fc;
  undefined2 local_5b0;
  undefined *local_5a8 [4];
  int local_584;
  undefined8 local_568;
  undefined1 local_560 [4];
  undefined1 auStack_55c [12];
  undefined8 *local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 *local_520;
  undefined8 local_518;
  undefined8 **local_510;
  undefined8 *local_508;
  undefined8 local_500;
  undefined8 local_4f8 [115];
  byte local_15c [4];
  ulong local_158;
  undefined1 *local_150;
  undefined8 *****local_148;
  undefined8 *****local_140;
  undefined8 *****local_138;
  undefined8 *****local_130;
  undefined8 *****local_128;
  undefined8 *****local_120;
  undefined8 *****local_118;
  undefined8 ****local_110;
  undefined8 ***local_108;
  undefined8 **local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [80];
  undefined4 local_98;
  byte local_94 [4];
  undefined **local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  long local_80;
  undefined *local_78;
  char *local_70;
  
  local_94[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_94[0]) {
    local_94[0] = 0xff;
  }
  if (*(int *)(param_1 + 0x1c4c8) != 0) {
    FUN_0267b340(local_94);
  }
  iVar11 = (uint)*(byte *)(param_1 + 0x1c380) + (uint)*(byte *)(param_1 + 0x1c374) +
           (uint)*(byte *)(param_1 + 0x1c38c) + (uint)*(byte *)(param_1 + 0x1c398) +
           (uint)*(byte *)(param_1 + 0x1c3a4) + (uint)*(byte *)(param_1 + 0x1c3b0) +
           (uint)*(byte *)(param_1 + 0x1c3bc) +
           (uint)*(byte *)(param_1 + 0x1c3c8) + (uint)*(byte *)(param_1 + 0x1c3d4) +
           (uint)*(byte *)(param_1 + 0x1c3e0);
  if (iVar11 != 0) {
    FUN_026772d0(local_94,&DAT_05721738,iVar11);
  }
  local_150 = (undefined1 *)0x0;
  local_158 = 0;
  local_98 = 4;
  local_138 = &local_130;
  local_148 = &local_138;
  local_f0 = 0;
  local_130 = &local_128;
  local_128 = &local_120;
  local_120 = &local_118;
  local_118 = &local_110;
  local_110 = &local_108;
  local_108 = &local_100;
  local_100 = &local_f8;
  local_f8 = &local_f0;
  if (local_e8 != (undefined1 *)0x0) {
    local_158 = 0xa00000000;
    local_150 = local_e8;
  }
  local_140 = local_148;
  FUN_0321ca40(param_1,&local_158,param_2 & 1);
  iVar11 = (int)local_158;
  uVar23 = local_158 & 0xffffffff;
  if (0 < (int)local_158) {
    if (*(char *)(param_1 + 0x1c4c0) == '\0') {
      uVar20 = 0;
      local_98 = 1;
LAB_0321d564:
      do {
        uVar23 = FUN_026738b0(local_94,*(undefined8 *)(local_150 + uVar20 * 8),1,0);
        if ((uVar23 & 1) == 0) break;
        uVar20 = uVar20 + 1;
      } while ((long)uVar20 < (long)iVar11);
    }
    else {
      uVar20 = 0;
      local_98 = 2;
      do {
        uVar14 = FUN_0267d630(local_94,*(undefined8 *)(local_150 + uVar20 * 8));
        if ((uVar14 & 1) == 0) {
          if ((int)uVar20 < iVar11) {
            local_98 = 3;
            if ((int)uVar20 == 0) {
              local_98 = 1;
            }
            goto LAB_0321d564;
          }
          break;
        }
        uVar20 = uVar20 + 1;
      } while (uVar23 != uVar20);
    }
  }
  puVar3 = PTR_DAT_04bb2230;
  lVar18 = 0;
  if (*(long *)PTR_DAT_04bb2230 != 0) {
    lVar18 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
  }
  local_640 = 0;
  uStack_63e = 0;
  uStack_63d = 0;
  if (DAT_05739db8 != 0) {
    lVar17 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar17 = 0;
    }
    if (*(char *)(lVar17 + 0x68) != '\0') {
      *(undefined1 *)(lVar17 + 0x69) = 1;
    }
  }
  *(char *)(lVar18 + 0x12) = (char)local_98;
  _local_560 = (undefined8 *)CONCAT62(stack0xfffffffffffffaa2,0x100);
  local_568 = PTR_DAT_04bc98a0 + 0x10;
  memset(auStack_55c,0,0x400);
  lVar18 = 0;
  do {
    *(undefined8 *)(auStack_55c + lVar18) = 0xfffe;
    FUN_0277d4ac();
    lVar18 = lVar18 + 8;
  } while (lVar18 != 0x400);
  lVar18 = *(long *)puVar3;
  local_15c[0] = 0;
  if (lVar18 == 0) {
    lVar18 = 0;
    if (cRam00000000000004e0 == '\0') goto LAB_0321d6ac;
LAB_0321d634:
    bVar9 = (**(code **)(*(long *)(lVar18 + 0x4d8) + 0x18))(lVar18 + 0x4d8);
    *(undefined1 *)(lVar18 + 0x4e0) = 0;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x28);
    if (*(char *)(lVar18 + 0x4e0) != '\0') goto LAB_0321d634;
LAB_0321d6ac:
    bVar9 = 1;
  }
  *(byte *)(lVar18 + 0x4e1) = bVar9 & 1;
  uVar6 = *(undefined2 *)(lVar18 + 0x4e0);
  _local_560 = (undefined8 *)CONCAT62(stack0xfffffffffffffaa2,uVar6);
  lVar17 = -0x400;
  do {
    lVar4 = lVar18 + lVar17;
    lVar1 = lVar17 + 8;
    *(undefined2 *)(local_15c + lVar17) = *(undefined2 *)(lVar4 + 0x8e4);
    local_15c[lVar17 + 2] = *(byte *)(lVar4 + 0x8e6);
    local_15c[lVar17 + 3] = *(byte *)(lVar4 + 0x8e7);
    *(undefined4 *)(local_15c + lVar17 + 4) = *(undefined4 *)(lVar4 + 0x8e8);
    lVar17 = lVar1;
  } while (lVar1 != 0);
  lVar17 = *(long *)puVar3;
  local_15c[0] = param_2 & 1;
  lVar18 = 0;
  if (lVar17 != 0) {
    lVar18 = *(long *)(lVar17 + 0x28);
  }
  local_640 = 0;
  uStack_63e = 0;
  uStack_63d = 0;
  local_5a8[0] = (undefined *)CONCAT44(local_5a8[0]._4_4_,7);
  if (DAT_05739db8 != 0) {
    lVar17 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar17 = 0;
    }
    if (*(char *)(lVar17 + 0x76) != '\0') {
      *(undefined1 *)(lVar17 + 0x77) = 1;
    }
  }
  *(undefined2 *)(lVar18 + 0x4e0) = uVar6;
  lVar17 = 0;
  do {
    lVar4 = lVar18 + lVar17;
    lVar1 = lVar17 + 8;
    *(undefined2 *)(lVar4 + 0x4e4) = *(undefined2 *)(auStack_55c + lVar17);
    *(undefined1 *)(lVar4 + 0x4e6) = auStack_55c[lVar17 + 2];
    *(undefined1 *)(lVar4 + 0x4e7) = auStack_55c[lVar17 + 3];
    *(undefined4 *)(lVar4 + 0x4e8) = *(undefined4 *)(auStack_55c + lVar17 + 4);
    lVar17 = lVar1;
  } while (lVar1 != 0x400);
  *(byte *)(lVar18 + 0x8e4) = param_2 & 1;
  if ((param_2 & 1) != 0) {
    local_640 = *(undefined2 *)PTR_DAT_04bb37e0;
    uStack_63e = PTR_DAT_04bb37e0[2];
    uStack_63d = PTR_DAT_04bb37e0[3];
    local_608 = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_63c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    sStack_638 = local_640;
    uStack_636 = uStack_63e;
    uStack_635 = uStack_63d;
    local_634 = uStack_63c;
    uStack_630 = local_640;
    auStack_62e[0] = uStack_63e;
    auStack_62e[1] = uStack_63d;
    local_62c = uStack_63c;
    uStack_628 = local_640;
    uStack_626 = uStack_63e;
    uStack_625 = uStack_63d;
    local_624 = uStack_63c;
    local_620 = local_640;
    local_61e = uStack_63e;
    local_61d = uStack_63d;
    local_61c = uStack_63c;
    local_618 = local_640;
    uStack_616 = uStack_63e;
    uStack_615 = uStack_63d;
    uStack_614 = uStack_63c;
    local_610 = local_640;
    local_60e = uStack_63e;
    local_60d = uStack_63d;
    local_60c = uStack_63c;
    local_604 = uStack_63c;
    local_600 = local_640;
    local_5fe = uStack_63e;
    local_5fd = uStack_63d;
    local_5fc = uStack_63c;
    FUN_0321c1a0(param_1,&local_640);
    auStack_55c._4_8_ =
         CONCAT17(auStack_62e[1],CONCAT16(auStack_62e[0],CONCAT24(uStack_630,local_634)));
    local_520 = (undefined8 *)CONCAT35(local_520._5_3_,0x100000000);
    _local_560 = (undefined8 *)
                 CONCAT17(uStack_635,CONCAT16(uStack_636,CONCAT24(sStack_638,uStack_63c)));
    local_518 = (undefined8 ***)((ulong)local_518._4_4_ << 0x20);
    local_550 = (undefined8 *)
                CONCAT17(uStack_625,CONCAT16(uStack_626,CONCAT24(uStack_628,local_62c)));
    bVar9 = local_94[0];
    if (7 < local_94[0]) {
      bVar9 = 0xff;
    }
    local_568 = (undefined *)CONCAT71(local_568._1_7_,bVar9);
    local_568 = (undefined *)
                CONCAT44(CONCAT13(uStack_63d,CONCAT12(uStack_63e,local_640)),(int)local_568);
    local_548 = (undefined8 *)CONCAT17(local_61d,CONCAT16(local_61e,CONCAT24(local_620,local_624)));
    local_540._4_4_ = CONCAT13(uStack_615,CONCAT12(uStack_616,local_618));
    uStack_538._4_4_ = CONCAT13(local_60d,CONCAT12(local_60e,local_610));
    uStack_538._0_4_ = uStack_614;
    uStack_530._0_4_ = local_60c;
    local_540._0_4_ = local_61c;
    uStack_530._4_4_ = local_608;
    local_528 = (undefined8 **)CONCAT17(local_5fd,CONCAT16(local_5fe,CONCAT24(local_600,local_604)))
    ;
    local_520 = (undefined8 *)CONCAT44(local_520._4_4_,local_5fc);
    FUN_02543cdc(&local_568);
  }
  local_568 = (undefined *)0x0;
  _local_560 = (undefined8 *)0x0;
  local_548 = &local_540;
  local_540 = &uStack_538;
  auStack_55c._4_8_ = &local_548;
  uStack_538 = &uStack_530;
  uStack_530 = &local_528;
  local_528 = &local_520;
  local_520 = &local_518;
  local_518 = &local_510;
  local_510 = &local_508;
  local_508 = &local_500;
  local_500 = 0;
  if (local_4f8 != (undefined8 *)0x0) {
    local_568 = (undefined *)0xa00000000;
    _local_560 = local_4f8;
  }
  local_550 = (undefined8 *)auStack_55c._4_8_;
  FUN_0321ca40(param_1,&local_568,0);
  FUN_025d6bd4(local_5a8,local_94);
  local_640 = 0;
  uStack_63e = 0;
  uStack_63d = 0;
  uStack_63c = 0;
  sStack_638 = 0;
  uStack_636 = 0;
  uStack_635 = 0;
  local_634 = 0;
  FUN_00bdc3cc(&uStack_630);
  puVar16 = _local_560;
  puVar2 = PTR_DAT_04bb43c0;
  puVar3 = PTR_DAT_04bb2020;
  uStack_63c = *(undefined4 *)(param_1 + 0x1c4c8);
  local_5b0 = 0;
  local_640 = 1;
  uStack_63e = 0;
  uStack_63d = 0;
  sStack_638 = (ushort)*(byte *)(param_1 + 0x1c380) + (ushort)*(byte *)(param_1 + 0x1c374) +
               (ushort)*(byte *)(param_1 + 0x1c38c) + (ushort)*(byte *)(param_1 + 0x1c398) +
               (ushort)*(byte *)(param_1 + 0x1c3a4) + (ushort)*(byte *)(param_1 + 0x1c3b0) +
               (ushort)*(byte *)(param_1 + 0x1c3bc) +
               (ushort)*(byte *)(param_1 + 0x1c3c8) + (ushort)*(byte *)(param_1 + 0x1c3d4) +
               (ushort)*(byte *)(param_1 + 0x1c3e0);
  uStack_636 = 0;
  uStack_635 = 0;
  local_634 = (int)local_568;
  uVar23 = (ulong)((int)local_568 - 1);
  if (0 < (int)local_568) {
    if (0xe < uVar23) {
      uVar23 = 0xf;
    }
    lVar18 = 0;
    do {
      puVar19 = *(undefined2 **)((long)puVar16 + lVar18);
      lVar17 = lVar18 + 8;
      *(undefined2 *)(auStack_62e + lVar18 + -2) = *puVar19;
      auStack_62e[lVar18] = *(undefined1 *)(puVar19 + 1);
      auStack_62e[lVar18 + 1] = *(undefined1 *)((long)puVar19 + 3);
      *(undefined4 *)(auStack_62e + lVar18 + 2) = *(undefined4 *)(puVar19 + 2);
      lVar18 = lVar17;
    } while (uVar23 * 8 + 8 != lVar17);
    puVar19 = (undefined2 *)*puVar16;
    lVar17 = *(long *)PTR_DAT_04bb43c0;
    uVar10 = FUN_0277d6c4(puVar19);
    lVar18 = *(long *)puVar2;
    if (lVar18 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_90 = &PTR_FUN_04a36b50;
        local_88 = *puVar19;
        local_86 = *(undefined1 *)(puVar19 + 1);
        local_85 = *(undefined1 *)((long)puVar19 + 3);
        local_84 = *(undefined4 *)(puVar19 + 2);
        local_80 = 0;
        uVar10 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar2 != 0) {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar18 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(puVar19);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (uVar10 < *(uint *)(lVar18 + 0x1d8)) {
              lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8);
              if (lVar18 != 0) {
                local_80 = lVar18;
              }
            }
          }
        }
        if (DAT_04c487d4 == -1) {
          FUN_01aed730(&local_90);
        }
        else {
          local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
          puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar5 = (uint *)PTR_DAT_04bc39f8;
          }
          uVar10 = *puVar5;
          FUN_01aed730(&local_90);
          if ((uVar10 >> 3 & 1) != 0) goto LAB_0321dc04;
        }
        local_78 = puVar3 + 0x10;
        local_70 = "RegulationType4";
        uVar23 = FUN_0273f0a0(&local_78);
        if ((uVar23 & 1) != 0) {
          local_5b0 = CONCAT11(local_5b0._1_1_,1);
        }
      }
    }
  }
LAB_0321dc04:
  FUN_025d74cc(local_5a8,&local_640);
  local_5a8[0] = PTR_DAT_04bc3410 + 0x10;
  iVar11 = FUN_025d79cc(local_5a8);
  if (iVar11 == -1) {
LAB_0321dc50:
    if (local_584 == 0) {
      local_584 = 1;
    }
  }
  else {
    iVar11 = (**(code **)(local_5a8[0] + 0x20))(local_5a8);
    local_640 = (undefined2)iVar11;
    uStack_63e = (undefined1)((uint)iVar11 >> 0x10);
    uStack_63d = (undefined1)((uint)iVar11 >> 0x18);
    if (0xc < iVar11) goto LAB_0321dc50;
  }
  FUN_02601530(local_5a8);
  uVar23 = FUN_0321dec0(param_1 + 0x1c330);
  uVar23 = uVar23 & 0xffffffff;
  puVar2 = puVar3 + 0x10;
  local_640 = SUB82(puVar2,0);
  uVar6 = local_640;
  uStack_63e = (undefined1)((ulong)puVar2 >> 0x10);
  uVar7 = uStack_63e;
  uStack_63d = (undefined1)((ulong)puVar2 >> 0x18);
  uVar8 = uStack_63d;
  uStack_63c = (undefined4)((ulong)puVar2 >> 0x20);
  uVar13 = uStack_63c;
  sStack_638 = 0xc62e;
  uStack_636 = 6;
  uStack_635 = 4;
  local_634 = 0;
  FUN_0279b044(local_94,&local_640,uVar23);
  sStack_638 = 0x405a;
  uStack_636 = 0xf;
  uStack_635 = 4;
  local_634 = 0;
  local_640 = uVar6;
  uStack_63e = uVar7;
  uStack_63d = uVar8;
  uStack_63c = uVar13;
  FUN_0279a9f0(local_94,&local_640,uVar23);
  local_644[0] = local_94[0];
  if (7 < local_94[0]) {
    local_644[0] = 0xff;
  }
  uVar20 = FUN_02669430(local_644);
  if ((uVar20 & 1) == 0) goto LAB_0321ddb8;
  if (DAT_05574040 == 0) {
    lVar18 = 0;
    lVar17 = lRam0000000000000178;
    if (lRam0000000000000178 == 0) goto LAB_0321dd44;
LAB_0321dd0c:
    if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
      uVar20 = 0;
      plVar15 = *(long **)(lVar17 + 0x20);
    }
    else {
      uVar20 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      uVar20 = uVar20 & 0xffffffff;
      if (*(long *)(lVar18 + 0x178) == 0) goto LAB_0321dd78;
      plVar15 = *(long **)(*(long *)(lVar18 + 0x178) + 0x20);
    }
    if (plVar15 != (long *)0x0) {
      uVar22 = *(undefined8 *)(lVar18 + 0x158);
      uVar21 = *(undefined8 *)(lVar18 + 0x160);
      local_640 = (undefined2)uVar22;
      uStack_63e = (undefined1)((ulong)uVar22 >> 0x10);
      uStack_63d = (undefined1)((ulong)uVar22 >> 0x18);
      uStack_63c = (undefined4)((ulong)uVar22 >> 0x20);
      sStack_638 = (short)uVar21;
      uStack_636 = (undefined1)((ulong)uVar21 >> 0x10);
      uStack_635 = (undefined1)((ulong)uVar21 >> 0x18);
      local_634 = (int)((ulong)uVar21 >> 0x20);
      uStack_630 = 0xc;
      auStack_62e[0] = 0;
      auStack_62e[1] = 0;
      local_62c = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15,&local_640);
    }
  }
  else {
    lVar17 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
    lVar18 = 0;
    if (lVar17 != 0) {
      lVar18 = lVar17 + 0x276cb0;
    }
    lVar17 = *(long *)(lVar18 + 0x178);
    if (*(long *)(lVar18 + 0x178) != 0) goto LAB_0321dd0c;
LAB_0321dd44:
    uVar20 = 0;
  }
LAB_0321dd78:
  lVar17 = *(long *)(lVar18 + 0x160) + *(long *)(lVar18 + 0x158);
  uVar23 = *(uint *)(lVar17 + 8) + uVar23;
  if (0x7ffffffe < uVar23) {
    uVar23 = 0x7fffffff;
  }
  *(int *)(lVar17 + 8) = (int)uVar23;
  if ((((uVar20 & 1) != 0) && (*(long *)(lVar18 + 0x178) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar18 + 0x178) + 0x18), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
LAB_0321ddb8:
  puVar2 = PTR_DAT_04bb49a0;
  uVar23 = (ulong)local_568 & 0xffffffff;
  if (0 < (int)local_568) {
    uVar20 = 0;
    puVar3 = puVar3 + 0x10;
    do {
      local_640 = SUB82(puVar3,0);
      uVar6 = local_640;
      uStack_63e = (undefined1)((ulong)puVar3 >> 0x10);
      uVar7 = uStack_63e;
      uStack_63d = (undefined1)((ulong)puVar3 >> 0x18);
      uVar8 = uStack_63d;
      uStack_63c = (undefined4)((ulong)puVar3 >> 0x20);
      uVar13 = uStack_63c;
      sStack_638 = 0xbfca;
      uStack_636 = 7;
      uStack_635 = 4;
      local_634 = 0;
      uVar22 = *(undefined8 *)puVar2;
      uVar21 = _local_560[uVar20];
      uVar12 = FUN_006bd550("PE_BuyItemTailor_HighPrice",0);
      local_5a8[0]._0_4_ = uVar12;
      uVar22 = FUN_01b5b4b0(uVar22,local_5a8);
      FUN_01b5e0b0(&local_640,uVar21,uVar22,local_94,0);
      sStack_638 = 0xe81d;
      uStack_636 = 0xf;
      uStack_635 = 4;
      local_634 = 0;
      uVar22 = *(undefined8 *)puVar2;
      uVar21 = _local_560[uVar20];
      local_640 = uVar6;
      uStack_63e = uVar7;
      uStack_63d = uVar8;
      uStack_63c = uVar13;
      uVar13 = FUN_006bd550("PE_BuyItemTailor_New",0);
      local_5a8[0] = (undefined *)CONCAT44(local_5a8[0]._4_4_,uVar13);
      uVar22 = FUN_01b5b4b0(uVar22,local_5a8);
      FUN_01b5e0b0(&local_640,uVar21,uVar22,local_94,0);
      uVar20 = uVar20 + 1;
    } while (uVar23 != uVar20);
  }
  uVar13 = FUN_0321dec0(param_1 + 0x1c330);
  FUN_01b67430(6,uVar13,local_94);
  return;
}

